#include <stdexcept>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "themes.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindowClass)
{
    ui->setupUi(this);
    connect(ui->comboBox_3, SIGNAL(currentIndexChanged(int)), this, SLOT(updateList()));
    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(startSearch()));
    connect(ui->pushButton_2, SIGNAL(clicked()), this, SLOT(stopSearch()));
    connect(ui->pushButton_3, SIGNAL(clicked()), this, SLOT(nextSearch()));
    connect(ui->toolButton_2, SIGNAL(clicked()), this, SLOT(updateList()));
    connect(ui->actionExit, SIGNAL(triggered()), this, SLOT(close()));
    connect(ui->toolButton, SIGNAL(clicked()), this, SLOT(move()));
    connect(ui->toolButton_3, SIGNAL(clicked()), this, SLOT(rmRow()));
    ui->tableWidget->setColumnWidth(0, 70);
    ui->tableWidget->setColumnWidth(1, 70);
    ui->tableWidget->setColumnWidth(2, 90);
    ui->tableWidget->setColumnWidth(3, 140);
    ui->tableWidget->setColumnWidth(4, 170);
    updateList();
    scan=0;

    Themes *themes=new Themes;
    connect(ui->actionTheme, SIGNAL(triggered()), themes, SLOT(show()));

    ui->statusBar->showMessage("Welcome to memscanner!", 5000);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::updateList(){
    ui->comboBox->clear();
    int size=0;

    bool all;
    if(ui->comboBox_3->currentIndex()==0)
        all=false;
    else
        all=true;

    size=getList(proc, all);

    QMessageBox box;
    box.setIcon(QMessageBox::Critical);
    box.setText("Could not get processes list!");

    if(proc.empty()){
        box.exec();
        return;
    }
    try{
        for(int i=0;i<size;i++){
            std::string index="(";
            std::stringstream stream;
            stream<<proc.at(i).pid;
            index+=stream.str();
            index+=") ";
            index+=proc.at(i).name;
            ui->comboBox->addItem(index.c_str());
        }
    }
    catch(std::out_of_range){
        box.exec();
    }

    if(!ui->comboBox->count()){
        box.exec();
        return;
    }
}

void MainWindow::startSearch(){
    QMessageBox error;
    error.setIcon(QMessageBox::Warning);
    if(scan&&scan->isRunning()){
        error.setText("Searching thread is still running!");
        error.exec();
        return;
    }

    std::vector<Ranges::Range> ranges;

    if(ui->comboBox_4->currentIndex()!=0){
        error.setText("Check \"Exact value\" for first scan");
        error.exec();
        return;
    }

    ui->listWidget->clear();
    results.clear();
    ui->label_2->setText("0");

    bool ok=false;
    try{
        ok=Ranges::getRanges(proc.at(ui->comboBox->currentIndex()).pid,
                             ranges, ui->checkBox->isChecked(), ui->checkBox_2->isChecked(),
                             ui->checkBox_3->isChecked());
    }
    catch(std::out_of_range){
        error.setText("Error - unable to initialize search");
        error.exec();
        return;
    }

    if(!ok||ranges.empty())
    {
        std::stringstream msg;
        msg<<"Error while reading \"/proc/"<<proc[ui->comboBox->currentIndex()].pid<<"/maps\"!";

        error.setText(msg.str().c_str());
        error.exec();
        return;
    }
    if(ui->lineEdit->text().isEmpty()){
        error.setText("Enter value");
        error.exec();
        return;
    }

    ui->pushButton->setEnabled(false);
    ui->pushButton_2->setEnabled(true);
    ui->pushButton_3->setEnabled(true);

    ui->listWidget->clear();
    results.clear();
    ui->label_2->setText("0");

    int space=allRanges(ranges)/1000;

    if(space==0)
        space=1;

    ui->progressBar->setMaximum(allRanges(ranges)/space);

    if(ui->radioButton->isChecked())
        scan=new strScan(proc[ui->comboBox->currentIndex()],
                        ranges, space, ui->lineEdit->text().toLocal8Bit().constData());
    else
        scan=new intScan(proc[ui->comboBox->currentIndex()], ranges, space,
                        ui->lineEdit->text().toLongLong(&ok, 0),
                        static_cast<Size>(ui->comboBox_2->currentIndex()),
                        static_cast<Action>(0));

    if(!ok){
        error.setText("This is not valid integer value");
        error.exec();
        stopSearch();
        return;
    }

    connect(scan, SIGNAL(setPb(int)), ui->progressBar, SLOT(setValue(int)));
    connect(scan, SIGNAL(found(Result*)), this, SLOT(found(Result*)));
    connect(scan, SIGNAL(ptraceFailed(int)), this, SLOT(ptraceFailed(int)));
    connect(scan, SIGNAL(finished()), this, SLOT(stopSearch()));
    scan->start();
}

