#ifndef ICRUD_H
#define ICRUD_H

#include <QString>

namespace minhaNamespace {
template<class T, class U>
class ICRUD {
public:
    virtual void criar(T) = 0;
    virtual void criar(U) = 0;

    //    virtual QString consultar(T) = 0;
    //    virtual QString consultar(U) = 0;
    virtual QString consultar(QString id) = 0;

    virtual void atualizar(T) = 0;
    virtual void atualizar(U) = 0;

    //    virtual void deletar(T) = 0;
    //    virtual void deletar(U) = 0;
    virtual void deletar(QString id) = 0;
};
}

#endif // ICRUD_H
