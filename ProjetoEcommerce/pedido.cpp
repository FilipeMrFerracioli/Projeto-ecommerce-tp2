#include "pedido.h"

namespace minhaNamespace {

Pedido::Pedido():
    idPedido(0),
    idCliente(0),
    dataCompra(""),
    carrinhoCompras()
{

}

Pedido::Pedido(long idPedido, long idCliente, QString dataCompra):
    idPedido(0),
    idCliente(0),
    dataCompra(""),
    carrinhoCompras()
{
    if(idPedido == 0) throw QString("idPedido mal formatado");
    this->idPedido = idPedido;

    if(idCliente == 0) throw QString("idCliente mal formatado");
    this->idCliente = idCliente;

    if(dataCompra == "") throw QString("dataCompra mal formatado");
    this->dataCompra = dataCompra;
}

void Pedido::setIdCliente(long idCliente)
{
    if(idCliente == 0) throw QString("idCliente mal formatado");
    this->idCliente = idCliente;
}

long Pedido::getIdCliente()
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

QString Pedido::realizarPedido()
{
    std::ofstream arquivo;

    QString nomeDoArquivo = "basePedido.txt";

    if(nomeDoArquivo.isEmpty()) throw QString("Arquivo não selecionado.");


    arquivo.open(nomeDoArquivo.toStdString().c_str());

    if(!arquivo.is_open()) throw QString("Erro: arquivo não pode ser criado.");

    arquivo << carrinhoCompras.getListaProdutos().toStdString().c_str() << std::endl;

    arquivo.close();

    return QString::number(idPedido);
}

QString Pedido::consultar(long id)
{
    std::ifstream arquivo;

    QString nomeDoArquivo = "basePedido.txt";

    if(nomeDoArquivo.isEmpty()) throw QString("Arquivo não encontrado.");

    arquivo.open(nomeDoArquivo.toStdString().c_str());

    if(!arquivo.is_open()) throw QString("Erro: arquivo não pode ser aberto.");

    std::string linha = "";

    QString res = "";
    while(!arquivo.eof()) {
        std::getline(arquivo, linha);

        Pedido ped = desmontar(QString::fromStdString(linha));
        if(ped.idCliente == id) {
            //            res += ped.montar();
            QStringList linhaPedido = ped.montar().split(";");
            res += "ID: " + linhaPedido[0] + "\n";
            res += "ID Cliente: " + linhaPedido[1] + "\n";
            res += "Data: " + linhaPedido[2];

            res += "\n'";
        }
    }

    arquivo.close();

    return res;
}

QString Pedido::montar() // idPedido;idCliente;dataCompra
{
    QString objeto = "";

    objeto += QString::number(idPedido) + ";";
    objeto += QString::number(idCliente) + ";";
    objeto += dataCompra;

    return objeto;
}

Pedido Pedido::desmontar(QString objeto) // (long)idPedido;(long)idCliente;(QString)dataCompra
{
    if(objeto.isEmpty()) throw QString("Erro ao converter para Pedido");

    QStringList objPed = objeto.split(";");

    return Pedido(objPed[0].toLong(), objPed[1].toLong(), objPed[2]);
}

}
