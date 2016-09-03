#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialog.h"
#include "edit.h"
#include "avail.h"
#include "main.h"
#include "stat.h"
#include "lists.h"
#include  <qitemselectionmodel.h>
#include  <qstandarditemmodel.h>
#include <qfiledialog>
#include "qmessagebox.h"
#include <gobchartswidget.h>
QStandardItemModel tree;
extern void unload();
void getyear();
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

	ui->cmbConType->addItem(QString().fromLocal8Bit("Индивидульный"));
	ui->cmbConType->addItem(QString().fromLocal8Bit("Коллективный"));
	ui->tblSubsc->setModel(itm);
	ui->tblSubsc->setSelectionModel(sm);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_cmdAdd_clicked()
{
Dialog add;
if(add.exec()) return;
}

void MainWindow::on_cmdEdit_clicked()
{
	if(itm->rowCount()){
		if(sm->currentIndex().row()!=-1){
		curind=sm->currentIndex().row();
Edit edit;
if(edit.exec()==1) {

	itm->setItem(curind,0,new QStandardItem(QString((*rs)[curind].fj.phone)));
		itm->setItem(curind,2,new QStandardItem(QString((*rs)[curind].fj.fname)));
		itm->setItem(curind,3,new QStandardItem(QString((*rs)[curind].fj.name)));

		itm->setItem(curind,4,new QStandardItem(QString((*rs)[curind].fj.pname)));
		itm->setItem(curind,1,new QStandardItem(QString().fromLocal8Bit(((*rs)[curind].fj.type==0)?"Индивидуальный":"Коллективный")));
		char yr[5];
		char* tc=(*rs)[curind].fj.year;
		int tl=strlen(tc);
		ZeroMemory(yr,5);
		memcpy(yr,tc,tl<4?tl:4);
		itm->setItem(curind,5,new QStandardItem(QString(yr)));
		return;}	
	}
	}}
void MainWindow::on_cmdDel_clicked()
{
	if(itm->rowCount())
		if(sm->currentIndex().row()!=-1){
			QMessageBox qg;

			if(qg.question(NULL,QString().fromLocal8Bit("Удаление"),QString().fromLocal8Bit("Вы действительно хотите удалить этого абонента?"))==QMessageBox::Yes){
			
			curind=sm->currentIndex().row();
			phb->delPhone((*rs)[curind].fo,(*rs)[curind].indkl,(*rs)[curind].fj.phone);
			(*rs).erase((*rs).begin()+curind);
			itm->removeRow(curind);
			}
			}
	}

void MainWindow::on_cmdAvail_clicked()
{
    Avail avail;
    if(avail.exec()) return;
}

void MainWindow::on_cmdStat_clicked()
{
    ::getyear();
}

void MainWindow::on_cmdShow_clicked()
{
	
	using namespace Qt;
	que* b=new que;
	ZeroMemory(b,sizeof(que));
	b->bName=ui->chkName->checkState()==Checked;
	b->fName=ui->chkFName->checkState()==Checked;
	b->pName=ui->chkPName_3->checkState()==Checked;
	b->ph=ui->chkPhone->checkState()==Checked;
	b->tt=ui->chkConType->checkState()==Checked;
	b->year=ui->chkYear->checkState()==Checked;
	std::string ts=(ui->txtName->text().toStdString());
	char* tc=(char*)ts.c_str();
	int tl=strlen(tc);
	memcpy(b->fj.name,tc,tl<20?tl:20);
	b->fj.name[19]=0;
	ts=(ui->txtFName->text().toStdString());
	tc=(char*)ts.c_str();
	tl=strlen(tc);
	memcpy(b->fj.fname,tc,tl<20?tl:20);
	b->fj.fname[19]=0;
	ts=(ui->txtPName->text().toStdString());
	tc=(char*)ts.c_str();
	tl=strlen(tc);
	memcpy(b->fj.pname,tc,tl<20?tl:20);
	b->fj.pname[19]=0;
	ts=(ui->txtPhone->text().toStdString());
	tc=(char*)ts.c_str();
	tl=strlen(tc);
	memcpy(b->fj.phone,tc,tl<13?tl:13);
	b->fj.phone[12]=0;
	
	b->fj.type=ui->cmbConType->currentIndex()==1;
    ts=(ui->txtYear->text().toStdString());
	tc=(char*)ts.c_str();
	tl=strlen(tc);
	ZeroMemory(b->fj.year,4);
	memcpy(b->fj.year,tc,tl<4?tl:4);
	if(rs)delete rs;
	rs=new std::vector<pel>;
	pel a;
	
	b->ovefl=2000;
	phb->sear(b,*rs);
	if(b->overf)QMessageBox().information(NULL,QString().fromLocal8Bit("Поиск"),QString().fromLocal8Bit("Найдено больше 2000 абонентов. Будут показаны первые 2000. Побробуйте сузить критерии поиска."));
	int cc2;
	QStandardItemModel* aas=new QStandardItemModel();
	ui->tblSubsc->setModel(aas);
	ui->tblSubsc->setSelectionModel(new QItemSelectionModel(aas));
	itm->clear();
	itm->setRowCount(0);
	itm->setColumnCount(6);

		itm->setRowCount(rs->size());
itm->setHorizontalHeaderItem(0,new QStandardItem(QString().fromLocal8Bit("Номер")));
	itm->setHorizontalHeaderItem(1,new QStandardItem(QString().fromLocal8Bit("Тип подключения")));
	itm->setHorizontalHeaderItem(2,new QStandardItem(QString().fromLocal8Bit("Фамилия")));
	itm->setHorizontalHeaderItem(3,new QStandardItem(QString().fromLocal8Bit("Имя")));
	itm->setHorizontalHeaderItem(4,new QStandardItem(QString().fromLocal8Bit("Отчество")));
	itm->setHorizontalHeaderItem(5,new QStandardItem(QString().fromLocal8Bit("Год подкл.")));
		for(cc2=0;cc2<rs->size();cc2++){
	itm->setItem(cc2,0,new QStandardItem(QString((*rs)[cc2].fj.phone)));
		itm->setItem(cc2,2,new QStandardItem(QString((*rs)[cc2].fj.fname)));
	itm->setItem(cc2,3,new QStandardItem(QString((*rs)[cc2].fj.name)));

		itm->setItem(cc2,4,new QStandardItem(QString((*rs)[cc2].fj.pname)));
		itm->setItem(cc2,1,new QStandardItem(QString().fromLocal8Bit(((*rs)[cc2].fj.type==0)?"Индивидуальный":"Коллективный")));
		char yr[5];
		tc=(*rs)[cc2].fj.year;
		tl=strlen(tc);
		ZeroMemory(yr,5);
		memcpy(yr,tc,tl<4?tl:4);
		
		itm->setItem(cc2,5,new QStandardItem(QString(yr)));
		
	} 

		ui->tblSubsc->setModel(itm);

		sm=new QItemSelectionModel(itm);
	ui->tblSubsc->setSelectionModel(sm);
ui->tblSubsc->setColumnWidth(0,115);
	ui->tblSubsc->setColumnWidth(1,140);
	ui->tblSubsc->setColumnWidth(2,130);
	ui->tblSubsc->setColumnWidth(3,120);
	ui->tblSubsc->setColumnWidth(4,120);
	ui->tblSubsc->setColumnWidth(5,110);
}
	

