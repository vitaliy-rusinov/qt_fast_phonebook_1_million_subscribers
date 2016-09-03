#include "edit.h"
#include "ui_edit.h"
#include "main.h"
#include <qmessagebox.h>
Edit::Edit(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Edit)
{
    ui->setupUi(this);
	ui->txtPh->setText(QString((*rs)[curind].fj.phone));
	ui->txtFName->setText(QString((*rs)[curind].fj.fname));
		ui->txtName->setText(QString((*rs)[curind].fj.name));
		ui->txtPName->setText(QString((*rs)[curind].fj.pname));
		ui->cmbConType->addItem(QString().fromLocal8Bit("Индивидуальный"));
		ui->cmbConType->addItem(QString().fromLocal8Bit("Коллективный"));
		ui->cmbConType->setCurrentIndex((*rs)[curind].fj.type==1);
		char yr[5];
		char* tc=(*rs)[curind].fj.year;
		int tl=strlen(tc);
		ZeroMemory(yr,5);
		memcpy(yr,tc,tl<4?tl:4);
		ui->Year->setValue(atoi(yr));
}

Edit::~Edit()
{
    delete ui;
}


void Edit::on_cmdSave_clicked()
{
	    std::string a=ui->txtName->text().toStdString();
    std::string b=ui->txtFName->text().toStdString();
    std::string c=ui->txtPName->text().toStdString();
	std::string d=ui->txtPh->text().toStdString();
	std::string f=ui->Year->text().toStdString();
	QMessageBox qmb;
	if(ui->txtName->text().isEmpty()){
		qmb.information(NULL,QString().fromLocal8Bit("Ошибка"),QString().fromLocal8Bit("Введите имя"));
		return;
	}
	if(phb->editPhone((*rs)[curind].fo,(*rs)[curind].indkl,&((*rs)[curind].fj),(char*)d.c_str(),(char*)a.c_str(),(char*)b.c_str(),(char*)c.c_str(),ui->Year->value(),ui->cmbConType->currentIndex()==1)){	
		
		done(1);
    }
    else
    {
		qmb.information(NULL,QString().fromLocal8Bit("Ошибка"),QString().fromLocal8Bit("Такой номер телефона уже существует"));
    }
	
}

void Edit::on_cmdCancel_clicked()
{
	this->done(2);
}
