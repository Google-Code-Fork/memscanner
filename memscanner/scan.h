#ifndef SCAN_H
#define SCAN_H

#include <QThread>
#include <string>
#include <vector>
#include <sys/ptrace.h>
#include <sys/wait.h>
#include <errno.h>
#include <sstream>
#include "ranges.h"
#include "pList/pList.h"

enum Size{INT=0, SHORT=1, BYTE=2};

enum Action{EXACT=0, BIGGER=1, LESS=2};

class Result{
public:
    Result(unsigned, pList::Proc);
    const unsigned addr;
    const pList::Proc proc;
    virtual std::string rep() const=0;
    virtual bool isInt() const=0;
};

class intResult : public Result{
public:
    intResult(unsigned, pList::Proc,  int);
    std::string rep() const;
    bool isInt() const;
private:
    int value;
};

class strResult : public Result{
public:
    strResult(unsigned, pList::Proc, std::string);
    std::string rep() const;
    bool isInt() const;
private:
    const std::string value;
};

class Scan : public QThread{
    Q_OBJECT
public:
    virtual void run()=0;
    Scan(pList::Proc, std::vector<Ranges::Range>, int);

protected:
    const pList::Proc proc;
    const std::vector<Ranges::Range> ranges;
    bool Stopped;
    const int pbSpace;

public slots:
    void quit();

signals:
    void setPb(int);
    void found(Result*);
    void ptraceFailed(int);
};

class intScan : public Scan{
    const int value;
    const Size size;
    const Action action;
public:
    void run();
    intScan(pList::Proc, std::vector<Ranges::Range>, int, int, Size, Action);
};

class strScan : public Scan{
public:
    void run();
    strScan(pList::Proc, std::vector<Ranges::Range>, int, std::string);

private:
    std::string value;
};

#endif // SCAN_H
