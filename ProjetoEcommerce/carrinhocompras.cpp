#include "carrinhocompras.h"

namespace minhaNamespace {

CarrinhoCompras::CarrinhoCompras():
    listaProdutos(),
    totalCompra(0.0)
{

}

void CarrinhoCompras::setAddProduto(QString idProduto, int qtdProduto)
{
    Produto produto = Produto();

    QString strProd = produto.consultar(idProduto, true);

    produto = produto.desmontar(strProd);
    produto.setQtdProdutos(qtdProduto);

    listaProdutos.inserirInicio(produto);
    setAddTotalCompra(produto.getPrecoUn() * qtdProduto);
}

// esse aqui
//void CarrinhoCompras::setAddProduto(QString idProduto, int qtdProduto)
//{
//    Produto produto = Produto();

//    QString strProd = produto.consultar(idProduto, true);

//    produto = produto.desmontar(strProd);
//    produto.setQtdProdutos(qtdProduto);

//    for(int i = 0; i < listaProdutos.getQuantidadeDeElementos(); i++) {
//        if(listaProdutos[i].getIdProduto() == idProduto) {
////            listaProdutos[i].setQtdProdutos(qtdProduto);
//            produto.setQtdProdutos(qtdProduto);
//        }
//    }

//    listaProdutos.inserirInicio(produto);
//    setAddTotalCompra(produto.getPrecoUn() * qtdProduto);
//}

/*void CarrinhoCompras::setAddProduto(long idProduto, int qtdProduto)
{
    std::ifstream arquivo;

    QString nomeDoArquivo = "baseProduto.txt";

    if(nomeDoArquivo.isEmpty()) throw QString("Arquivo não encontrado.");

    arquivo.open(nomeDoArquivo.toStdString().c_str());

    if(!arquivo.is_open()) throw QString("Erro: arquivo não pode ser aberto.");

    std::string linha = "";

    while(!arquivo.eof()) {
        std::getline(arquivo, linha);

        Produto prod;
        prod = prod.desmontar(QString::fromStdString(linha));

        if(prod.getIdProduto() == idProduto) {
            prod.setQtdProdutos(qtdProduto);
            listaProdutos.inserirInicio(prod);
            setAddTotalCompra(prod.getPrecoUn() * qtdProduto);
        }
    }

    arquivo.close();
}*/

void CarrinhoCompras::setRmProduto(QString idProduto, int qtdProduto)
{
    if(listaProdutos.getQuantidadeDeElementos() == 0) throw QString("Carrinho de compras vazio");

    for(int i = 0; i < listaProdutos.getQuantidadeDeElementos(); i++) {
        if(listaProdutos[i].getIdProduto() == idProduto) {
            if(listaProdutos[i].getQtdProdutos() < qtdProduto) throw QString("Impossível remover a quantidade de produtos");

            if(listaProdutos[i].getQtdProdutos() == qtdProduto) {
                setRmTotalCompra(listaProdutos[i].getPrecoUn() * qtdProduto);

                listaProdutos.retirarPos(i);

                return;
            }

            listaProdutos[i].setQtdProdutos(listaProdutos[i].getQtdProdutos() - qtdProduto);
            setRmTotalCompra(listaProdutos[i].getPrecoUn() * (qtdProduto - listaProdutos[i].getQtdProdutos()));
        }
    }
}

/*void CarrinhoCompras::setRmProduto(long idProduto, int qtdProduto)
{
    if(listaProdutos.getQuantidadeDeElementos() == 0) throw QString("Carrinho de compras vazio");

    for(int i = 0; i < listaProdutos.getQuantidadeDeElementos(); i++) {

        if(listaProdutos[i].getIdProduto() == idProduto) {
            if(listaProdutos[i].getQtdProdutos() < qtdProduto) throw QString("Impossível remover a quantidade de produtos");

            if(listaProdutos[i].getQtdProdutos() == qtdProduto) {
                setRmTotalCompra(listaProdutos[i].getPrecoUn() * qtdProduto);
                listaProdutos.retirarPos(i);
                return;
            }

            listaProdutos[i].setQtdProdutos(listaProdutos[i].getQtdProdutos() - qtdProduto);
            setRmTotalCompra(listaProdutos[i].getPrecoUn() * (qtdProduto - listaProdutos[i].getQtdProdutos()));
        }

    }
}*/

void CarrinhoCompras::setAddTotalCompra(double preco)
{
    totalCompra += preco;
}

void CarrinhoCompras::setRmTotalCompra(double preco)
{
    totalCompra -= preco;
}

double CarrinhoCompras::getTotalCompra()
{
    return totalCompra;
}

//QString CarrinhoCompras::getListaProdutos()
//{
//    if(listaProdutos.getQuantidadeDeElementos() == 0) throw QString("Carrinho de compras vazio");

//    QString res = "";
//    for(int i = 0; i < listaProdutos.getQuantidadeDeElementos(); i++) {
//        Produto prod = listaProdutos[i];

//        res += prod.montar();

//        if(i < listaProdutos.getQuantidadeDeElementos() - 1) res += "\n";
//    }

//    return res;
//}

QStringList CarrinhoCompras::getListaProdutos()
{
    if(listaProdutos.getQuantidadeDeElementos() == 0) throw QString("Carrinho de compras vazio");

    QStringList lista;
    for(int i = 0; i < listaProdutos.getQuantidadeDeElementos(); i++) {
        Produto prod = listaProdutos[i];
        //        lista[i] = prod.montar();
        lista += prod.montar();
    }

    return lista;
}

/*QString CarrinhoCompras::getListaProdutos()
{
    if(listaProdutos.getQuantidadeDeElementos() == 0) throw QString("Carrinho de compras vazio");

    QString res = "";
    for(int i = 0; i < listaProdutos.getQuantidadeDeElementos(); i++) {
        Produto prod = listaProdutos[i];
        res += prod.montar();
        if(i < listaProdutos.getQuantidadeDeElementos() - 1) res += "\n";
    }

    return res;
}*/

}
