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
    long chaveAcesso;
    LLDE<Pedido> listaPedidos;
    LLDE<Produto> listaProduto;
    LLDE<Cliente> listaCliente;

public:
    Adminstrador();
    ~Adminstrador();

    virtual void criar(Cliente cliente);
    virtual void criar(Produto produto);

    virtual QString consultar(Cliente cliente);
    virtual QString consultar(Produto produto);

    virtual void atualizar(Cliente cliente);
    virtual void atualizar(Produto produto);

    virtual void deletar(Cliente cliente);
    virtual void deletar(Produto produto);
};
}

#endif // ADMINSTRADOR_H
