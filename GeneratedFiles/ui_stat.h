/********************************************************************************
** Form generated from reading UI file 'stat.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STAT_H
#define UI_STAT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_Stat
{
public:

    void setupUi(QDialog *Stat)
    {
        if (Stat->objectName().isEmpty())
            Stat->setObjectName(QStringLiteral("Stat"));
        Stat->resize(400, 300);

        retranslateUi(Stat);

        QMetaObject::connectSlotsByName(Stat);
    } // setupUi

    void retranslateUi(QDialog *Stat)
    {
        Stat->setWindowTitle(QApplication::translate("Stat", "Dialog", 0));
    } // retranslateUi

};

namespace Ui {
    class Stat: public Ui_Stat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STAT_H
