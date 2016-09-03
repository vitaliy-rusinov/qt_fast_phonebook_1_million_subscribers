#include "lists.h"
#include "ui_lists.h"
#include "main.h"
lists::lists(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::lists)
{
    ui->setupUi(this);
}
	void swap(std::vector<pel*>& gh,int st,int end){
	std::swap( gh[st],gh[end] );	
}
int my_qsort(std::vector<pel*>& gh,int st,int end){
    int sepi=0;
    int c;
    int pd=0;
    if(end>st){

		if(end-st==1)if(strcmp(gh[st]->fj.phone,gh[end]->fj.phone)>0){swap(gh,st,end);return 0;}
        sepi=end;
        swap(gh,sepi,st);
        for(c=st+1;c<=end;c++){
            if(strcmp(gh[c]->fj.phone,gh[st]->fj.phone)<=0)swap(gh,st+(++pd),c);
        } 
        swap(gh,st,st+pd);
    }
    else return 0;
    my_qsort(gh,st,st+pd-1);
    my_qsort(gh,st+pd+1,end);}


void lists::sortm(){
	que que1;
	std::vector<pel*> gh;
	
	ZeroMemory(&que1,sizeof(que));
	que1.ovefl=1500;
	phb->sear2(&que1,gh);
	my_qsort(gh,0,gh.size()-1);
	QString t("");
	char newl[3];
	newl[0]=13;
	newl[1]=10;
	newl[2]=0;
	for(int cc1=0;cc1<gh.size();cc1++){
		t+=QString(gh[cc1]->fj.phone)+QString(" ")+QString(gh[cc1]->fj.name)+QString(newl);
	}
	ui->textEdit->setText(t);
}
lists::~lists()
{
    delete ui;
}

void lists::on_cmd_clicked()
{
	done(0);
}
