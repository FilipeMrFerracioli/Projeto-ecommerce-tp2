#ifndef ICRUD_H
#define ICRUD_H

namespace minhaNamespace {
class ICRUD {
public:
    virtual void criar() = 0;
    virtual void consultar() = 0;
    virtual void atualizar() = 0;
    virtual void deletar() = 0;
};
}

#endif // ICRUD_H
