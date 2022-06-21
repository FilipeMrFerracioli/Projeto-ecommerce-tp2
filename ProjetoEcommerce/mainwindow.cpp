#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
            Admin adm;
            adm.exec();
    setComboBoxProdutos();
}

using namespace minhaNamespace;

void MainWindow::setComboBoxProdutos() {
    QStringList listaProdutos = minhaNamespace::Utils::abrirArquivo("baseProduto.txt");

    for(int i = 0; i < listaProdutos.length(); i++) {
        QString produto = listaProdutos[i].split(";")[1];
        QString id = listaProdutos[i].split(";")[0];

        ui->comboBoxListaProduto->addItem(produto, id.toInt());
    }
}

// Grid pedidos
void MainWindow::setGridPedidos(minhaNamespace::LLDE<minhaNamespace::Pedido> lista)
{
    ui->tableWidgetGridPedidos->clearContents();
    ui->tableWidgetGridPedidos->setRowCount(0);

    for(int i = 0; i < lista.getQuantidadeDeElementos(); i++) {
        int linha = ui->tableWidgetGridPedidos->rowCount();
        ui->tableWidgetGridPedidos->insertRow(linha);

        QTableWidgetItem *id = 0;
        id = new QTableWidgetItem(lista[i].getIdPedido());
        ui->tableWidgetGridPedidos->setItem(linha, 0, id);

        QTableWidgetItem *idCliente = 0;
        idCliente = new QTableWidgetItem(lista[i].getIdCliente());
        ui->tableWidgetGridPedidos->setItem(linha, 1, idCliente);

        QTableWidgetItem *data = 0;
        data = new QTableWidgetItem(lista[i].getDataCompra());
        ui->tableWidgetGridPedidos->setItem(linha, 2, data);
    }
}

void MainWindow::setComboBoxResumoPedidos() {
    //    QStringList listaProdutos = minhaNamespace::Utils::abrirArquivo("baseProduto.txt");
    ui->comboBoxResumoPedido->clear();
    QStringList listaProdutos = carrinhoCompras.getListaProdutos();

    for(int i = 0; i < carrinhoCompras.getListaProdutos().length(); i++) {
        QString produto = listaProdutos[i].split(";")[1];
        QString id = listaProdutos[i].split(";")[0];

        ui->comboBoxResumoPedido->addItem(produto, id.toInt());
    }
}