void MainWindow::on_mnuOpen_triggered()
{
QFileDialog s;QString g;

s.show();
s.setFileMode(QFileDialog::FileMode::AnyFile);
if(s.exec()){
	g=s.selectedFiles()[0];
	g=g.replace(QRegExp(QString("/"),Qt::CaseInsensitive,QRegExp::Wildcard),QString("\\"));
	std::string a=g.toStdString(),df=(g+QString(".ind")).toStdString();
	 FILE* hnf=fopen("E:\\jk.txt","w");
	  if(hnf)fputs(a.c_str(),hnf);
	  if(hnf)fclose(hnf);
	 
delete phb;
phb=new PhoneBook((char*)a.c_str(),(char*)df.c_str());
itm->clear();
itm->setRowCount(0);
itm->setColumnCount(6);
itm->setHorizontalHeaderItem(0,new QStandardItem(QString().fromLocal8Bit("Номер")));
	itm->setHorizontalHeaderItem(1,new QStandardItem(QString().fromLocal8Bit("Тип подключения")));
	itm->setHorizontalHeaderItem(2,new QStandardItem(QString().fromLocal8Bit("Фамилия")));
	itm->setHorizontalHeaderItem(3,new QStandardItem(QString().fromLocal8Bit("Имя")));
	itm->setHorizontalHeaderItem(4,new QStandardItem(QString().fromLocal8Bit("Отчество")));
	itm->setHorizontalHeaderItem(5,new QStandardItem(QString().fromLocal8Bit("Год подкл.")));

ui->tblSubsc->setColumnWidth(0,115);
	ui->tblSubsc->setColumnWidth(1,140);
	ui->tblSubsc->setColumnWidth(2,130);
	ui->tblSubsc->setColumnWidth(3,120);
	ui->tblSubsc->setColumnWidth(4,120);
	ui->tblSubsc->setColumnWidth(5,110);

}
}

void MainWindow::on_mnuExit_triggered()
{
    unload();
}

void MainWindow::on_mnuAdd_triggered()
{
    on_cmdAdd_clicked();
}

void MainWindow::on_mnuEditSub_triggered()
{
    on_cmdEdit_clicked();
}

void MainWindow::on_mnuDel_triggered()
{
    on_cmdDel_clicked();
}

void MainWindow::on_mnuAvail_triggered()
{
    on_cmdAvail_clicked();
}

void MainWindow::on_mnuStat_triggered()
{
    on_cmdStat_clicked();
}

void MainWindow::on_mnuList_triggered()
{
	 lists yf;
	 yf.sortm();
    if(yf.exec()) return;
}
void getyear()
{
	int min=200;
	int max=-10;
	int years[160];
	ZeroMemory(years,160*sizeof(int));
		FILE* hf=fopen(phb->fname,"rb");
		if(!hf)return;
		fsub* hg=new fsub;
		while(!feof(hf)){

			ZeroMemory(hg,sizeof(fsub));
			fpos_t tfp;
			fgetpos(hf,&tfp);
			if(fread(hg,sizeof(fsub),1,hf)){
				if(hg->valid){
				char yr[5];
				ZeroMemory(yr,5);
				memcpy(yr,hg->year,4);
				int ye=atoi(yr);
				if((ye-1940)<min) min=ye-1940;
				if((ye-1940)>max) max=ye-1940;
				years[ye-1940]++;
				}}}
		fclose(hf);
		int cc1;
		if(min<170 && max>-1){
		
	
				itmh=new QStandardItemModel;
				
			char b1[200], b2[200];
			
				for(cc1=min;cc1<=max;cc1++){
				ZeroMemory(b1,200);
			ZeroMemory(b2,200);
					itoa(cc1+1940,b1,10);
				itoa(years[cc1],b2,10);
			
				itmh->setItem(cc1-min,0,new QStandardItem(QString().fromLocal8Bit(b1)));
				itmh->setItem(cc1-min,1,new QStandardItem(QString().fromLocal8Bit(b2)));
		}
				
				gb->setModel(itmh);
				smh=new QItemSelectionModel(itmh);
				gb->setSelectionModel(smh);
				gb->show();
		}
}