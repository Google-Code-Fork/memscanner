#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtGui>
#include "scan.h"
#include "ranges.h"

namespace Ui
{
    class MainWindowClass;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:                        // TODO: vector of all results, show values in table
    Ui::MainWindowClass *ui;
    std::vector<pList::Proc> proc;
    std::vector<Result*> results;
    Scan *scan;
    int Start, Stop;
    int allRanges(std::vector<Ranges::Range>);

private slots:
    void updateList();
    void startSearch();
    void nextSearch();
    void stopSearch();
    void found(Result*);
    void ptraceFailed(int);
    void move();
    void rmRow();

};

#endif // MAINWINDOW_H
