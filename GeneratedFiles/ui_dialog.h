/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QLabel *lblName;
    QLabel *lblFName;
    QLabel *lblPName;
    QLabel *lblConType;
    QLabel *label_5;
    QLineEdit *txtName;
    QLineEdit *txtFName;
    QLineEdit *txtPName;
    QComboBox *cmbConType;
    QSpinBox *Year;
    QPushButton *cmdAdd;
    QPushButton *cmdCancel;
    QLineEdit *txtPh;
    QLabel *lblPh;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(479, 371);
        lblName = new QLabel(Dialog);
        lblName->setObjectName(QStringLiteral("lblName"));
        lblName->setGeometry(QRect(20, 70, 53, 16));
        QFont font;
        font.setPointSize(10);
        lblName->setFont(font);
        lblFName = new QLabel(Dialog);
        lblFName->setObjectName(QStringLiteral("lblFName"));
        lblFName->setGeometry(QRect(20, 130, 91, 16));
        lblFName->setFont(font);
        lblPName = new QLabel(Dialog);
        lblPName->setObjectName(QStringLiteral("lblPName"));
        lblPName->setGeometry(QRect(20, 190, 91, 16));
        lblPName->setFont(font);
        lblConType = new QLabel(Dialog);
        lblConType->setObjectName(QStringLiteral("lblConType"));
        lblConType->setGeometry(QRect(20, 250, 151, 16));
        lblConType->setFont(font);
        label_5 = new QLabel(Dialog);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 310, 151, 16));
        label_5->setFont(font);
        txtName = new QLineEdit(Dialog);
        txtName->setObjectName(QStringLiteral("txtName"));
        txtName->setGeometry(QRect(20, 100, 241, 22));
        txtFName = new QLineEdit(Dialog);
        txtFName->setObjectName(QStringLiteral("txtFName"));
        txtFName->setGeometry(QRect(20, 160, 241, 22));
        txtPName = new QLineEdit(Dialog);
        txtPName->setObjectName(QStringLiteral("txtPName"));
        txtPName->setGeometry(QRect(20, 210, 241, 22));
        cmbConType = new QComboBox(Dialog);
        cmbConType->setObjectName(QStringLiteral("cmbConType"));
        cmbConType->setGeometry(QRect(20, 270, 241, 22));
        Year = new QSpinBox(Dialog);
        Year->setObjectName(QStringLiteral("Year"));
        Year->setGeometry(QRect(20, 330, 241, 22));
        Year->setMinimum(1940);
        Year->setMaximum(2100);
        Year->setValue(2013);
        cmdAdd = new QPushButton(Dialog);
        cmdAdd->setObjectName(QStringLiteral("cmdAdd"));
        cmdAdd->setGeometry(QRect(290, 50, 171, 28));
        QIcon icon;
        icon.addFile(QStringLiteral("add-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        cmdAdd->setIcon(icon);
        cmdCancel = new QPushButton(Dialog);
        cmdCancel->setObjectName(QStringLiteral("cmdCancel"));
        cmdCancel->setGeometry(QRect(290, 90, 171, 28));
        txtPh = new QLineEdit(Dialog);
        txtPh->setObjectName(QStringLiteral("txtPh"));
        txtPh->setGeometry(QRect(20, 40, 241, 22));
        lblPh = new QLabel(Dialog);
        lblPh->setObjectName(QStringLiteral("lblPh"));
        lblPh->setGeometry(QRect(20, 10, 53, 16));
        lblPh->setFont(font);

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", 0));
        lblName->setText(QApplication::translate("Dialog", "\320\230\320\274\321\217", 0));
        lblFName->setText(QApplication::translate("Dialog", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217", 0));
        lblPName->setText(QApplication::translate("Dialog", "\320\236\321\202\321\207\320\265\321\201\321\202\320\262\320\276", 0));
        lblConType->setText(QApplication::translate("Dialog", "\320\242\320\270\320\277 \320\277\320\276\320\264\320\272\320\273\321\216\321\207\320\265\320\275\320\270\321\217", 0));
        label_5->setText(QApplication::translate("Dialog", "\320\223\320\276\320\264 \320\277\320\276\320\264\320\272\320\273\321\216\321\207\320\265\320\275\320\270\321\217", 0));
        cmbConType->clear();
        cmbConType->insertItems(0, QStringList()
         << QApplication::translate("Dialog", "\320\230\320\275\320\264\320\270\320\262\320\270\320\264\321\203\320\260\320\273\321\214\320\275\320\276\320\265", 0)
         << QApplication::translate("Dialog", "\320\232\320\276\320\273\320\273\320\265\320\272\321\202\320\270\320\262\320\275\320\276\320\265", 0)
        );
        cmdAdd->setText(QApplication::translate("Dialog", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", 0));
        cmdCancel->setText(QApplication::translate("Dialog", "\320\236\321\202\320\274\320\265\320\275\320\260", 0));
        lblPh->setText(QApplication::translate("Dialog", "\320\235\320\276\320\274\320\265\321\200", 0));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
