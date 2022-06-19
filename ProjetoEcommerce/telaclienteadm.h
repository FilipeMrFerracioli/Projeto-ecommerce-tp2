#ifndef TELACLIENTEADM_H
#define TELACLIENTEADM_H

#include <QDialog>
#include <adminstrador.h>
#include <QMessageBox>

namespace Ui {
class telaclienteadm;
}

class telaclienteadm : public QDialog
{
    Q_OBJECT

public:
    explicit telaclienteadm(QWidget *parent = nullptr);
    ~telaclienteadm();

private slots:
    void on_pushButtonRegistrar_clicked();

private:
    Ui::telaclienteadm *ui;
};

#endif // TELACLIENTEADM_H