void MainWindow::limparQuantidade()
{
    ui->doubleSpinBoxQuantidade->clear();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButtonAddCarrinho_clicked()
{
    try {
        Produto produto = Produto();

        QStringList infoProduto = produto.consultar(ui->comboBoxListaProduto->currentData().toString(), true).split(";");
        produto = Produto(infoProduto[1], infoProduto[2].toInt(), infoProduto[3].toDouble());
        produto.setIdProduto(infoProduto[0]);

        carrinhoCompras.setAddProduto(produto.getIdProduto(), ui->doubleSpinBoxQuantidade->text().toInt());

        //        QString strProd = infoProduto[1] + " X" + QString::number(ui->doubleSpinBoxQuantidade->text().toInt());
        //        strProd += " - R$ " + infoProduto[3] + "\n";

        //        throw QString::number(carrinhoCompras.getListaProdutos().length());

        QString strProd = "";
        for(int i = 0; i < carrinhoCompras.getListaProdutos().length(); i++) {
            QStringList lista = carrinhoCompras.getListaProdutos();
            strProd += lista[i].split(";")[1] + " X" + lista[i].split(";")[2]/*QString::number(ui->doubleSpinBoxQuantidade->text().toInt()*/;
            strProd += " - R$ " + lista[i].split(";")[3];

            if(i < carrinhoCompras.getListaProdutos().length() - 1) strProd += "\n";
        }

        //        QStringList lsProd = carrinhoCompras.getListaProdutos().split("");
        //                QString strProd = lsProd[1] + " X" + QString::number(ui->doubleSpinBoxQuantidade->text().toInt());
        //                strProd += " - R$ " + lsProd[3] + "\n";



        ui->textEditResumoPedido->setText(strProd.toUpper());
        ui->lineEditTotalPedido->setText(QString::number(carrinhoCompras.getTotalCompra()));
        setComboBoxResumoPedidos();
    }  catch (QString &erro) {
        QMessageBox::information(this, "Erro", erro);
    }
}


void MainWindow::on_comboBoxListaProduto_activated(int index)
{
    try {
        ui->doubleSpinBoxQuantidade->setValue(1);

        Produto produto = Produto();

        QStringList infoProduto = produto.consultar(ui->comboBoxListaProduto->currentData().toString(), true).split(";");

        QString strProd = infoProduto[1] + "\n";
        strProd += "\n\n";
        strProd += "Preço (un): R$ " + infoProduto[3] + "\n";

        //        strProd += "\n\n";
        //        strProd += "Total: R$ " + QString::number(infoProduto[3].toDouble() * ui->doubleSpinBoxQuantidade->text().toDouble());

        ui->textEditDescricaoProduto->setText(strProd.toUpper());
    }  catch (QString &erro) {
        QMessageBox::information(this, "Erro", erro);
    }
}


void MainWindow::on_comboBoxResumoPedido_activated(int index)
{
    try {
        //setComboBoxResumoPedidos();
    }  catch (QString &erro) {
        QMessageBox::information(this, "Erro", erro);
    }
}


void MainWindow::on_pushButtonRemoverCarrinho_clicked()
{
    try {
        //        carrinhoCompras.setRmProduto(ui)
    }  catch (QString &erro) {
        QMessageBox::information(this, "Erro", erro);
    }
}


void MainWindow::on_pushButtonProsseguir_clicked()
{
    try {
        if(!carrinhoCompras.getListaProdutos().length()) throw QString("Carrinho vazio");

        Pedido pedido = Pedido();

        QDateTime data = QDateTime::currentDateTime();

        QString id = QInputDialog::getText(this, "Cliente", "ID:");

        pedido.setIdPedido(GenerateID::generateIDPedido());

        pedido.setDdataCompra(data.toString());

        pedido.realizarPedido(id, carrinhoCompras);

        //        carrinhoCompras = CarrinhoCompras();
    }  catch (QString &erro) {
        QMessageBox::information(this, "Erro", erro);
    }
}


void MainWindow::on_pushButtonConsultarPedido_clicked()
{
    try {
        //        Adminstrador adm = Adminstrador();
        Pedido ped = Pedido();

        ped.setIdPedido(ui->lineEditConsultarPedido->text());

        //        QMessageBox::information(this, "Consultar", ped.consultar(ped.getIdPedido(), true));
        //        QMessageBox::information(this, "Consultar", adm.consultar(ped, false));

        //        Adminstrador adm = Adminstrador();
        //        setGridPedidos(adm.getListaPedidos());
        QStringList pedido = ped.consultar(ped.getIdPedido(), true).split(";");


        ui->tableWidgetGridPedidos->clearContents();
        ui->tableWidgetGridPedidos->setRowCount(0);

        //        for(int i = 0; i < lista.getQuantidadeDeElementos(); i++) {
        int linha = ui->tableWidgetGridPedidos->rowCount();
        ui->tableWidgetGridPedidos->insertRow(linha);

        QTableWidgetItem *id = 0;
        id = new QTableWidgetItem(pedido[0]);
        ui->tableWidgetGridPedidos->setItem(linha, 0, id);

        QTableWidgetItem *idCliente = 0;
        idCliente = new QTableWidgetItem(pedido[1]);
        ui->tableWidgetGridPedidos->setItem(linha, 1, idCliente);

        QTableWidgetItem *data = 0;
        data = new QTableWidgetItem(pedido[2]);
        ui->tableWidgetGridPedidos->setItem(linha, 2, data);
        //        }
    }  catch (QString &erro) {
        QMessageBox::information(this, "Erro", erro);
    }
}

