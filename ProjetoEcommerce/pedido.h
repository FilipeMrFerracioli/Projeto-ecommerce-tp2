#ifndef PEDIDO_H
#define PEDIDO_H

#include <QString>
#include <QStringList>
#include <ITransformarDados.h>
#include <ICRUD.h>
#include <carrinhocompras.h>

namespace minhaNamespace {
class Pedido : public ITransformarDados<Pedido>, public ICRUD
{
private:
    long idPedido;
    long idCliente;
    QString dataCompra;
    CarrinhoCompras carrinhoCompras;

    virtual void criar() {};
    virtual void atualizar() {};
    virtual void deletar() {};
public:
    Pedido();
    Pedido(long idPedido, long idCliente, QString dataCompra);
    ~Pedido() {};

    long getIdPedido() { return idPedido; }

    void setIdCliente(long idCliente);
    long getIdCliente();

    void setDdataCompra(QString dataCompra);
    QString getDataCompra();

    CarrinhoCompras getCarrinhoCompras() { return carrinhoCompras; }

    QString realizarPedido();

    virtual QString consultar(long id);

    virtual QString montar();
    virtual Pedido desmontar(QString objeto);
};
}

#endif // PEDIDO_H
