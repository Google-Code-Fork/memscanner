/********************************************************************************
** Form generated from reading ui file 'themes.ui'
**
** Created: Sun Mar 1 20:28:05 2009
**      by: Qt User Interface Compiler version 4.4.3
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_THEMES_H
#define UI_THEMES_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Themes
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QComboBox *comboBox;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;

    void setupUi(QWidget *Themes)
    {
    if (Themes->objectName().isEmpty())
        Themes->setObjectName(QString::fromUtf8("Themes"));
    Themes->resize(186, 93);
    Themes->setAcceptDrops(false);
    QIcon icon;
    icon.addPixmap(QPixmap(QString::fromUtf8("../../../../../usr/share/icons/Tango/32x32/actions/document-new.png")), QIcon::Normal, QIcon::Off);
    Themes->setWindowIcon(icon);
    verticalLayout = new QVBoxLayout(Themes);
    verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
    label = new QLabel(Themes);
    label->setObjectName(QString::fromUtf8("label"));

    verticalLayout->addWidget(label);

    comboBox = new QComboBox(Themes);
    comboBox->setObjectName(QString::fromUtf8("comboBox"));

    verticalLayout->addWidget(comboBox);

    horizontalLayout = new QHBoxLayout();
    horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
    horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

    horizontalLayout->addItem(horizontalSpacer);

    pushButton = new QPushButton(Themes);
    pushButton->setObjectName(QString::fromUtf8("pushButton"));
    QIcon icon1;
    icon1.addPixmap(QPixmap(QString::fromUtf8("../../../../../usr/share/icons/Tango/32x32/actions/undo.png")), QIcon::Normal, QIcon::Off);
    pushButton->setIcon(icon1);

    horizontalLayout->addWidget(pushButton);


    verticalLayout->addLayout(horizontalLayout);


    retranslateUi(Themes);

    QMetaObject::connectSlotsByName(Themes);
    } // setupUi

    void retranslateUi(QWidget *Themes)
    {
    Themes->setWindowTitle(QApplication::translate("Themes", "Change theme", 0, QApplication::UnicodeUTF8));
    label->setText(QApplication::translate("Themes", "Choose your theme:", 0, QApplication::UnicodeUTF8));
    pushButton->setText(QApplication::translate("Themes", "Quit", 0, QApplication::UnicodeUTF8));
    Q_UNUSED(Themes);
    } // retranslateUi

};

namespace Ui {
    class Themes: public Ui_Themes {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THEMES_H
