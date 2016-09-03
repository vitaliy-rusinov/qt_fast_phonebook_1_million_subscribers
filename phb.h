#ifndef blah
#define blah
#include <iostream>
#include <cstdlib>
#include <fstream>
#include <qvector.h>
#include <Windows.h>
#include <list>
#include <vector>
#include  <cstring>
struct ind{
char phone[13];
fpos_t pos;
};
struct fsub{
char valid;
char phone[13];
char name[20];
char fname[20];
char pname[20];
char type;
char year[4];
};
struct pel{
	 std::list<ind*>::iterator indkl;
	 fpos_t fo;
	 fsub fj;
};
struct que{
	bool bName;
	bool fName;
	bool pName;
	bool ph;
	bool id;
	bool tt;
	bool year;
	fsub fj;
	int ovefl;
	bool overf;
};
	class PhoneBook{
private:
	
	std::list<ind*> **inds;
public: 
	char* fname, *fInd;
	PhoneBook(char* filename,char* fInds);
	~PhoneBook();
	void loadinds();
	void saveinds();
	void deinit();
	bool addPhone(char* phone, char* fn, char* ln, char* pn, int year, int type);
	bool delPhone(fpos_t pos, std::list<ind*>::iterator tin, char* phone);
	bool editPhone(fpos_t pos, std::list<ind*>::iterator& tin, fsub* newfs ,char* phone, char* fn, char* ln, char* pn, int year, int type);
    bool search_phone(char* phone, std::list<ind*>::iterator& it);
	bool sear(que* quer,std::vector<pel>& hj);
	bool sear2(que* quer,std::vector<pel*>& hj);
	bool sear_l(que* quer,std::list<pel>& hj);
	};
#endif
