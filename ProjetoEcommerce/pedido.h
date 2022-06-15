#ifndef PEDIDO_H
#define PEDIDO_H

#include <QString>
#include <ITransformarDados.h>

namespace minhaNamespace {
class Pedido : public ITransformarDados
{
private:
    long idPedido;
    long idCliente;
    QString dataCompra;
public:
    Pedido();
    Pedido(long idPedido, long idCliente, QString dataCompra);
    ~Pedido() {};

    void realizarPedido();
    void calcularValorTotalProduto();
    void calcularValorTotalCompra();

    virtual void montar();
    virtual void desmontar(QString objeto);
};
}

#endif // PEDIDO_H
