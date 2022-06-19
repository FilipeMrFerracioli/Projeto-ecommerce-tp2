#include "admin.h"
#include "ui_admin.h"

Admin::Admin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Admin)
{
    ui->setupUi(this);
    ui->tabWidgetAdminstrador->setTabText(0, "Cliente");
    ui->tabWidgetAdminstrador->setTabText(1, "Produto");
    ui->tabWidgetAdminstrador->setTabText(2, "Pedido");
}

Admin::~Admin()
{
    delete ui;

}

// Grid cliente
void Admin::setGrid(minhaNamespace::LLDE<minhaNamespace::Cliente> lista)
{
    ui->tableWidgetCliente->clearContents();
    ui->tableWidgetCliente->setRowCount(0);

    for(int i = 0; i < lista.getQuantidadeDeElementos(); i++) {
        int linha = ui->tableWidgetCliente->rowCount();
        ui->tableWidgetCliente->insertRow(linha);

        QTableWidgetItem *id = 0;
        id = new QTableWidgetItem(QString::number(lista[i].getId()));
        ui->tableWidgetCliente->setItem(linha, 0, id);

        QTableWidgetItem *nome = 0;
        nome = new QTableWidgetItem(lista[i].getNome());
        ui->tableWidgetCliente->setItem(linha, 1, nome);

        QTableWidgetItem *endereco = 0;
        endereco = new QTableWidgetItem(lista[i].getEndereco());
        ui->tableWidgetCliente->setItem(linha, 2, endereco);

        QTableWidgetItem *telefone = 0;
        telefone = new QTableWidgetItem(lista[i].getTelefone());
        ui->tableWidgetCliente->setItem(linha, 3, telefone);

        QTableWidgetItem *cpf = 0;
        cpf = new QTableWidgetItem(lista[i].getCpf());
        ui->tableWidgetCliente->setItem(linha, 4, cpf);
    }
}

// AddCliente
void Admin::on_pushButtonAddCliente_clicked()
{
    try {
        telaclienteadm cliente;
        cliente.exec();

        minhaNamespace::Adminstrador adm = minhaNamespace::Adminstrador();
        setGrid(adm.getListaClientes());
//        adm.getListaClientes();
    }  catch (QString &erro) {
        QMessageBox::information(this, "Erro", erro);
    }
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
