#ifndef CLIENTE_H
#define CLIENTE_H

#include <QString>
#include <ITransformarDados.h>
#include <ICRUD.h>
#include <pedido.h>

namespace minhaNamespace {
class Cliente : public ITransformarDados<Cliente>/*, public ICRUD*/
{
private:
    long id;
    QString nome;
    QString endereco;
    QString telefone;
    QString cpf;
public:
    Cliente();
    Cliente(QString nome, QString endereco, QString telefone, QString cpf);
    ~Cliente() {};

    long getId() { return id; };

    void setNome(QString nome);
    QString getNome();

    void setEndereco(QString endereco);
    QString getEndereco();

    void setTelefone(QString telefone);
    QString getTelefone();

    void setCpf(QString cpf);
    QString getCpf();

    QString consultarPedidos(long id);

    virtual void criar();
    virtual QString consultar(long id);
    virtual void atualizar(long id);
    virtual void deletar(long id);

    virtual QString montar();
    virtual Cliente desmontar(QString objeto);
};
}

#endif // CLIENTE_H
