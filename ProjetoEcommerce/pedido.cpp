#include "pedido.h"

namespace minhaNamespace {

Pedido::Pedido():
    idPedido(0),
    idCliente(0),
    dataCompra("")
{

}

Pedido::Pedido(long idPedido, long idCliente, QString dataCompra):
    idPedido(0),
    idCliente(0),
    dataCompra("")
{

}

void Pedido::montar()
{
    QString objeto = ""; // idPedido;idCliente;dataCompra

    objeto += QString::number(idPedido) + ";";
    objeto += QString::number(idCliente) + ";";
    objeto += dataCompra;

    if(objeto.isEmpty()) throw QString("Objeto mal formatado");

    std::fstream arquivo;

    //            QString nomeDoArquivo = QFileDialog::getOpenFileName(this, "Novo Arquivo",
    //                                                                 QDir::currentPath(), "Arquivos texto (*.csv *.txt)");
    //            if(nomeDoArquivo.isEmpty()) throw QString("Arquivo não selecionado.");

    arquivo.open("baseCliente.txt", std::ios::out | std::ios::app);

    if(!arquivo.is_open()) throw QString("Erro: arquivo não pode ser criado.");

    arquivo<< "\n" << objeto.toStdString().c_str() << std::endl;

    arquivo.close();
}

void Pedido::desmontar(QString objeto)
{

}

}
