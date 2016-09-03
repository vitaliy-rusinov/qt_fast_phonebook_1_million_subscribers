#include "mainwindow.h"
#include "main.h"
#include <qfiledialog.h>
#include <QApplication>
#include "phb.h"
QStandardItemModel* itm;
QItemSelectionModel* sm;
QStandardItemModel* itmh;
QItemSelectionModel* smh;
GobChartsWidget* gb;

QApplication* curapp;
PhoneBook* phb;
std::vector<pel>* rs;
int curind=0;
int main(int argc, char *argv[])
{

	rs=NULL;
	FILE* hnf=fopen("E:\\jk.txt","r");
	char newf[200];
	ZeroMemory(newf,200);
	if(hnf)fgets(newf,200,hnf);
	if(hnf)fclose(hnf);
	if(!newf[0]){
	strcpy(newf,"E:\\1.ind");
	}
	std::string aa(newf);
	std::string bb(newf);
	bb+=".ind";

     phb=new PhoneBook((char*)aa.c_str(),(char*)bb.c_str());
	  hnf=fopen("E:\\jk.txt","w");
	  if(hnf)fputs(newf,hnf);
	  if(hnf)fclose(hnf);
    QApplication a(argc, argv);
    curapp=&a;
	itm=new QStandardItemModel;sm=new QItemSelectionModel(itm);
	
	MainWindow w;
	/*char df[600][30];
char dgf[321][30];
char dgd[88][30];
    FILE* ds=fopen("E:\\family_txt","r");
	for(int cc1=0;cc1<600;cc1++)fgets(df[cc1],29,ds);
	fclose(ds);
	ds=fopen("E:\\names.txt","r");
	for(int cc1=0;cc1<321;cc1++)fgets(dgf[cc1],29,ds);
	fclose(ds);
	ds=fopen("E:\\otc.txt","r");
	for(int cc1=0;cc1<88;cc1++)fgets(dgd[cc1],29,ds);
	fclose(ds);
	*/
	gb=new GobChartsWidget();
	/*for(int cc1=0; cc1<20000;cc1++){
		int rnd=rand()*100+rand();
		rnd%=900000;
	int num=rnd+100000;
	char numb[100];
	ZeroMemory(numb,100);
	itoa(num,numb,10);
	int randNum = (rand() % 33) + 1980;
	std::string nm=QString().fromLocal8Bit(dgf[rand()%321]).toStdString();
	std::string dfs=QString().fromLocal8Bit(df[rand()%600]).toStdString();
		std::string dfd=QString().fromLocal8Bit(dgd[rand()%88]).toStdString();

	phb->addPhone(numb,(char*)nm.c_str(),(char*)dfs.c_str(),(char*)dfd.c_str(),randNum,(rand() % 2));
	}*/
    w.show();
    int c=a.exec();
	phb->~PhoneBook();
    return c;
}


void unload(){
    curapp->quit();
}

