#include "adicionar_produto.h"
#include "ui_adicionar_produto.h"

adicionar_produto::adicionar_produto(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::adicionar_produto)
{
    ui->setupUi(this);
}

adicionar_produto::~adicionar_produto()
{
    delete ui;
}

void adicionar_produto::on_pushButtonRegistrar_clicked()
{
    try {
        minhaNamespace::Adminstrador adm = minhaNamespace::Adminstrador();

        minhaNamespace::Produto produto = minhaNamespace::Produto(ui->lineEditDescricao->text(),
                                                                  ui->lineEditQuantidade->text().toInt(),
                                                                  ui->lineEditPreco->text().toDouble());

        produto.setIdProduto(minhaNamespace::GenerateID::generateIDProduto());
//        throw produto.getProduto(produto.getIdProduto(), produto.getDescricao(), produto.getQtdProdutos(), produto.getPrecoUn());
        adm.criar(produto);

        this->close();
    }  catch (QString &erro) {
        QMessageBox::information(this, "Erro", erro);
    }
}
