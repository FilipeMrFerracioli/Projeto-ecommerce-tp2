#include "telaclienteadm.h"
#include "ui_telaclienteadm.h"

telaclienteadm::telaclienteadm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::telaclienteadm)
{
    ui->setupUi(this);
}

telaclienteadm::~telaclienteadm()
{
    delete ui;
}
