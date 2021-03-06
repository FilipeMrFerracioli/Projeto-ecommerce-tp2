#include "pedido.h"

namespace minhaNamespace {

Pedido::Pedido():
    idPedido(""),
    idCliente(""),
    dataCompra("")
  //    carrinhoCompras()
{

}

Pedido::Pedido(QString idPedido, QString idCliente, QString dataCompra):
    idPedido(""),
    idCliente(""),
    dataCompra("")
  //    carrinhoCompras()
{
    //    setIdPedido(idPedido);
    setIdCliente(idCliente);
    setDdataCompra(dataCompra);
}

void Pedido::setIdPedido(QString idPedido)
{
    if(idPedido == "") throw QString("idPedido mal formatado");
    this->idPedido = idPedido;
}

//void Pedido::setIdPedido()
//{
//    idPedido = GenerateID::generateIDPedido();
//}

QString Pedido::getIdPedido()
{
    return idPedido;
}

void Pedido::setIdCliente(QString idCliente)
{
    if(idCliente == "") throw QString("idCliente mal formatado");
    this->idCliente = idCliente;
}

QString Pedido::getIdCliente()
{
    return idCliente;
}

void Pedido::setDdataCompra(QString dataCompra)
{
    if(dataCompra == "") throw QString("dataCompra mal formatado");
    this->dataCompra = dataCompra;
}

QString Pedido::getDataCompra()
{
    return dataCompra;
}

QString Pedido::getPedido(QString idPedido, QString idCliente, QString dataCompra, bool naoFormatado)
{
    QString res = "";

    if(naoFormatado) {
        res += idPedido + ";";
        res += idCliente + ";";
        res += dataCompra + ";";

        return res;
    }

    res += "ID: " + idPedido + "\n";
    res += "ID cliente: " + idCliente + "\n";
    res += "Data da compra: " + dataCompra;

    return res;
}

void Pedido::realizarPedido(QString idCliente, CarrinhoCompras carrinho)
{
    QString conteudo = "";

    conteudo += getIdPedido() + ";";
    conteudo += idCliente + ";";
    conteudo += getDataCompra() + ";";

    conteudo += "|";
    for(int i = 0; i < carrinho.getListaProdutos().length(); i++) {
        conteudo += carrinho.getListaProdutos()[i];

        if(i < carrinho.getListaProdutos().length() - 1) conteudo += ",";
    }
    conteudo += "|";

    Utils::salvarArquivo(nomeArquivo, conteudo, true);
    //    conteudo += carrinho.getListaProdutos();
}

//QString Pedido::realizarPedido()
//{
//    std::ofstream arquivo;

//    QString nomeDoArquivo = "basePedido.txt";

//    if(nomeDoArquivo.isEmpty()) throw QString("Arquivo n??o selecionado.");


//    arquivo.open(nomeDoArquivo.toStdString().c_str());

//    if(!arquivo.is_open()) throw QString("Erro: arquivo n??o pode ser criado.");

//    //arquivo << carrinhoCompras.getListaProdutos().toStdString().c_str() << std::endl;

//    arquivo.close();

//    return QString::number(idPedido);
//}

//QString Pedido::consultar(QString id)
//{
//    std::ifstream arquivo;

//    QString nomeDoArquivo = "basePedido.txt";

//    if(nomeDoArquivo.isEmpty()) throw QString("Arquivo n??o encontrado.");

//    arquivo.open(nomeDoArquivo.toStdString().c_str());

//    if(!arquivo.is_open()) throw QString("Erro: arquivo n??o pode ser aberto.");

//    std::string linha = "";

//    QString res = "";
//    while(!arquivo.eof()) {
//        std::getline(arquivo, linha);

//        Pedido ped = desmontar(QString::fromStdString(linha));
//        if(ped.idCliente == id) {
//            //            res += ped.montar();
//            QStringList linhaPedido = ped.montar().split(";");
//            res += "ID: " + linhaPedido[0] + "\n";
//            res += "ID Cliente: " + linhaPedido[1] + "\n";
//            res += "Data: " + linhaPedido[2];

//            res += "\n'";
//        }
//    }

//    arquivo.close();

//    return res;
//}

QString Pedido::consultar(QString idPedido, bool naoFormatado) {
    if(idPedido.isEmpty()) throw QString("ID inv??lido");

    Utils::verificarSeIDNaoExiste(nomeArquivo, idPedido);

    QStringList lista = Utils::abrirArquivo(nomeArquivo);

    QString res = "";
    for(int i = 0; i < lista.length(); i++) {
        QStringList ls = lista[i].split(";");
//        throw QString(lista[i]);
        Pedido ped = desmontar(lista[i]);
//        throw ls[0];
//        throw ped.getIdPedido();
        ped.setIdPedido(ls[0]);
        if(ped.getIdPedido() == idPedido) {
            return res = getPedido(ped.getIdPedido(), ped.getIdCliente(), ped.getDataCompra(), naoFormatado);
        }
    }

    return QString("O pedido"
                   " n??o existe");
}

QString Pedido::montar()
{
    QString objeto = "";

    objeto += idPedido + ";";
    objeto += idCliente + ";";
    objeto += dataCompra + ";";

    return objeto; // idPedido;idCliente;dataCompra
}

//Pedido Pedido::desmontar(QString objeto)
//{
//    if(objeto.isEmpty()) throw QString("Erro ao converter para Pedido");

//    QStringList objPed = objeto.split(";"); // idPedido;idCliente;dataCompra

//    //    Pedido ped = Pedido(objPed[1], objPed[2], objPed[3]);

//    return Pedido(objPed[0], objPed[1], objPed[2]);
//}

Pedido Pedido::desmontar(QString objeto)
{
    if(objeto.isEmpty()) throw QString("Erro ao converter para Pedido");

    QStringList objPed = objeto.split("|"); // idPedido;idCliente;dataCompra;|produtos,|

    QString ped = objPed[0];

//    throw objeto;

    QStringList pedSeparado = ped.split(";");

    //    Pedido ped = Pedido(objPed[1], objPed[2], objPed[3]);
//    throw pedSeparado[0];

    return Pedido(pedSeparado[0], pedSeparado[1], pedSeparado[2]);
}

}
