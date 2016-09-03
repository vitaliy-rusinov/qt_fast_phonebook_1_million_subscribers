/********************************************************************************
** Form generated from reading UI file 'lists.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LISTS_H
#define UI_LISTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_lists
{
public:
    QPushButton *cmd;
    QTextEdit *textEdit;

    void setupUi(QDialog *lists)
    {
        if (lists->objectName().isEmpty())
            lists->setObjectName(QStringLiteral("lists"));
        lists->resize(446, 453);
        cmd = new QPushButton(lists);
        cmd->setObjectName(QStringLiteral("cmd"));
        cmd->setGeometry(QRect(170, 420, 93, 28));
        textEdit = new QTextEdit(lists);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(10, 10, 431, 401));

        retranslateUi(lists);

        QMetaObject::connectSlotsByName(lists);
    } // setupUi

    void retranslateUi(QDialog *lists)
    {
        lists->setWindowTitle(QApplication::translate("lists", "\320\241\320\277\320\270\321\201\320\276\320\272 \320\260\320\261\320\276\320\275\320\265\320\275\321\202\320\276\320\262", 0));
        cmd->setText(QApplication::translate("lists", "OK", 0));
    } // retranslateUi

};

namespace Ui {
    class lists: public Ui_lists {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LISTS_H
