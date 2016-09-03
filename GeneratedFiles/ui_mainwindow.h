/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action;
    QAction *mnuOpen;
    QAction *action_4;
    QAction *action_5;
    QAction *mnuExit;
    QAction *mnuAdd;
    QAction *mnuEditSub;
    QAction *mnuDel;
    QAction *mnuAvail;
    QAction *mnuStat;
    QAction *mnuList;
    QWidget *centralWidget;
    QPushButton *cmdAdd;
    QPushButton *cmdEdit;
    QPushButton *cmdDel;
    QLabel *label;
    QLabel *label_2;
    QCheckBox *chkName;
    QLineEdit *txtName;
    QCheckBox *chkFName;
    QLineEdit *txtFName;
    QCheckBox *chkPName_3;
    QLineEdit *txtPName;
    QLineEdit *txtPhone;
    QCheckBox *chkPhone;
    QPushButton *cmdAvail;
    QPushButton *cmdStat;
    QPushButton *cmdShow;
    QCheckBox *chkConType;
    QComboBox *cmbConType;
    QCheckBox *chkYear;
    QLineEdit *txtYear;
    QFrame *line;
    QTableView *tblSubsc;
    QMenuBar *menuBar;
    QMenu *mnuEdit;
    QMenu *mnuTools;
    QMenu *mnuFile;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(981, 698);
        action = new QAction(MainWindow);
        action->setObjectName(QStringLiteral("action"));
        mnuOpen = new QAction(MainWindow);
        mnuOpen->setObjectName(QStringLiteral("mnuOpen"));
        action_4 = new QAction(MainWindow);
        action_4->setObjectName(QStringLiteral("action_4"));
        action_5 = new QAction(MainWindow);
        action_5->setObjectName(QStringLiteral("action_5"));
        mnuExit = new QAction(MainWindow);
        mnuExit->setObjectName(QStringLiteral("mnuExit"));
        mnuExit->setCheckable(false);
        mnuAdd = new QAction(MainWindow);
        mnuAdd->setObjectName(QStringLiteral("mnuAdd"));
        mnuEditSub = new QAction(MainWindow);
        mnuEditSub->setObjectName(QStringLiteral("mnuEditSub"));
        mnuDel = new QAction(MainWindow);
        mnuDel->setObjectName(QStringLiteral("mnuDel"));
        mnuAvail = new QAction(MainWindow);
        mnuAvail->setObjectName(QStringLiteral("mnuAvail"));
        mnuStat = new QAction(MainWindow);
        mnuStat->setObjectName(QStringLiteral("mnuStat"));
        mnuList = new QAction(MainWindow);
        mnuList->setObjectName(QStringLiteral("mnuList"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        cmdAdd = new QPushButton(centralWidget);
        cmdAdd->setObjectName(QStringLiteral("cmdAdd"));
        cmdAdd->setGeometry(QRect(10, 600, 161, 28));
        QIcon icon;
        icon.addFile(QStringLiteral("add-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        cmdAdd->setIcon(icon);
        cmdEdit = new QPushButton(centralWidget);
        cmdEdit->setObjectName(QStringLiteral("cmdEdit"));
        cmdEdit->setGeometry(QRect(180, 600, 161, 28));
        QIcon icon1;
        icon1.addFile(QStringLiteral("Actions-document-edit-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        cmdEdit->setIcon(icon1);
        cmdDel = new QPushButton(centralWidget);
        cmdDel->setObjectName(QStringLiteral("cmdDel"));
        cmdDel->setGeometry(QRect(350, 600, 161, 28));
        QIcon icon2;
        icon2.addFile(QStringLiteral("Actions-edit-delete-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        cmdDel->setIcon(icon2);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(790, 30, 41, 41));
        QFont font;
        font.setPointSize(10);
        label->setFont(font);
        label->setPixmap(QPixmap(QString::fromUtf8("Zoom-icon.png")));
        label->setScaledContents(true);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(840, 30, 101, 41));
        QFont font1;
        font1.setPointSize(12);
        label_2->setFont(font1);
        label_2->setScaledContents(false);
        chkName = new QCheckBox(centralWidget);
        chkName->setObjectName(QStringLiteral("chkName"));
        chkName->setGeometry(QRect(770, 150, 81, 21));
        txtName = new QLineEdit(centralWidget);
        txtName->setObjectName(QStringLiteral("txtName"));
        txtName->setGeometry(QRect(790, 180, 151, 22));
        chkFName = new QCheckBox(centralWidget);
        chkFName->setObjectName(QStringLiteral("chkFName"));
        chkFName->setGeometry(QRect(770, 210, 81, 21));
        txtFName = new QLineEdit(centralWidget);
        txtFName->setObjectName(QStringLiteral("txtFName"));
        txtFName->setGeometry(QRect(790, 240, 151, 22));
        chkPName_3 = new QCheckBox(centralWidget);
        chkPName_3->setObjectName(QStringLiteral("chkPName_3"));
        chkPName_3->setGeometry(QRect(770, 270, 81, 21));
        txtPName = new QLineEdit(centralWidget);
        txtPName->setObjectName(QStringLiteral("txtPName"));
        txtPName->setGeometry(QRect(790, 300, 151, 22));
        txtPhone = new QLineEdit(centralWidget);
        txtPhone->setObjectName(QStringLiteral("txtPhone"));
        txtPhone->setGeometry(QRect(790, 120, 151, 22));
        chkPhone = new QCheckBox(centralWidget);
        chkPhone->setObjectName(QStringLiteral("chkPhone"));
        chkPhone->setGeometry(QRect(770, 90, 131, 21));
        cmdAvail = new QPushButton(centralWidget);
        cmdAvail->setObjectName(QStringLiteral("cmdAvail"));
        cmdAvail->setGeometry(QRect(590, 600, 161, 28));
        QIcon icon3;
        icon3.addFile(QStringLiteral("my-numbers-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        cmdAvail->setIcon(icon3);
        cmdStat = new QPushButton(centralWidget);
        cmdStat->setObjectName(QStringLiteral("cmdStat"));
        cmdStat->setGeometry(QRect(760, 600, 201, 28));
        QIcon icon4;
        icon4.addFile(QStringLiteral("chart-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        cmdStat->setIcon(icon4);
        cmdShow = new QPushButton(centralWidget);
        cmdShow->setObjectName(QStringLiteral("cmdShow"));
        cmdShow->setGeometry(QRect(820, 480, 93, 28));
        chkConType = new QCheckBox(centralWidget);
        chkConType->setObjectName(QStringLiteral("chkConType"));
        chkConType->setGeometry(QRect(770, 340, 131, 21));
        cmbConType = new QComboBox(centralWidget);
        cmbConType->setObjectName(QStringLiteral("cmbConType"));
        cmbConType->setGeometry(QRect(790, 370, 151, 22));
        chkYear = new QCheckBox(centralWidget);
        chkYear->setObjectName(QStringLiteral("chkYear"));
        chkYear->setGeometry(QRect(770, 420, 131, 21));
        txtYear = new QLineEdit(centralWidget);
        txtYear->setObjectName(QStringLiteral("txtYear"));
        txtYear->setGeometry(QRect(790, 450, 151, 22));
        line = new QFrame(centralWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(100, 640, 121, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        tblSubsc = new QTableView(centralWidget);
        tblSubsc->setObjectName(QStringLiteral("tblSubsc"));
        tblSubsc->setGeometry(QRect(10, 10, 741, 571));
        tblSubsc->verticalHeader()->setVisible(true);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 981, 26));
        mnuEdit = new QMenu(menuBar);
        mnuEdit->setObjectName(QStringLiteral("mnuEdit"));
        mnuTools = new QMenu(menuBar);
        mnuTools->setObjectName(QStringLiteral("mnuTools"));
        mnuFile = new QMenu(menuBar);
        mnuFile->setObjectName(QStringLiteral("mnuFile"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(mnuFile->menuAction());
        menuBar->addAction(mnuEdit->menuAction());
        menuBar->addAction(mnuTools->menuAction());
        mnuEdit->addSeparator();
        mnuEdit->addAction(mnuAdd);
        mnuEdit->addAction(mnuEditSub);
        mnuEdit->addAction(mnuDel);
        mnuTools->addAction(mnuAvail);
        mnuTools->addAction(mnuStat);
        mnuTools->addSeparator();
        mnuTools->addAction(mnuList);
        mnuFile->addAction(mnuOpen);
        mnuFile->addAction(mnuExit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\320\220\320\261\320\276\320\275\320\265\320\275\321\202\321\213", 0));
        action->setText(QApplication::translate("MainWindow", "\320\244\320\260\320\271\320\273", 0));
        mnuOpen->setText(QApplication::translate("MainWindow", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214 \320\261\320\260\320\267\321\203", 0));
        mnuOpen->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", 0));
        action_4->setText(QApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\261\320\260\320\267\321\203", 0));
        action_4->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", 0));
        action_5->setText(QApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214 \320\272\320\260\320\272...", 0));
        mnuExit->setText(QApplication::translate("MainWindow", "\320\222\321\213\321\205\320\276\320\264", 0));
        mnuExit->setShortcut(QApplication::translate("MainWindow", "Alt+Q", 0));
        mnuAdd->setText(QApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\260\320\261\320\276\320\275\320\265\320\275\321\202\320\260", 0));
        mnuAdd->setShortcut(QApplication::translate("MainWindow", "Ctrl+A", 0));
        mnuEditSub->setText(QApplication::translate("MainWindow", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214", 0));
        mnuEditSub->setShortcut(QApplication::translate("MainWindow", "Ctrl+E", 0));
        mnuDel->setText(QApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \320\260\320\261\320\276\320\275\320\265\320\275\321\202\320\260", 0));
        mnuDel->setShortcut(QApplication::translate("MainWindow", "Del", 0));
        mnuAvail->setText(QApplication::translate("MainWindow", "\320\235\320\265\320\267\320\260\320\275\321\217\321\202\321\213\320\265 \320\275\320\276\320\274\320\265\321\200\320\260", 0));
        mnuStat->setText(QApplication::translate("MainWindow", "\320\241\321\202\320\260\321\202\320\270\321\201\321\202\320\270\320\272\320\260 \320\277\320\276\320\264\320\272\320\273\321\216\321\207\320\265\320\275\320\270\320\271", 0));
        mnuList->setText(QApplication::translate("MainWindow", "\320\237\320\276\320\273\320\275\321\213\320\271 \321\201\320\277\320\270\321\201\320\276\320\272 \320\260\320\261\320\276\320\275\320\265\320\275\321\202\320\276\320\262", 0));
        cmdAdd->setText(QApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\260\320\261\320\276\320\275\320\265\320\275\321\202\320\260", 0));
        cmdEdit->setText(QApplication::translate("MainWindow", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214", 0));
        cmdDel->setText(QApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", 0));
        label->setText(QString());
        label_2->setText(QApplication::translate("MainWindow", "\320\237\320\276\320\270\321\201\320\272", 0));
        chkName->setText(QApplication::translate("MainWindow", "\320\230\320\274\321\217", 0));
        chkFName->setText(QApplication::translate("MainWindow", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217", 0));
        chkPName_3->setText(QApplication::translate("MainWindow", "\320\236\321\202\321\207\320\265\321\201\321\202\320\262\320\276", 0));
        chkPhone->setText(QApplication::translate("MainWindow", "\320\235\320\276\320\274\320\265\321\200 \321\202\320\265\320\273\320\265\321\204\320\276\320\275\320\260", 0));
        cmdAvail->setText(QApplication::translate("MainWindow", "\320\235\320\265\320\267\320\260\320\275\321\217\321\202\321\213\320\265 \320\275\320\276\320\274\320\265\321\200\320\260", 0));
        cmdStat->setText(QApplication::translate("MainWindow", "\320\241\321\202\320\260\321\202\320\270\321\201\321\202\320\270\320\272\320\260 \320\277\320\276\320\264\320\272\320\273\321\216\321\207\320\265\320\275\320\270\320\271", 0));
        cmdShow->setText(QApplication::translate("MainWindow", "\320\237\320\276\320\272\320\260\320\267\320\260\321\202\321\214", 0));
        chkConType->setText(QApplication::translate("MainWindow", "\320\242\320\270\320\277 \320\260\320\261\320\276\320\275\320\265\320\275\321\202\320\260", 0));
        chkYear->setText(QApplication::translate("MainWindow", "\320\223\320\276\320\264 \320\277\320\276\320\264\320\272\320\273\321\216\321\207\320\265\320\275\320\270\321\217", 0));
        mnuEdit->setTitle(QApplication::translate("MainWindow", "\320\237\321\200\320\260\320\262\320\272\320\260", 0));
        mnuTools->setTitle(QApplication::translate("MainWindow", "\320\241\320\265\321\200\320\262\320\270\321\201", 0));
        mnuFile->setTitle(QApplication::translate("MainWindow", "\320\244\320\260\320\271\320\273", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
