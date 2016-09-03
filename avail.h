#ifndef AVAIL_H
#define AVAIL_H

#include <QDialog>

namespace Ui {
class Avail;
}

class Avail : public QDialog
{
    Q_OBJECT
    
public:
    explicit Avail(QWidget *parent = 0);
    ~Avail();
    private slots:
		void on_cmdSearch_clicked();
private:
    Ui::Avail *ui;
};

#endif // AVAIL_H
