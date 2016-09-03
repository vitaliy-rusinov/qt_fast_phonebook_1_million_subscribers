#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
private slots:
    void on_cmdAdd_clicked();

    void on_cmdEdit_clicked();

    void on_cmdDel_clicked();

    void on_cmdAvail_clicked();

    void on_cmdStat_clicked();

    void on_cmdShow_clicked();

    void on_mnuOpen_triggered();

    void on_mnuExit_triggered();

    void on_mnuAdd_triggered();

    void on_mnuEditSub_triggered();

    void on_mnuDel_triggered();

    void on_mnuAvail_triggered();

    void on_mnuStat_triggered();

    void on_mnuList_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
