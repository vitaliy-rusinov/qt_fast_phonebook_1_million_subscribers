#ifndef LISTS_H
#define LISTS_H

#include <QDialog>

namespace Ui {
class lists;
}

class lists : public QDialog
{
    Q_OBJECT
    
public:
	void sortm();
    explicit lists(QWidget *parent = 0);
    ~lists();
    
private slots:
    void on_cmd_clicked();

private:
    Ui::lists *ui;
};

#endif // LISTS_H
