#include "produto.h"

namespace minhaNamespace {

Produto::Produto():
    idProduto(0),
    descricao(""),
    qtdEstoque(0),
    precoUn(0.0)
{

}

Produto::Produto(QString descricao, int qtdEstoque, double precoUn):
    idProduto(0),
    descricao(""),
    qtdEstoque(0),
    precoUn(0.0)
{

}

void Produto::montar()
{
    QString objeto = ""; // idProduto;descricao;qtdEstoque;precoUn

    objeto += QString::number(idProduto) + ";";
    objeto += descricao + ";";
    objeto += QString::number(qtdEstoque) + ";";
    objeto += QString::number(precoUn);

    if(objeto.isEmpty()) throw QString("Objeto mal formatado");

    std::fstream arquivo;

    //            QString nomeDoArquivo = QFileDialog::getOpenFileName(this, "Novo Arquivo",
    //                                                                 QDir::currentPath(), "Arquivos texto (*.csv *.txt)");
    //            if(nomeDoArquivo.isEmpty()) throw QString("Arquivo não selecionado.");

    arquivo.open("baseCliente.txt", std::ios::out | std::ios::app);

    if(!arquivo.is_open()) throw QString("Erro: arquivo não pode ser criado.");

    arquivo<< "\n" << objeto.toStdString().c_str() << std::endl;

    arquivo.close();
}

void Produto::desmontar(QString objeto)
{

}

}
