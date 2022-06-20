#include "generateid.h"

namespace minhaNamespace {

QString GenerateID::generateIDProduto()
{
    srand((unsigned)time(0));

    long id = 0;

    id = (rand() % 1000) + 1000; // 1000 ~ 2000

    return QString::number(id);
}

QString GenerateID::generateIDPedido()
{
    srand((unsigned)time(0));

    long id = 0;

    id = (rand() % 3000) + 5000;

    return QString::number(id);
}

}
