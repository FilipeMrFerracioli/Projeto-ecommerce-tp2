#ifndef ITRANSFORMARDADOS_H
#define ITRANSFORMARDADOS_H

#include <fstream>
#include <QString>

namespace minhaNamespace {
template<class T>
class ITransformarDados {
public:
    virtual QString montar() = 0;
    virtual T desmontar(QString objeto) = 0;
};
}

#endif // ITRANSFORMARDADOS_H
