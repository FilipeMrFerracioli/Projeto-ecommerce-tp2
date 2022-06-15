#ifndef ITRANSFORMARDADOS_H
#define ITRANSFORMARDADOS_H

#include <fstream>
#include <QString>

namespace minhaNamespace {
class ITransformarDados {
public:
    virtual void montar() = 0;
    virtual void desmontar(QString objeto) = 0;
};
}

#endif // ITRANSFORMARDADOS_H
