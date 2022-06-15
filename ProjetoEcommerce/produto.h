#ifndef PRODUTO_H
#define PRODUTO_H

#include <QString>
#include <ITransformarDados.h>

namespace minhaNamespace {
class Produto : public ITransformarDados
{
private:
    long idProduto;
    QString descricao;
    int qtdEstoque;
    double precoUn;
public:
    Produto();
    Produto(QString descricao, int qtdEstoque, double precoUn);
    ~Produto() {};

    virtual void montar();
    virtual void desmontar(QString objeto);
};
}

#endif // PRODUTO_H
