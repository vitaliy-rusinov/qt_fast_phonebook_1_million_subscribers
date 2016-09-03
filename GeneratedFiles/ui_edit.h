/********************************************************************************
** Form generated from reading UI file 'edit.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDIT_H
#define UI_EDIT_H

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

class Ui_Edit
{
public:
    QLabel *label;
    QLabel *label_4;
    QComboBox *cmbConType;
    QPushButton *cmdSave;
    QPushButton *cmdCancel;
    QLineEdit *txtFName;
    QLineEdit *txtPName;
    QSpinBox *Year;
    QLabel *label_2;
    QLabel *label_5;
    QLineEdit *txtName;
    QLabel *label_3;
    QLineEdit *txtPh;
    QLabel *lblPh;

    void setupUi(QDialog *Edit)
    {
        if (Edit->objectName().isEmpty())
            Edit->setObjectName(QStringLiteral("Edit"));
        Edit->resize(473, 358);
        label = new QLabel(Edit);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 70, 53, 16));
        QFont font;
        font.setPointSize(10);
        label->setFont(font);
        label_4 = new QLabel(Edit);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 250, 151, 16));
        label_4->setFont(font);
        cmbConType = new QComboBox(Edit);
        cmbConType->setObjectName(QStringLiteral("cmbConType"));
        cmbConType->setGeometry(QRect(20, 270, 241, 22));
        cmdSave = new QPushButton(Edit);
        cmdSave->setObjectName(QStringLiteral("cmdSave"));
        cmdSave->setGeometry(QRect(290, 40, 171, 28));
        QIcon icon;
        icon.addFile(QStringLiteral("Actions-document-edit-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        cmdSave->setIcon(icon);
        cmdCancel = new QPushButton(Edit);
        cmdCancel->setObjectName(QStringLiteral("cmdCancel"));
        cmdCancel->setGeometry(QRect(290, 80, 171, 28));
        txtFName = new QLineEdit(Edit);
        txtFName->setObjectName(QStringLiteral("txtFName"));
        txtFName->setGeometry(QRect(20, 160, 241, 22));
        txtPName = new QLineEdit(Edit);
        txtPName->setObjectName(QStringLiteral("txtPName"));
        txtPName->setGeometry(QRect(20, 210, 241, 22));
        Year = new QSpinBox(Edit);
        Year->setObjectName(QStringLiteral("Year"));
        Year->setGeometry(QRect(20, 330, 241, 22));
        Year->setMinimum(1940);
        Year->setMaximum(2100);
        label_2 = new QLabel(Edit);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 130, 91, 16));
        label_2->setFont(font);
        label_5 = new QLabel(Edit);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 310, 151, 16));
        label_5->setFont(font);
        txtName = new QLineEdit(Edit);
        txtName->setObjectName(QStringLiteral("txtName"));
        txtName->setGeometry(QRect(20, 100, 241, 22));
        label_3 = new QLabel(Edit);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 190, 91, 16));
        label_3->setFont(font);
        txtPh = new QLineEdit(Edit);
        txtPh->setObjectName(QStringLiteral("txtPh"));
        txtPh->setGeometry(QRect(20, 40, 241, 22));
        lblPh = new QLabel(Edit);
        lblPh->setObjectName(QStringLiteral("lblPh"));
        lblPh->setGeometry(QRect(20, 10, 53, 16));
        lblPh->setFont(font);

        retranslateUi(Edit);

        QMetaObject::connectSlotsByName(Edit);
    } // setupUi

    void retranslateUi(QDialog *Edit)
    {
        Edit->setWindowTitle(QApplication::translate("Edit", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214", 0));
        label->setText(QApplication::translate("Edit", "\320\230\320\274\321\217", 0));
        label_4->setText(QApplication::translate("Edit", "\320\242\320\270\320\277 \320\277\320\276\320\264\320\272\320\273\321\216\321\207\320\265\320\275\320\270\321\217", 0));
        cmdSave->setText(QApplication::translate("Edit", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", 0));
        cmdCancel->setText(QApplication::translate("Edit", "\320\236\321\202\320\274\320\265\320\275\320\260", 0));
        label_2->setText(QApplication::translate("Edit", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217", 0));
        label_5->setText(QApplication::translate("Edit", "\320\223\320\276\320\264 \320\277\320\276\320\264\320\272\320\273\321\216\321\207\320\265\320\275\320\270\321\217", 0));
        label_3->setText(QApplication::translate("Edit", "\320\236\321\202\321\207\320\265\321\201\321\202\320\262\320\276", 0));
        lblPh->setText(QApplication::translate("Edit", "\320\235\320\276\320\274\320\265\321\200", 0));
    } // retranslateUi

};

namespace Ui {
    class Edit: public Ui_Edit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDIT_H
