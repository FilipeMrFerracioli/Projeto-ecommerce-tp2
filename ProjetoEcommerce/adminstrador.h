#ifndef ADMINSTRADOR_H
#define ADMINSTRADOR_H

#include <LLDE.h>
#include <pedido.h>
#include <produto.h>
#include <cliente.h>
#include <ICRUD.h>

namespace minhaNamespace{
class Adminstrador : public ICRUD
{
private:
    long id;
    LLDE<Pedido> listaPedidos;
    LLDE<Produto> listaProduto;
    LLDE<Cliente> listaCliente;

public:
    Adminstrador();
    ~Adminstrador();


};
}

#endif // ADMINSTRADOR_H
