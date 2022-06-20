#ifndef CLIENTE_H
#define CLIENTE_H

#include <ITransformarDados.h>
#include <pedido.h>
#include <utils.h>

namespace minhaNamespace {
class Cliente : public ITransformarDados<Cliente>
{
private:
    QString id;
    QString nome;
    QString endereco;
    QString telefone;
    QString cpf;
    QString nomeArquivo = "baseCliente.txt";
public:
    Cliente();
    Cliente(QString nome, QString endereco, QString telefone, QString cpf);
    ~Cliente() {};

    QString getId();
    //    void setId();

    void setNome(QString nome);
    QString getNome();

    void setEndereco(QString endereco);
    QString getEndereco();

    void setTelefone(QString telefone);
    QString getTelefone();

    void setCpf(QString cpf);
    QString getCpf();

    QString getCliente(QString id, QString nome, QString endereco, QString telefone, QString cpf, bool naoFormatado = 0);

    QString consultarPedidos(long id);

    void criar();
    QString consultar(QString id, bool naoFormatado = 0);
    void atualizar(Cliente cliente);
    void deletar(QString id);

    virtual QString montar();
    virtual Cliente desmontar(QString objeto);
};
}

#endif // CLIENTE_H
