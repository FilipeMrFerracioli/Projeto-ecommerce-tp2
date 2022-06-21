#ifndef PRODUTO_H
#define PRODUTO_H

#include <QString>
#include <QStringList>
#include <ITransformarDados.h>
#include <ICRUD.h>
#include <utils.h>
#include <LLDE.h>
#include <generateid.h>

namespace minhaNamespace {
class Produto : public ITransformarDados<Produto>
{
private:
    QString idProduto;
    QString descricao;
    int qtdProdutos;
    double precoUn;
    QString nomeArquivo = "baseProduto.txt";
public:
    Produto();
    Produto(QString descricao, int qtdEstoque, double precoUn);
    ~Produto() {};

    void setIdProduto(QString idProduto);
    void setIdProduto();
    QString getIdProduto();

    void setDescricao(QString descricao);
    QString getDescricao();

    void setQtdProdutos(int qtdProdutos);
    int getQtdProdutos();

    void setPrecoUn(double precoUn);
    double getPrecoUn();

    QString getProduto(QString idProduto, QString descricao, int qtdProdutos, double precoUn, bool naoFormatado = 0);

    void criar();
    QString consultar(QString idProduto, bool naoFormatado = 0);
    void atualizar(Produto produto);
    void deletar(QString idProduto);



    virtual QString montar();
    virtual Produto desmontar(QString objeto);
};
}

#endif // PRODUTO_H
