#ifndef PEDIDO_H
#define PEDIDO_H

#include <ITransformarDados.h>
#include <carrinhocompras.h>
#include <QString>
#include <QStringList>
#include <ICRUD.h>

namespace minhaNamespace {
class Pedido : public ITransformarDados<Pedido>/*, public ICRUD*/
{
private:
    QString idPedido;
    QString idCliente;
    QString dataCompra;
    CarrinhoCompras carrinhoCompras;
    QString nomeArquivo = "basePedido.txt";

    virtual void criar() {};
    virtual void atualizar() {};
    virtual void deletar() {};
public:
    Pedido();
    Pedido(QString idPedido, QString idCliente, QString dataCompra);
    ~Pedido() {};

    void setIdPedido(QString idPedido);
    QString getIdPedido();

    void setIdCliente(QString idCliente);
    QString getIdCliente();

    void setDdataCompra(QString dataCompra);
    QString getDataCompra();

    QString getPedido(QString idPedido, QString idCliente, QString dataCompra, bool naoFormatado);

    CarrinhoCompras getCarrinhoCompras() { return carrinhoCompras; }

    QString realizarPedido();

    virtual QString consultar(QString idPedido, bool naoFormatado = 0);

    virtual QString montar();
    virtual Pedido desmontar(QString objeto);
};
}

#endif // PEDIDO_H
