#include "generateid.h"

namespace minhaNamespace {

long GenerateID::generateIDProduto()
{
    srand((unsigned)time(0));

    long id = 0;

    id = (rand() % 1000) + 1000; // 1000 ~ 2000

    return id;
}

long GenerateID::generateIDPedido()
{
    srand((unsigned)time(0));

    long id = 0;

    id = (rand() % 3000) + 5000;

    return id;
}

}
