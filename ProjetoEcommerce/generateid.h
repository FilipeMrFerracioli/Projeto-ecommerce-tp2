#ifndef GENERATEID_H
#define GENERATEID_H

#include <QString>
#include <cstdlib>
#include <ctime>

namespace minhaNamespace {
class GenerateID
{
public:
    static QString generateIDProduto();
    static QString generateIDPedido();
};
}

#endif // GENERATEID_H
