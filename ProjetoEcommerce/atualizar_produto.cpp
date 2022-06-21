#include "atualizar_produto.h"
#include "ui_atualizar_produto.h"

atualizar_produto::atualizar_produto(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::atualizar_produto)
{
    ui->setupUi(this);
    ui->lineEditDescricao->setEnabled(false);
    ui->lineEditQuantidade->setEnabled(false);
    ui->lineEditPreco->setEnabled(false);
    ui->pushButtonAtualizar->setEnabled(false);
}

atualizar_produto::~atualizar_produto()
{
    delete ui;
}

void atualizar_produto::on_pushButtonBuscar_clicked()
{
    try {
        minhaNamespace::Produto prod = minhaNamespace::Produto();
        prod.setIdProduto(ui->lineEditID->text());
        QStringList listaProduto = adm.consultar(prod, true).split(";");

        ui->lineEditID->setText(listaProduto[0]);
        ui->lineEditDescricao->setText(listaProduto[1]);
        ui->lineEditQuantidade->setText(listaProduto[2]);
        ui->lineEditPreco->setText(listaProduto[3]);

        ui->lineEditDescricao->setEnabled(true);
        ui->lineEditQuantidade->setEnabled(true);
        ui->lineEditPreco->setEnabled(true);
        ui->pushButtonAtualizar->setEnabled(true);
    }  catch (QString &erro) {
        QMessageBox::information(this, "Erro", erro);
    }
}


void atualizar_produto::on_pushButtonAtualizar_clicked()
{
    try {
        minhaNamespace::Produto produtoAtt = minhaNamespace::Produto();

//        produtoAtt.setIdProduto(produto.getIdProduto());
        produtoAtt.setIdProduto(ui->lineEditID->text());
        produtoAtt.setDescricao(ui->lineEditDescricao->text());
        produtoAtt.setQtdProdutos(ui->lineEditQuantidade->text().toInt());
        produtoAtt.setPrecoUn(ui->lineEditPreco->text().toDouble());

        adm.atualizar(produtoAtt);

        this->close();
    }  catch (QString &erro) {
        QMessageBox::information(this, "Erro", erro);
    }
}

