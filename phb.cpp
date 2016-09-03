#include "phb.h"


PhoneBook::PhoneBook(char* filename,char* fInds){
	   fname=(char*)malloc(sizeof(char)*150);
	   ZeroMemory(fname,sizeof(char)*150);
	   memcpy(fname,filename,strlen(filename));
	   fInd=(char*)malloc(sizeof(char)*150);
	   ZeroMemory(fInd,sizeof(char)*150);
	   memcpy(fInd,fInds,strlen(fInds));
	   loadinds();
	}
	PhoneBook::~PhoneBook(){
	   saveinds();
	   free(fname);
	   free(fInd);
	}
	void PhoneBook::loadinds(){
	inds=(std::list<ind*>**)malloc(sizeof(std::list<ind*>*) * 10);
	ind* tind;
	char buf[24];
	int cc1;
	FILE* hfinds=fopen(fInd,"rb");
	
	for(cc1=0;cc1<10;cc1++){
		inds[cc1]=new std::list<ind*>;
	}
	if(!hfinds){hfinds=fopen(fInd,"wb");fclose(hfinds);return;}
	cc1=0;
	while(!feof(hfinds)){
	if(!fread(buf,24,1,hfinds))break;
	buf[22]=0;
	if(buf[0]=='h' && buf[1]=='j'){
		if(cc1==9)break;
		cc1++; 
	}
	else
	{
		tind=(ind*)malloc(sizeof(ind));
		memcpy(tind->phone,buf,13);
		memcpy(&tind->pos,buf+14,sizeof(fpos_t));
		inds[cc1]->push_back(tind);
	}
	}
	fclose(hfinds);
	}
	void PhoneBook::saveinds(){
	FILE* hfinds=fopen(fInd,"wb");
	int cc1;
	
	for(cc1=0;cc1<10;cc1++){
	std::list<ind*>::iterator a=inds[cc1]->begin();
	char buf[24];
	bool g=false;
		while(a!=inds[cc1]->end()){
			ZeroMemory(buf,24);
			memcpy(buf,(*a)->phone,13);
			buf[12]=0;
			buf[13]=' ';
			memcpy(buf+14,(void*)&((*a)->pos),sizeof(fpos_t));
			buf[22]=0;
			buf[23]=13;
			fwrite(buf,24,1,hfinds);
			a++;g=true;
		}
		
		{
		
		ZeroMemory(buf,24);
		memcpy(buf,"hj",2);
		buf[22]=0;
			buf[23]=13;
			fwrite(buf,24,1,hfinds);

		}

	}
	fclose(hfinds);
	}
	void PhoneBook::deinit(){
		this->~PhoneBook();
	}
	bool PhoneBook::addPhone(char* phone, char* fn, char* ln, char* pn, int year, int type){
		std::list<ind*>::iterator a;
		if(search_phone(phone,a))return false;
		else
		{
			int cl=phone[strlen(phone)-1]-'0';
			if(cl>9 || cl<0)cl=9;
			ind* tin=new ind;
			ZeroMemory(tin,sizeof(ind));

			FILE* hf=fopen(fname,"ab");
			
			int tslen=strlen(phone);
			memcpy(tin->phone,phone,tslen<13?tslen:13);
			tin->phone[12]=0;


			fsub* tsub=new fsub;
			ZeroMemory(tsub,sizeof(fsub));
			tsub->valid=1;
			tslen=strlen(phone);
			memcpy(tsub->phone,phone,tslen<13?tslen:13);
			tsub->phone[12]=0;
			tslen=strlen(fn);
			memcpy(tsub->name,fn,tslen<20?tslen:20);
			tsub->name[19]=0;
			tslen=strlen(ln);
			memcpy(tsub->fname,ln,tslen<20?tslen:20);
			tsub->fname[19]=0;
			tslen=strlen(pn);
			memcpy(tsub->pname,pn,tslen<20?tslen:20);
			tsub->pname[19]=0;
			tsub->type=(char)type;
			char cYr[20];
			itoa(year,cYr,10);
			memcpy(tsub->year,cYr,4);
			fwrite(tsub,sizeof(fsub),1,hf);
			fgetpos(hf,&(tin->pos));tin->pos-=sizeof(fsub);
			inds[cl]->push_back(tin);
			fclose(hf);
		}
		return true;
	}
	bool PhoneBook::delPhone(fpos_t pos, std::list<ind*>::iterator tin, char* phone){
		
		FILE* hf=fopen(fname,"r+b");
		int cl=phone[strlen(phone)-1]-'0';
		if(cl>8 || cl<0)cl=9;
		inds[cl]->remove(*tin);
		fsub* tsub=new fsub;
		ZeroMemory(tsub,sizeof(fsub));
		tsub->valid=0;

		fsetpos(hf,&pos);
		fwrite(tsub,sizeof(fsub),1,hf);
		fclose(hf);
		return true;
	}
	bool PhoneBook::editPhone(fpos_t pos, std::list<ind*>::iterator& tin, fsub* newfs,char* phone, char* fn, char* ln, char* pn, int year, int type){
		
		std::list<ind*>::iterator a;
		if(strcmp(phone,(*tin)->phone))if(search_phone(phone,a))return false;
		int cl=(*tin)->phone[strlen((*tin)->phone)-1]-'0';if(cl>9)cl=9;
		int c2=phone[strlen(phone)-1]-'0';if(cl>9||cl<0)cl=9;
		int tslen=strlen(phone);
		ZeroMemory((*tin)->phone,13);
		memcpy((*tin)->phone,phone,tslen<13?tslen:13);
		(*tin)->phone[12]=0;
		if(c2!=cl){
			inds[c2]->push_front(*tin);
			inds[cl]->remove(*tin);
			tin=(inds[c2]->begin());

		}
		FILE* hf=fopen(fname,"r+b");
	    


		fsub* tsub=new fsub;
		ZeroMemory(tsub,sizeof(fsub));
		tsub->valid=1;
					tslen=strlen(phone);
			memcpy(tsub->phone,phone,tslen<13?tslen:13);
			tsub->phone[12]=0;
		tslen=strlen(fn);

		memcpy(tsub->name,fn,tslen<20?tslen:20);
					tsub->name[19]=0;
			tslen=strlen(ln);
			memcpy(tsub->fname,ln,tslen<20?tslen:20);
			tsub->fname[19]=0;
			tslen=strlen(pn);
			memcpy(tsub->pname,pn,tslen<20?tslen:20);
			tsub->pname[19]=0;
		tsub->type=(char)type;
		char cYr[20];
		itoa(year,cYr,10);
		memcpy(tsub->year,cYr,4);
		fsetpos(hf,&pos);
		fwrite(tsub,sizeof(fsub),1,hf);
	fclose(hf);	
		if(newfs){
			ZeroMemory(newfs,sizeof(fsub));
			memcpy(newfs,tsub,sizeof(fsub));
		}
		return true;
	}
