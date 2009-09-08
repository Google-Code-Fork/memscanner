#include <QStyleFactory>
#include "themes.h"
#include "ui_themes.h"

Themes::Themes(QWidget *parent) :
    QWidget(parent),
    m_ui(new Ui::Themes)
{
    m_ui->setupUi(this);
    connect(m_ui->pushButton, SIGNAL(clicked()), this, SLOT(close()));
    QStringList list=QStyleFactory::keys();
    m_ui->comboBox->addItems(list);
    connect(m_ui->comboBox, SIGNAL(currentIndexChanged(QString)), this, SLOT(setTheme(QString)));
}

Themes::~Themes()
{
    delete m_ui;
}

void Themes::changeEvent(QEvent *e)
{
    switch (e->type()) {
    case QEvent::LanguageChange:
        m_ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void Themes::setTheme(QString key){
    QStyle *style=QStyleFactory::create(key);
    QApplication::setStyle(style);
}
