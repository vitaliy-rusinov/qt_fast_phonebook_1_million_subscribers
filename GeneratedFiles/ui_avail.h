/********************************************************************************
** Form generated from reading UI file 'avail.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AVAIL_H
#define UI_AVAIL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_Avail
{
public:
    QLineEdit *txtP;
    QLabel *label;
    QLabel *label_2;
    QSpinBox *spinBox;
    QLabel *label_3;
    QListView *lst;
    QPushButton *cmdSearch;

    void setupUi(QDialog *Avail)
    {
        if (Avail->objectName().isEmpty())
            Avail->setObjectName(QStringLiteral("Avail"));
        Avail->setWindowModality(Qt::WindowModal);
        Avail->resize(565, 534);
        txtP = new QLineEdit(Avail);
        txtP->setObjectName(QStringLiteral("txtP"));
        txtP->setGeometry(QRect(50, 90, 431, 41));
        QFont font;
        font.setPointSize(12);
        txtP->setFont(font);
        label = new QLabel(Avail);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 20, 441, 41));
        QFont font1;
        font1.setPointSize(10);
        label->setFont(font1);
        label_2 = new QLabel(Avail);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 140, 241, 31));
        label_2->setFont(font1);
        spinBox = new QSpinBox(Avail);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(70, 181, 61, 31));
        spinBox->setMinimum(1);
        spinBox->setMaximum(15);
        spinBox->setValue(7);
        label_3 = new QLabel(Avail);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 60, 521, 21));
        label_3->setFont(font1);
        label_3->setWordWrap(true);
        lst = new QListView(Avail);
        lst->setObjectName(QStringLiteral("lst"));
        lst->setGeometry(QRect(40, 230, 501, 241));
        cmdSearch = new QPushButton(Avail);
        cmdSearch->setObjectName(QStringLiteral("cmdSearch"));
        cmdSearch->setGeometry(QRect(250, 490, 93, 28));

        retranslateUi(Avail);

        QMetaObject::connectSlotsByName(Avail);
    } // setupUi

    void retranslateUi(QDialog *Avail)
    {
        Avail->setWindowTitle(QApplication::translate("Avail", "\320\224\320\276\321\201\321\202\321\203\320\277\320\275\321\213\320\265 \320\275\320\276\320\274\320\265\321\200\320\260", 0));
        txtP->setText(QString());
        label->setText(QApplication::translate("Avail", "\320\237\320\276\320\266\320\260\320\273\321\203\320\271\321\201\321\202\320\260, \320\262\320\262\320\265\320\264\320\270\321\202\320\265 \320\266\320\265\320\273\320\260\320\265\320\274\321\213\320\271 \320\275\320\276\320\274\320\265\321\200 \321\202\320\265\320\273\320\265\321\204\320\276\320\275\320\260", 0));
        label_2->setText(QApplication::translate("Avail", "\320\247\320\270\321\201\320\273\320\276 \321\206\320\270\321\204\321\200 \320\262 \320\275\320\276\320\274\320\265\321\200\320\265", 0));
        label_3->setText(QApplication::translate("Avail", "<html><head/><body><p>\320\225\321\201\320\273\320\270 \320\277\321\200\320\276\320\277\321\203\321\211\320\265\320\275\320\260 \321\206\320\270\321\204\321\200\320\260, \320\277\320\276\321\201\321\202\320\260\320\262\321\214\321\202\320\265 \320\275\320\260 \320\274\320\265\321\201\321\202\320\265 \320\277\321\200\320\276\320\277\321\203\321\201\320\272\320\260 <span style=\" color:#d40000;\">?</span></p><p><br/></p></body></html>", 0));
        cmdSearch->setText(QApplication::translate("Avail", "\320\237\320\276\320\270\321\201\320\272", 0));
    } // retranslateUi

};

namespace Ui {
    class Avail: public Ui_Avail {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AVAIL_H
