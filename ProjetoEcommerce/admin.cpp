#include "admin.h"
#include "ui_admin.h"

Admin::Admin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Admin)
{
    ui->setupUi(this);
    ui->tabWidgetAdminstrador->setTabText(0, "Cliente");
    ui->tabWidgetAdminstrador->setTabText(1, "Produto");
    ui->tabWidgetAdminstrador->setTabText(2, "Cliente");
}

Admin::~Admin()
{
    delete ui;
}

// AddCliente
void Admin::on_pushButtonAddCliente_clicked()
{
    // dialog
//    int elemento = QInputDialog::getInt(this, "Cliente");

}

// AttCliente
void Admin::on_pushButtonAttCliente_clicked()
{

}

// RmCliente
void Admin::on_pushButtonRmCliente_clicked()
{

}

// LocCliente
void Admin::on_pushButtonLocCliente_clicked()
{

}

// LocProduto
void Admin::on_pushButtonAddProduto_clicked()
{

}

// LocProduto
void Admin::on_pushButtonAttProduto_clicked()
{

}

// LocProduto
void Admin::on_pushButtonRmProduto_clicked()
{

}

// LocProduto
void Admin::on_pushButtonLocProduto_clicked()
{

}

// LocPedido
void Admin::on_pushButtonAddPedido_clicked()
{

}

// LocPedido
void Admin::on_pushButtonAttPedido_clicked()
{

}

// LocPedido
void Admin::on_pushButtonRmPedido_clicked()
{

}

// LocPedido
void Admin::on_pushButtonLocPedido_clicked()
{

}

