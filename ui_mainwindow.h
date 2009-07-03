/********************************************************************************
** Form generated from reading ui file 'mainwindow.ui'
**
** Created: Sat Mar 7 21:29:03 2009
**      by: Qt User Interface Compiler version 4.5.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QTableWidget>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowClass
{
public:
    QAction *actionExit;
    QAction *actionTheme;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *toolButton_2;
    QComboBox *comboBox;
    QComboBox *comboBox_3;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QComboBox *comboBox_2;
    QComboBox *comboBox_4;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer_3;
    QWidget *tab_2;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_3;
    QLabel *label_2;
    QListWidget *listWidget;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer;
    QToolButton *toolButton;
    QToolButton *toolButton_3;
    QSpacerItem *verticalSpacer_2;
    QTableWidget *tableWidget;
    QProgressBar *progressBar;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QMenu *menuMenu;
    QMenu *menuView;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindowClass)
    {
        if (MainWindowClass->objectName().isEmpty())
            MainWindowClass->setObjectName(QString::fromUtf8("MainWindowClass"));
        MainWindowClass->resize(361, 296);
        QIcon icon;
        icon.addPixmap(QPixmap(QString::fromUtf8("../../../../../usr/share/icons/Tango/32x32/actions/system-search.png")), QIcon::Normal, QIcon::Off);
        MainWindowClass->setWindowIcon(icon);
        actionExit = new QAction(MainWindowClass);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        QIcon icon1;
        icon1.addPixmap(QPixmap(QString::fromUtf8("../../../../../usr/share/icons/Tango/32x32/actions/gnome-logout.png")), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon1);
        actionTheme = new QAction(MainWindowClass);
        actionTheme->setObjectName(QString::fromUtf8("actionTheme"));
        QIcon icon2;
        icon2.addPixmap(QPixmap(QString::fromUtf8("../../../../../usr/share/icons/Tango/32x32/actions/gtk-new.png")), QIcon::Normal, QIcon::Off);
        actionTheme->setIcon(icon2);
        centralwidget = new QWidget(MainWindowClass);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayout_2 = new QVBoxLayout(tab);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        toolButton_2 = new QToolButton(tab);
        toolButton_2->setObjectName(QString::fromUtf8("toolButton_2"));
        toolButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon3;
        icon3.addPixmap(QPixmap(QString::fromUtf8("../../../../../usr/share/icons/Tango/32x32/actions/gtk-refresh.png")), QIcon::Normal, QIcon::Off);
        toolButton_2->setIcon(icon3);

        horizontalLayout_2->addWidget(toolButton_2);

        comboBox = new QComboBox(tab);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout_2->addWidget(comboBox);

        comboBox_3 = new QComboBox(tab);
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(comboBox_3->sizePolicy().hasHeightForWidth());
        comboBox_3->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(comboBox_3);


        verticalLayout_2->addLayout(horizontalLayout_2);

        lineEdit = new QLineEdit(tab);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy1);

        verticalLayout_2->addWidget(lineEdit);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        radioButton = new QRadioButton(tab);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));

        horizontalLayout_3->addWidget(radioButton);

        radioButton_2 = new QRadioButton(tab);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setChecked(true);

        horizontalLayout_3->addWidget(radioButton_2);

        comboBox_2 = new QComboBox(tab);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(comboBox_2->sizePolicy().hasHeightForWidth());
        comboBox_2->setSizePolicy(sizePolicy2);

        horizontalLayout_3->addWidget(comboBox_2);

        comboBox_4 = new QComboBox(tab);
        comboBox_4->setObjectName(QString::fromUtf8("comboBox_4"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(comboBox_4->sizePolicy().hasHeightForWidth());
        comboBox_4->setSizePolicy(sizePolicy3);

        horizontalLayout_3->addWidget(comboBox_4);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_4->addWidget(label);

        checkBox = new QCheckBox(tab);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        horizontalLayout_4->addWidget(checkBox);

        checkBox_2 = new QCheckBox(tab);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));

        horizontalLayout_4->addWidget(checkBox_2);

        checkBox_3 = new QCheckBox(tab);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));

        horizontalLayout_4->addWidget(checkBox_3);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);


        verticalLayout_2->addLayout(horizontalLayout_4);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);

        QIcon icon4;
        icon4.addPixmap(QPixmap(QString::fromUtf8("../../../../../usr/share/icons/gnome/32x32/categories/package_settings.png")), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(tab, icon4, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        horizontalLayout_6 = new QHBoxLayout(tab_2);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_3 = new QLabel(tab_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QSizePolicy sizePolicy4(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy4);

        horizontalLayout_5->addWidget(label_3);

        label_2 = new QLabel(tab_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy5);

        horizontalLayout_5->addWidget(label_2);


        verticalLayout_4->addLayout(horizontalLayout_5);

        listWidget = new QListWidget(tab_2);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        QSizePolicy sizePolicy6(QSizePolicy::Maximum, QSizePolicy::Expanding);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(listWidget->sizePolicy().hasHeightForWidth());
        listWidget->setSizePolicy(sizePolicy6);
        listWidget->setMaximumSize(QSize(100, 16777215));
        listWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        listWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listWidget->setAutoScroll(false);

        verticalLayout_4->addWidget(listWidget);


        horizontalLayout_6->addLayout(verticalLayout_4);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, -1, -1, -1);
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        toolButton = new QToolButton(tab_2);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        toolButton->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon5;
        icon5.addPixmap(QPixmap(QString::fromUtf8("../../../../../usr/share/icons/Tango/32x32/actions/stock_right.png")), QIcon::Normal, QIcon::Off);
        toolButton->setIcon(icon5);

        verticalLayout_3->addWidget(toolButton);

        toolButton_3 = new QToolButton(tab_2);
        toolButton_3->setObjectName(QString::fromUtf8("toolButton_3"));
        toolButton_3->setCursor(QCursor(Qt::PointingHandCursor));
        QIcon icon6;
        icon6.addPixmap(QPixmap(QString::fromUtf8("../../../../../usr/share/icons/Tango/32x32/actions/editdelete.png")), QIcon::Normal, QIcon::Off);
        toolButton_3->setIcon(icon6);

        verticalLayout_3->addWidget(toolButton_3);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);


        horizontalLayout_6->addLayout(verticalLayout_3);

        tableWidget = new QTableWidget(tab_2);
        if (tableWidget->columnCount() < 5)
            tableWidget->setColumnCount(5);
        QIcon icon7;
        icon7.addPixmap(QPixmap(QString::fromUtf8("../../../../../usr/share/icons/Tango/32x32/mimetypes/ascii.png")), QIcon::Normal, QIcon::Off);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setIcon(icon7);
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QIcon icon8;
        icon8.addPixmap(QPixmap(QString::fromUtf8("../../../../../usr/share/icons/Tango/32x32/mimetypes/x-office-presentation.png")), QIcon::Normal, QIcon::Off);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setIcon(icon8);
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QIcon icon9;
        icon9.addPixmap(QPixmap(QString::fromUtf8("../../../../../usr/share/icons/Tango/32x32/actions/address-book-new.png")), QIcon::Normal, QIcon::Off);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setIcon(icon9);
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QIcon icon10;
        icon10.addPixmap(QPixmap(QString::fromUtf8("../../../../../usr/share/icons/Tango/32x32/mimetypes/application-x-executable.png")), QIcon::Normal, QIcon::Off);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setIcon(icon10);
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QIcon icon11;
        icon11.addPixmap(QPixmap(QString::fromUtf8("../../../../../usr/share/icons/Tango/32x32/actions/gtk-paste.png")), QIcon::Normal, QIcon::Off);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setIcon(icon11);
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->horizontalHeader()->setStretchLastSection(true);

        horizontalLayout_6->addWidget(tableWidget);

        QIcon icon12;
        icon12.addPixmap(QPixmap(QString::fromUtf8("../../../../../usr/share/icons/Tango/32x32/actions/edit-find-replace.png")), QIcon::Normal, QIcon::Off);
        tabWidget->addTab(tab_2, icon12, QString());

        verticalLayout->addWidget(tabWidget);

        progressBar = new QProgressBar(centralwidget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setValue(0);

        verticalLayout->addWidget(progressBar);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, -1, -1, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setEnabled(false);
        QIcon icon13;
        icon13.addPixmap(QPixmap(QString::fromUtf8("../../../../../usr/share/icons/Tango/32x32/actions/process-stop.png")), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon13);

        horizontalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setEnabled(false);
        QIcon icon14;
        icon14.addPixmap(QPixmap(QString::fromUtf8("../../../../../usr/share/icons/Tango/32x32/actions/edit-redo.png")), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon14);

        horizontalLayout->addWidget(pushButton_3);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        sizePolicy3.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy3);
        QIcon icon15;
        icon15.addPixmap(QPixmap(QString::fromUtf8("../../../../../usr/share/icons/Tango/32x32/actions/gnome-searchtool.png")), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon15);

        horizontalLayout->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout);

        MainWindowClass->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindowClass);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 361, 25));
        menuMenu = new QMenu(menubar);
        menuMenu->setObjectName(QString::fromUtf8("menuMenu"));
        menuView = new QMenu(menuMenu);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        QIcon icon16;
        icon16.addPixmap(QPixmap(QString::fromUtf8("../../../../../usr/share/icons/Tango/32x32/actions/document-new.png")), QIcon::Normal, QIcon::Off);
        menuView->setIcon(icon16);
        MainWindowClass->setMenuBar(menubar);
        statusBar = new QStatusBar(MainWindowClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindowClass->setStatusBar(statusBar);

        menubar->addAction(menuMenu->menuAction());
        menuMenu->addAction(menuView->menuAction());
        menuMenu->addAction(actionExit);
        menuView->addAction(actionTheme);

        retranslateUi(MainWindowClass);
        QObject::connect(radioButton_2, SIGNAL(toggled(bool)), comboBox_2, SLOT(setEnabled(bool)));
        QObject::connect(radioButton_2, SIGNAL(toggled(bool)), comboBox_4, SLOT(setEnabled(bool)));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindowClass);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowClass)
    {
        MainWindowClass->setWindowTitle(QApplication::translate("MainWindowClass", "memscanner", 0, QApplication::UnicodeUTF8));
        actionExit->setText(QApplication::translate("MainWindowClass", "Exit", 0, QApplication::UnicodeUTF8));
        actionTheme->setText(QApplication::translate("MainWindowClass", "Change theme", 0, QApplication::UnicodeUTF8));
        toolButton_2->setText(QApplication::translate("MainWindowClass", "...", 0, QApplication::UnicodeUTF8));
        comboBox_3->clear();
        comboBox_3->insertItems(0, QStringList()
         << QApplication::translate("MainWindowClass", "Current user", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindowClass", "All users", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_TOOLTIP
        lineEdit->setToolTip(QApplication::translate("MainWindowClass", "Enter value", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        lineEdit->setWhatsThis(QApplication::translate("MainWindowClass", "Enter value", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        radioButton->setText(QApplication::translate("MainWindowClass", "String", 0, QApplication::UnicodeUTF8));
        radioButton_2->setText(QApplication::translate("MainWindowClass", "Integer", 0, QApplication::UnicodeUTF8));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("MainWindowClass", "4 Bytes", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindowClass", "2 Bytes", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindowClass", "1 Byte", 0, QApplication::UnicodeUTF8)
        );
        comboBox_4->clear();
        comboBox_4->insertItems(0, QStringList()
         << QApplication::translate("MainWindowClass", "Exact value", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindowClass", "Bigger then", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindowClass", "Less then", 0, QApplication::UnicodeUTF8)
        );
        label->setText(QApplication::translate("MainWindowClass", "Search in:", 0, QApplication::UnicodeUTF8));
        checkBox->setText(QApplication::translate("MainWindowClass", "read-only memory", 0, QApplication::UnicodeUTF8));
        checkBox_2->setText(QApplication::translate("MainWindowClass", "heap", 0, QApplication::UnicodeUTF8));
        checkBox_3->setText(QApplication::translate("MainWindowClass", "stack", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindowClass", "Settings", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindowClass", "Found:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindowClass", "0", 0, QApplication::UnicodeUTF8));
        toolButton->setText(QApplication::translate("MainWindowClass", "...", 0, QApplication::UnicodeUTF8));
        toolButton_3->setText(QApplication::translate("MainWindowClass", "...", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindowClass", "Value", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindowClass", "Type", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindowClass", "Address", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindowClass", "Application", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindowClass", "Description", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindowClass", "Results", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("MainWindowClass", "Cancel", 0, QApplication::UnicodeUTF8));
        pushButton_2->setShortcut(QApplication::translate("MainWindowClass", "Esc, C", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("MainWindowClass", "Next", 0, QApplication::UnicodeUTF8));
        pushButton_3->setShortcut(QApplication::translate("MainWindowClass", "N", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("MainWindowClass", "Start", 0, QApplication::UnicodeUTF8));
        pushButton->setShortcut(QApplication::translate("MainWindowClass", "S, Return", 0, QApplication::UnicodeUTF8));
        menuMenu->setTitle(QApplication::translate("MainWindowClass", "Menu", 0, QApplication::UnicodeUTF8));
        menuView->setTitle(QApplication::translate("MainWindowClass", "View", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindowClass: public Ui_MainWindowClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
