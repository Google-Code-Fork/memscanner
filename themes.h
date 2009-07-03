#ifndef THEMES_H
#define THEMES_H

#include <QtGui/QWidget>

namespace Ui {
    class Themes;
}

class Themes : public QWidget {
    Q_OBJECT
    Q_DISABLE_COPY(Themes)
public:
    explicit Themes(QWidget *parent = 0);
    virtual ~Themes();

protected:
    virtual void changeEvent(QEvent *e);

private:
    Ui::Themes *m_ui;

public slots:
    void setTheme(QString);
};

#endif // THEMES_H
