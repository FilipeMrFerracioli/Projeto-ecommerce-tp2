#include "admin.h"
#include "ui_admin.h"

Admin::Admin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Admin)
{
    ui->setupUi(this);
    try {
        ui->tabWidgetAdminstrador->setTabText(0, "Cliente");
        ui->tabWidgetAdminstrador->setTabText(1, "Produto");
        ui->tabWidgetAdminstrador->setTabText(2, "Pedido");

        minhaNamespace::Adminstrador adm = minhaNamespace::Adminstrador();
        setGridCliente(adm.getListaClientes());
        setGridProduto(adm.getListaProdutos());
        setGridPedidos(adm.getListaPedidos());
    }  catch (QString &erro) {
        QMessageBox::information(this, "Erro", erro);
    }
}

Admin::~Admin()
{
    delete ui;

}

// Grid cliente
void Admin::setGridCliente(minhaNamespace::LLDE<minhaNamespace::Cliente> lista)
{
    ui->tableWidgetCliente->clearContents();
    ui->tableWidgetCliente->setRowCount(0);

    for(int i = 0; i < lista.getQuantidadeDeElementos(); i++) {
        int linha = ui->tableWidgetCliente->rowCount();
        ui->tableWidgetCliente->insertRow(linha);

        QTableWidgetItem *id = 0;
        id = new QTableWidgetItem(lista[i].getId());
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

// Grid produto
void Admin::setGridProduto(minhaNamespace::LLDE<minhaNamespace::Produto> lista)
{
    ui->tableWidgetProduto->clearContents();
    ui->tableWidgetProduto->setRowCount(0);

    for(int i = 0; i < lista.getQuantidadeDeElementos(); i++) {
        int linha = ui->tableWidgetProduto->rowCount();
        ui->tableWidgetProduto->insertRow(linha);

        QTableWidgetItem *id = 0;
        id = new QTableWidgetItem(lista[i].getIdProduto());
        ui->tableWidgetProduto->setItem(linha, 0, id);

        QTableWidgetItem *descricao = 0;
        descricao = new QTableWidgetItem(lista[i].getDescricao());
        ui->tableWidgetProduto->setItem(linha, 1, descricao);

        QTableWidgetItem *quantidade = 0;
        quantidade = new QTableWidgetItem(QString::number(lista[i].getQtdProdutos()));
        ui->tableWidgetProduto->setItem(linha, 2, quantidade);

        QTableWidgetItem *preco = 0;
        preco = new QTableWidgetItem(QString::number(lista[i].getPrecoUn()));
        ui->tableWidgetProduto->setItem(linha, 3, preco);
    }
}

// Grid pedidos
void Admin::setGridPedidos(minhaNamespace::LLDE<minhaNamespace::Pedido> lista)
{
    ui->tableWidgetPedidos->clearContents();
    ui->tableWidgetPedidos->setRowCount(0);

    for(int i = 0; i < lista.getQuantidadeDeElementos(); i++) {
        int linha = ui->tableWidgetPedidos->rowCount();
        ui->tableWidgetPedidos->insertRow(linha);

        QTableWidgetItem *id = 0;
        id = new QTableWidgetItem(lista[i].getIdPedido());
        ui->tableWidgetPedidos->setItem(linha, 0, id);

        QTableWidgetItem *idCliente = 0;
        idCliente = new QTableWidgetItem(lista[i].getIdCliente());
        ui->tableWidgetPedidos->setItem(linha, 1, idCliente);

        QTableWidgetItem *data = 0;
        data = new QTableWidgetItem(lista[i].getDataCompra());
        ui->tableWidgetPedidos->setItem(linha, 2, data);
    }
}

// AddCliente
void Admin::on_pushButtonAddCliente_clicked()
{
    try {
        telaclienteadm cliente;
        cliente.exec();

        minhaNamespace::Adminstrador adm = minhaNamespace::Adminstrador();
        setGridCliente(adm.getListaClientes());
    }  catch (QString &erro) {
        QMessageBox::information(this, "Erro", erro);
    }
}

// AttCliente
void Admin::on_pushButtonAttCliente_clicked()
{
    try {
        atualizar_cliente cliente;
        cliente.exec();

        minhaNamespace::Adminstrador adm = minhaNamespace::Adminstrador();
        setGridCliente(adm.getListaClientes());
    }  catch (QString &erro) {
        QMessageBox::information(this, "Erro", erro);
    }
}

// RmCliente
void Admin::on_pushButtonRmCliente_clicked()
{
    try {
        minhaNamespace::Adminstrador adm = minhaNamespace::Adminstrador();

        QString id = QInputDialog::getText(this, "Remover cliente", "ID:");

        minhaNamespace::Cliente cli = minhaNamespace::Cliente();
        cli.setCpf(id);

        adm.deletar(cli);

        setGridCliente(adm.getListaClientes());
    }  catch (QString &erro) {
        QMessageBox::information(this, "Erro", erro);
    }
}


// LocCliente
void Admin::on_pushButtonLocCliente_clicked()
{
    try {
        minhaNamespace::Adminstrador adm = minhaNamespace::Adminstrador();

        QString id = QInputDialog::getText(this, "Consultar cliente", "ID:");

        minhaNamespace::Cliente cli = minhaNamespace::Cliente();
        cli.setCpf(id);

        QMessageBox::information(this, "Consultar", adm.consultar(cli, false));

        setGridCliente(adm.getListaClientes());
    }  catch (QString &erro) {
        QMessageBox::information(this, "Erro", erro);
    }
}

/* ************************************* */
// AddProduto
void Admin::on_pushButtonAddProduto_clicked()
{
    try {
        adicionar_produto produto;
        produto.exec();

        minhaNamespace::Adminstrador adm = minhaNamespace::Adminstrador();
        setGridProduto(adm.getListaProdutos());
    }  catch (QString &erro) {
        QMessageBox::information(this, "Erro", erro);
    }
}

// AttProduto
void Admin::on_pushButtonAttProduto_clicked()
{
    try {
        atualizar_produto produto;
        produto.exec();

        minhaNamespace::Adminstrador adm = minhaNamespace::Adminstrador();
        setGridProduto(adm.getListaProdutos());
    }  catch (QString &erro) {
        QMessageBox::information(this, "Erro", erro);
    }
}

// RmProduto
void Admin::on_pushButtonRmProduto_clicked()
{
    try {
        minhaNamespace::Adminstrador adm = minhaNamespace::Adminstrador();

        QString id = QInputDialog::getText(this, "Remover produto", "ID:");

        minhaNamespace::Produto prod = minhaNamespace::Produto();
        prod.setIdProduto(id);

        adm.deletar(prod);

        setGridProduto(adm.getListaProdutos());
    }  catch (QString &erro) {
        QMessageBox::information(this, "Erro", erro);
    }
}

// LocProduto
void Admin::on_pushButtonLocProduto_clicked()
{
    try {
        minhaNamespace::Adminstrador adm = minhaNamespace::Adminstrador();

        QString id = QInputDialog::getText(this, "Consultar produto", "ID:");

        minhaNamespace::Produto prod = minhaNamespace::Produto();
        prod.setIdProduto(id);

        QMessageBox::information(this, "Consultar", adm.consultar(prod, false));

        setGridCliente(adm.getListaClientes());
    }  catch (QString &erro) {
        QMessageBox::information(this, "Erro", erro);
    }
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
    try {
        minhaNamespace::Adminstrador adm = minhaNamespace::Adminstrador();

//        QString id = QInputDialog::getText(this, "Consultar produto", "ID:");

//        minhaNamespace::Produto prod = minhaNamespace::Produto();
//        prod.setIdProduto(id);

//        QMessageBox::information(this, "Consultar", adm.consultar(prod, false));

        setGridPedidos(adm.getListaPedidos());
    }  catch (QString &erro) {
        QMessageBox::information(this, "Erro", erro);
    }
}
