#ifndef CARRINHOCOMPRAS_H
#define CARRINHOCOMPRAS_H

#include <produto.h>
#include <LLDE.h>

namespace minhaNamespace {
class CarrinhoCompras
{
private:
    LLDE<Produto> listaProdutos;
    double totalCompra;
public:
    CarrinhoCompras();
    //    CarrinhoCompras();
    ~CarrinhoCompras() {};

    void setAddProduto(QString idProduto, int qtdProduto);
    void setRmProduto(QString idProduto, int qtdProduto);

    void setAddTotalCompra(double preco);
    void setRmTotalCompra(double preco);
    double getTotalCompra();

    QStringList getListaProdutos();
//    QString getListaProdutos();
};
}

#endif // CARRINHOCOMPRAS_H
