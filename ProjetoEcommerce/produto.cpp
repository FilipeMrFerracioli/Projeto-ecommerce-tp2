#include "produto.h"

namespace minhaNamespace {

Produto::Produto():
    idProduto(0),
    descricao(""),
    qtdProdutos(0),
    precoUn(0.0)
{

}

Produto::Produto(QString descricao, int qtdProdutos, double precoUn):
    idProduto(0),
    descricao(""),
    qtdProdutos(0),
    precoUn(0.0)
{
    if(descricao == "") throw QString("descricao mal formatado");
    this->descricao = descricao;

    if(qtdProdutos == 0) throw QString("qtdProdutos mal formatado");
    this->qtdProdutos = qtdProdutos;

    if(precoUn == 0.0) throw QString("precoUn mal formatado");
    this->precoUn = precoUn;
}

long Produto::getIdProduto()
{
    return idProduto;
}

void Produto::setDescricao(QString descricao)
{
    if(descricao == "") throw QString("descricao mal formatado");
    this->descricao = descricao;
}

QString Produto::getDescricao() const
{
    return descricao;
}

void Produto::setQtdProdutos(int qtdProdutos)
{
    if(qtdProdutos == 0) throw QString("qtdProdutos mal formatado");
    this->qtdProdutos = qtdProdutos;
}

int Produto::getQtdProdutos() const
{
    return qtdProdutos;
}

void Produto::setPrecoUn(double precoUn)
{
    if(precoUn == 0.0) throw QString("precoUn mal formatado");
    this->precoUn = precoUn;
}

double Produto::getPrecoUn() const
{
    return precoUn;
}

//void Produto::criar()
//{

//}

//QString Produto::consultar(long id)
//{
//    std::ifstream arquivo;

//    QString nomeDoArquivo = "basePedido.txt";

//    if(nomeDoArquivo.isEmpty()) throw QString("Arquivo não encontrado.");

//    arquivo.open(nomeDoArquivo.toStdString().c_str());

//    if(!arquivo.is_open()) throw QString("Erro: arquivo não pode ser aberto.");

//    std::string linha = "";

//    QString res = "";
//    while(!arquivo.eof()) {
//        std::getline(arquivo, linha);

//        Produto prod = desmontar(QString::fromStdString(linha));
//        if(prod.idProduto == id) {
//            //            res += ped.montar();
//            QStringList linhaProduto = prod.montar().split(";");
//            res += "ID Produto: " + linhaProduto[0] + "\n";
//            res += "Descrição: " + linhaProduto[1] + "\n";
//            res += "Quantidade em estoque: " + linhaProduto[2];
//            res += "Preço (un): " + linhaProduto[3];

//            res += "\n'";
//        }
//    }

//    arquivo.close();

//    return res;
//}

//void Produto::atualizar()
//{

//}

//void Produto::deletar()
//{

//}

QString Produto::montar() // Produto(QString descricao, int qtdProdutos, double precoUn)
{
    QString objeto = "";

    objeto += QString::number(idProduto);
    objeto += descricao + ";";
    objeto += QString::number(qtdProdutos) + ";";
    objeto += QString::number(precoUn);

    return objeto;
}

Produto Produto::desmontar(QString objeto) // Produto(QString descricao, int qtdProdutos, double precoUn)
{
    if(objeto.isEmpty()) throw QString("Erro ao converter para Pedido");

    QStringList objProd = objeto.split(";");

    return Produto(objProd[0], objProd[1].toInt(), objProd[2].toDouble());
}

}
