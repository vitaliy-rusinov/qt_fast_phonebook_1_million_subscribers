#include "dialog.h"
#include "ui_dialog.h"
#include "main.h"
#include <QApplication>
#include <QMessageBox>
#include <cstring>
Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_cmdAdd_clicked()
{

    std::string a=ui->txtName->text().toStdString();
    std::string b=ui->txtFName->text().toStdString();
    std::string c=ui->txtPName->text().toStdString();
    std::string d=ui->txtPh->text().toStdString();

	QMessageBox qmb;
	if(ui->txtName->text().isEmpty()){
        qmb.information(NULL,QString().fromLocal8Bit("Ошибка"),QString().fromLocal8Bit("Введите имя"));
		return;
	}
	
    if(phb->addPhone((char*)d.c_str(),(char*)a.c_str(),(char*)b.c_str(),(char*)c.c_str(),ui->Year->value(),ui->cmbConType->currentIndex()==1)){
        done(0);
    }
    else
    {
       qmb.information(NULL,QString().fromLocal8Bit("Ошибка"),QString().fromLocal8Bit("Такой номер телефона уже существует"));
    }
}

void Dialog::on_cmdCancel_clicked()
{
	this->done(2);
}
