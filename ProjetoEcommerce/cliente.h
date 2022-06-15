#ifndef CLIENTE_H
#define CLIENTE_H

#include <QString>
#include <ITransformarDados.h>

namespace minhaNamespace {
class Cliente : public ITransformarDados
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

    virtual void montar();
    virtual void desmontar(QString objeto);
};
}

#endif // CLIENTE_H