void MainWindow::stopSearch(){
    QMessageBox error;
    error.setIcon(QMessageBox::Critical);
    if(!scan){
        error.setText("Error");
        error.exec();
        return;
    }

    ui->pushButton->setEnabled(true);
    ui->pushButton_2->setEnabled(false);

    if(ui->listWidget->count())  //enable "Next" button if needed
        ui->pushButton_3->setEnabled(true);
    else
        ui->pushButton_3->setEnabled(false);

    ui->progressBar->setValue(0);

    if(scan->isRunning())
        scan->quit();
}

int MainWindow::allRanges(std::vector<Ranges::Range> ranges){
    unsigned all=0;
    for(unsigned i=0;i<ranges.size();i++){
        all+=ranges[i].stop-ranges[i].start;
    }
    return all;
}

void MainWindow::found(Result* result){
    results.push_back(result);
    char buff[16];
    sprintf(buff, "0x%x", result->addr);
    QListWidgetItem *item=new QListWidgetItem(buff, ui->listWidget);
    item->setFlags(Qt::ItemIsEditable|Qt::ItemIsSelectable|Qt::ItemIsEnabled|Qt::ItemIsUserCheckable);

    std::stringstream ss;
    const int tmp=atoi(ui->label_2->text().toLocal8Bit().constData());
    ss<<tmp+1;
    ui->label_2->setText(ss.str().c_str());
}

void MainWindow::nextSearch(){
    QMessageBox error;
    error.setIcon(QMessageBox::Information);
    if(scan&&scan->isRunning()){
        error.setText("Searching thread is still running!");
        error.exec();
        return;
    }

    if(!ui->listWidget->count()){
        error.setText("No addresses to search again!");
        error.exec();
        return;
        int i=((i==0)?5:4);
    }

    std::vector<Ranges::Range> ranges(ui->listWidget->count());

    for(int i=0;i<ui->listWidget->count();i++){
        ranges[i].start=ranges[i].stop=
          Ranges::HexToDec(ui->listWidget->item(i)->text().toLocal8Bit().constData());
    }

    if(ui->lineEdit->text().isEmpty()){
        error.setText("Enter value");
        error.exec();
        return;
    }

    ui->pushButton->setEnabled(false);
    ui->pushButton_2->setEnabled(true);

    const int space=1;
    ui->progressBar->setMaximum(ui->listWidget->count());

    ui->listWidget->clear();
    results.clear();

    ui->label_2->setText("0");

    bool ok=true;

    if(ui->radioButton->isChecked())
        scan=new strScan(proc[ui->comboBox->currentIndex()], ranges, space,
                        ui->lineEdit->text().toLocal8Bit().constData());
    else
        scan=new intScan(proc[ui->comboBox->currentIndex()], ranges, space,
                         ui->lineEdit->text().toLongLong(&ok, 0),
                         static_cast<Size>(ui->comboBox_2->currentIndex()),
                         static_cast<Action>(ui->comboBox_4->currentIndex()));

    if(!ok){
        error.setText("This is not valid integer value");
        error.exec();
        stopSearch();
        return;
    }

    connect(scan, SIGNAL(setPb(int)), ui->progressBar, SLOT(setValue(int)));
    connect(scan, SIGNAL(found(Result*)), this, SLOT(found(Result*)));
    connect(scan, SIGNAL(finished()), this, SLOT(stopSearch()));
    scan->start();
}

void MainWindow::ptraceFailed(int number){
    QMessageBox error;
    error.setIcon(QMessageBox::Critical);
    QString str="Attaching to process failed: ";
    str.append(strerror(number));
    error.setText(str);
    error.exec();
    stopSearch();
}

void MainWindow::move(){
    if(ui->listWidget->currentRow()==-1)
        return;
    const int i=ui->tableWidget->rowCount();
    ui->tableWidget->setRowCount(i+1);

    QTableWidgetItem *value=new QTableWidgetItem(results.at(ui->listWidget->currentRow())->rep().c_str());
    ui->tableWidget->setItem(i, 0, value);

    QTableWidgetItem *type=new QTableWidgetItem(results.at(ui->listWidget->currentRow())->isInt() ? "int" : "string");
    ui->tableWidget->setItem(i, 1, type);

    QTableWidgetItem *address=new QTableWidgetItem(ui->listWidget->currentItem()->text());
    ui->tableWidget->setItem(i, 2, address);

    std::stringstream app;
    app<<results.at(ui->listWidget->currentRow())->proc.name.c_str()
       <<" ("
       <<results.at(ui->listWidget->currentRow())->proc.pid
       <<")";
    QTableWidgetItem *application=new QTableWidgetItem(app.str().c_str());
    ui->tableWidget->setItem(i, 3, application);
}

void MainWindow::rmRow(){
    ui->tableWidget->removeRow(ui->tableWidget->currentRow());
}
