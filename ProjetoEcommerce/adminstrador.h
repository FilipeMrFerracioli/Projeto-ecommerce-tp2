#ifndef ADMINSTRADOR_H
#define ADMINSTRADOR_H

#include <LLDE.h>
#include <pedido.h>
#include <produto.h>
#include <cliente.h>
#include <ICRUD.h>

namespace minhaNamespace{
class Adminstrador : public ICRUD<Cliente, Produto>
{
private:
    long chaveAcesso;
    //    LLDE<Pedido> listaPedidos;
    //    LLDE<Produto> listaProduto;
    //    LLDE<Cliente> listaCliente;

public:
    Adminstrador();
    ~Adminstrador() {};

    virtual void criar(Cliente cliente);
    virtual void criar(Produto produto);

//    virtual QString consultar(QString id, bool naoFormatado);
        virtual QString consultar(Cliente cliente, bool naoFormatado);
        virtual QString consultar(Produto produto, bool naoFormatado);

    virtual void atualizar(Cliente cliente);
    virtual void atualizar(Produto produto);

        virtual void deletar(Cliente cliente);
        virtual void deletar(Produto produto);
//    virtual void deletar(QString id);

    LLDE<Cliente> getListaClientes();
    LLDE<Produto> getListaProdutos();
    LLDE<Pedido> getListaPedidos();
};
}

#endif // ADMINSTRADOR_H
