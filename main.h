#ifndef MAIN_H
#define MAIN_H
#include "phb.h"
#include "gobchartswidget.h"
#include  <qitemselectionmodel.h>
#include  <qstandarditemmodel.h>
extern QItemSelectionModel* sm;
extern QStandardItemModel* itm;
extern QStandardItemModel* itmh;
extern QItemSelectionModel* smh;
extern PhoneBook* phb;
extern std::vector<pel>* rs;
extern int curind;
extern GobChartsWidget* gb;

#endif // MAIN_H