bool PhoneBook::search_phone(char* phone, std::list<ind*>::iterator& it){
		int cl=phone[strlen(phone)-1]-'0';
		if(cl>8||cl<0)cl=9;
		if(inds[cl]->size()){
		std::list<ind*>::iterator cc4=inds[cl]->begin();
		while(cc4!=inds[cl]->end()){
			if(!strcmp((*cc4)->phone,phone)){
			    it=cc4;
				return true;
			}
			cc4++;
		}
		}
		return false;
	}
bool PhoneBook::sear_l(que* quer,std::list<pel>& hj){
	hj.clear();
	if(quer->ph){
		int cl=quer->fj.phone[strlen(quer->fj.phone)-1]-'0';
		if(cl>8||cl<0)cl=9;
		std::list<ind*>::iterator cc4=inds[cl]->begin();
		while(cc4!=inds[cl]->end()){
			if(!strcmp((*cc4)->phone,quer->fj.phone)){
				bool g=true;
				FILE* hf=fopen(fname,"rb");
				if(!hf)return false;
				fsetpos(hf,&(*cc4)->pos);
				fsub* hg=new fsub;
				ZeroMemory(hg,sizeof(fsub));
				if(fread(hg,sizeof(fsub),1,hf)){
					if(hg->valid){
				if(g&&quer->bName)g=strstr(hg->name,quer->fj.name)!=NULL;
				if(g&&quer->fName )g=strstr(hg->fname,quer->fj.fname)!=NULL;
				if(g&&quer->pName)g=strstr(hg->pname,quer->fj.pname)!=NULL;
				if(g&&quer->tt)g=hg->type==quer->fj.type;
				if(g&&quer->year)g=memcmp(hg->year,quer->fj.year,4)==0;
				if(g){
					pel* hjl=new pel;
					hjl->indkl=cc4;
					hjl->fo=((*cc4)->pos);
					memcpy(&(hjl->fj),hg,sizeof(fsub));
					hj.push_back(*hjl);fclose(hf);
					return true;
				}}
				}
				fclose(hf);return false;
			}
			cc4++;}}
	else{
		bool g=false;
		FILE* hf=fopen(fname,"rb");
		if(!hf)return false;
		fsub* hg=new fsub;
		while(!feof(hf)){

			ZeroMemory(hg,sizeof(fsub));
			fpos_t tfp;
			fgetpos(hf,&tfp);
			if(fread(hg,sizeof(fsub),1,hf)){
				if(hg->valid){
					g=true;
				if(g&&quer->bName)g=strstr(hg->name,quer->fj.name)!=NULL;
				if(g&&quer->fName )g=strstr(hg->fname,quer->fj.fname)!=NULL;
				if(g&&quer->pName)g=strstr(hg->pname,quer->fj.pname)!=NULL;
				if(g&&quer->tt)g=hg->type==quer->fj.type;
				if(g&&quer->year)g=memcmp(hg->year,quer->fj.year,4)==0;
			if(g){pel* hjl=new pel;
			search_phone(hg->phone,hjl->indkl);
			hjl->fo=tfp;
			memcpy(&(hjl->fj),hg,sizeof(fsub));
			hj.push_back(*hjl);
			if(quer->ovefl)if(hj.size()>=quer->ovefl){quer->overf=true; break;}
			}}
			}
		}
		fclose(hf);
		return g;
	}
	return false;

}
bool PhoneBook::sear(que* quer,std::vector<pel>& hj){
	hj.clear();
	if(quer->ph){
		int cl=quer->fj.phone[strlen(quer->fj.phone)-1]-'0';
		if(cl>8||cl<0)cl=9;
		std::list<ind*>::iterator cc4=inds[cl]->begin();
		while(cc4!=inds[cl]->end()){
			if(!strcmp((*cc4)->phone,quer->fj.phone)){
				bool g=true;
				FILE* hf=fopen(fname,"rb");
				if(!hf)return false;
				fsetpos(hf,&(*cc4)->pos);
				fsub* hg=new fsub;
				ZeroMemory(hg,sizeof(fsub));
				if(fread(hg,sizeof(fsub),1,hf)){
					if(hg->valid){
				if(g&&quer->bName)g=strstr(hg->name,quer->fj.name)!=NULL;
				if(g&&quer->fName )g=strstr(hg->fname,quer->fj.fname)!=NULL;
				if(g&&quer->pName)g=strstr(hg->pname,quer->fj.pname)!=NULL;
				if(g&&quer->tt)g=hg->type==quer->fj.type;
				if(g&&quer->year)g=memcmp(hg->year,quer->fj.year,4)==0;
				if(g){
					pel* hjl=new pel;
					hjl->indkl=cc4;
					hjl->fo=((*cc4)->pos);
					memcpy(&(hjl->fj),hg,sizeof(fsub));
					hj.push_back(*hjl);fclose(hf);
					return true;
				}}
				}
				fclose(hf);return false;
			}
			cc4++;}}
	else{
		bool g=false;
		FILE* hf=fopen(fname,"rb");
		if(!hf)return false;
		fsub* hg=new fsub;
		while(!feof(hf)){

			ZeroMemory(hg,sizeof(fsub));
			fpos_t tfp;
			fgetpos(hf,&tfp);
			if(fread(hg,sizeof(fsub),1,hf)){
				if(hg->valid){
					g=true;
				if(g&&quer->bName)g=strstr(hg->name,quer->fj.name)!=NULL;
				if(g&&quer->fName )g=strstr(hg->fname,quer->fj.fname)!=NULL;
				if(g&&quer->pName)g=strstr(hg->pname,quer->fj.pname)!=NULL;
				if(g&&quer->tt)g=hg->type==quer->fj.type;
				if(g&&quer->year)g=memcmp(hg->year,quer->fj.year,4)==0;
			if(g){pel* hjl=new pel;
			search_phone(hg->phone,hjl->indkl);
			hjl->fo=tfp;
			memcpy(&(hjl->fj),hg,sizeof(fsub));
			hj.push_back(*hjl);
			if(quer->ovefl)if(hj.size()>=quer->ovefl){quer->overf=true; break;}
			}}
			}
		}
		fclose(hf);
		return g;
	}
	return false;

}
	bool PhoneBook::sear2(que* quer,std::vector<pel*>& hj){
	hj.clear();
	if(quer->ph){
		int cl=quer->fj.phone[strlen(quer->fj.phone)-1]-'0';
		if(cl>8||cl<0)cl=9;
		std::list<ind*>::iterator cc4=inds[cl]->begin();
		while(cc4!=inds[cl]->end()){
			if(!strcmp((*cc4)->phone,quer->fj.phone)){
				bool g=true;
				FILE* hf=fopen(fname,"rb");
				if(!hf)return false;
				fsetpos(hf,&(*cc4)->pos);
				fsub* hg=new fsub;
				ZeroMemory(hg,sizeof(fsub));
				if(fread(hg,sizeof(fsub),1,hf)){
					if(hg->valid){
				if(g&&quer->bName)g=strstr(hg->name,quer->fj.name)!=NULL;
				if(g&&quer->fName )g=strstr(hg->fname,quer->fj.fname)!=NULL;
				if(g&&quer->pName)g=strstr(hg->pname,quer->fj.pname)!=NULL;
				if(g&&quer->tt)g=hg->type==quer->fj.type;
				if(g&&quer->year)g=memcmp(hg->year,quer->fj.year,4)==0;
				if(g){
					pel* hjl=(pel*)malloc(sizeof(pel));
					ZeroMemory(hjl,sizeof(pel));
					hjl->indkl=cc4;
					hjl->fo=((*cc4)->pos);
					memcpy(&(hjl->fj),hg,sizeof(fsub));
					hj.push_back(hjl);fclose(hf);
					return true;
				}}
				}
				fclose(hf);return false;
			}
			cc4++;}}
	else{
		bool g=false;
		FILE* hf=fopen(fname,"rb");
		if(!hf)return false;
		fsub* hg=new fsub;
		while(!feof(hf)){

			ZeroMemory(hg,sizeof(fsub));
			fpos_t tfp;
			fgetpos(hf,&tfp);
			if(fread(hg,sizeof(fsub),1,hf)){
				if(hg->valid){
					g=true;
				if(g&&quer->bName)g=strstr(hg->name,quer->fj.name)!=NULL;
				if(g&&quer->fName )g=strstr(hg->fname,quer->fj.fname)!=NULL;
				if(g&&quer->pName)g=strstr(hg->pname,quer->fj.pname)!=NULL;
				if(g&&quer->tt)g=hg->type==quer->fj.type;
				if(g&&quer->year)g=memcmp(hg->year,quer->fj.year,4)==0;
			if(g){pel* hjl=(pel*)malloc(sizeof(pel));ZeroMemory(hjl,sizeof(pel));
			search_phone(hg->phone,hjl->indkl);
			hjl->fo=tfp;
			memcpy(&(hjl->fj),hg,sizeof(fsub));
			hj.push_back(hjl);
			if(quer->ovefl)if(hj.size()>=quer->ovefl){quer->overf=true; break;}
			}}
			}
		}
		fclose(hf);
		return g;
	}
	return false;

}
	