#include "avail.h"
#include "ui_avail.h"
#include "main.h"
#include  <qitemselectionmodel.h>
#include  <qstandarditemmodel.h>
QStandardItemModel* aa;QItemSelectionModel* selm;
Avail::Avail(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Avail)
{
    ui->setupUi(this);
}

Avail::~Avail()
{
    delete ui;
}
void Avail::on_cmdSearch_clicked(){
	
	std::string ss;
	ss=ui->txtP->text().toStdString();
	
	if(ss.size()<ui->spinBox->value()){
		for(int cc1=0; cc1<ui->spinBox->value()-ss.size();cc1++){ ss+=std::string("?");}
	}
	if(ss.size()>ui->spinBox->value()){
		ss=QString().fromStdString(ss).left(ui->spinBox->value()).toStdString();
	}
	QString sss=QString().fromStdString(ss);
	std::vector<char> newits;
	int co=sss.count(QString().fromLocal8Bit("?"));
	for(int cc1=0; cc1<co;cc1++)newits.push_back(0);
	std::vector<int> indq;
	int c=0;
	QString ts;
	
	
	ts=sss;
	char fss[16];
	ZeroMemory(fss,16);
	memcpy(fss,ss.c_str(),ss.size()<15?ss.size():15);
	for(int cc1=0; cc1<co;cc1++){
	c+=(ts.indexOf(QString().fromLocal8Bit("?"))+1);
	ts=sss.mid(c);
	indq.push_back(c);
	}	
	__int64 cc2;
	char newb[100];
	char newb2[100];
	std::string tt;
	ZeroMemory(newb,4);
	aa=new QStandardItemModel;
	
	int gh=0;
	for(cc2=0;cc2<pow((long double)10,co);cc2++){
		ZeroMemory(newb,100);
		itoa(cc2,newb,10);
		tt=std::string(newb);
		for(int cc1=0; cc1<co-strlen(newb);cc1++)tt="0"+tt;
		ZeroMemory(newb,100);
		memcpy(newb,tt.c_str(),tt.size());
		unsigned int yd=0;
		for(int cc1=0; cc1<co;cc1++){
			newits[cc1]=newb[cc1];
			memcpy(&fss[indq[cc1]-1],&newb[cc1],1);
		}
		std::list<ind*>::iterator a;
		if(phb->search_phone(fss,a))continue;
		
		aa->setItem(gh,0,new QStandardItem(QString().fromLocal8Bit(fss)));
		if(++gh>300)break;
	}
	
	ui->lst->setModel(aa);
}
