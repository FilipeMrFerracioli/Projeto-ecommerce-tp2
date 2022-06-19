#ifndef PRODUTO_H
#define PRODUTO_H

#include <QString>
#include <QStringList>
#include <ITransformarDados.h>
#include <ICRUD.h>

namespace minhaNamespace {
class Produto : public ITransformarDados<Produto>/*, public ICRUD*/
{
private:
    long idProduto;
    QString descricao;
    int qtdProdutos;
    double precoUn;
public:
    Produto();
    Produto(QString descricao, int qtdEstoque, double precoUn);
    ~Produto() {};

    long getIdProduto();

    void setDescricao(QString descricao);
    QString getDescricao() const;

    void setQtdProdutos(int qtdProdutos);
    int getQtdProdutos() const;

    void setPrecoUn(double precoUn);
    double getPrecoUn() const;

    //    virtual void criar();
    //    virtual QString consultar(long id);
    //    virtual void atualizar();
    //    virtual void deletar();

    virtual QString montar();
    virtual Produto desmontar(QString objeto);
};
}

#endif // PRODUTO_H
