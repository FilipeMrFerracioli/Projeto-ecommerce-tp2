#include "adminstrador.h"

namespace minhaNamespace{

Adminstrador::Adminstrador()
{

}

void Adminstrador::criar(Cliente cliente)
{
    cliente.criar();
}

void Adminstrador::criar(Produto produto)
{
    std::fstream arquivo;

    QString nomeDoArquivo = "baseProduto.txt";

    if(nomeDoArquivo.isEmpty()) throw QString("Arquivo não selecionado.");

    arquivo.open(nomeDoArquivo.toStdString().c_str(), std::ios::out | std::ios::app);

    if(!arquivo.is_open()) throw QString("Erro: arquivo não pode ser criado.");

    arquivo << produto.montar().toStdString().c_str();

    arquivo.close();
}

QString Adminstrador::consultar(QString id, bool naoFormatado)
{
    Cliente cliente;
    return cliente.consultar(id, naoFormatado);
}

//QString Adminstrador::consultar(Produto produto)
//{
//    std::ifstream arquivo;

//    QString nomeDoArquivo = "baseProduto.txt";

//    if(nomeDoArquivo.isEmpty()) throw QString("Arquivo não selecionado.");

//    arquivo.open(nomeDoArquivo.toStdString().c_str());

//    if(!arquivo.is_open()) throw QString("Erro: arquivo não pode ser aberto.");

//    std::string linha = "";

//    QString res = "";
//    while(!arquivo.eof()) {
//        std::getline(arquivo, linha);

//        Produto prod = Produto();
//        prod = prod.desmontar(QString::fromStdString(linha));
//        if(prod.getIdProduto() == produto.getIdProduto()) {
//            res += "ID: " + QString::number(prod.getIdProduto()) + "\n";
//            res += "Descrição: " + prod.getDescricao() + "\n";
//            res += "Quantidade: " + QString::number(prod.getQtdProdutos()) + "\n";
//            res += "Preço (un): " + QString::number(prod.getPrecoUn());
//        }
//    }

//    arquivo.close();

//    if(res.length() == 0) return QString("Produto não encontrado");

//    return res;
//}

void Adminstrador::atualizar(Cliente cliente)
{
    cliente.atualizar(cliente);
}

void Adminstrador::atualizar(Produto produto)
{
    std::fstream arquivo;

    QString nomeDoArquivo = "baseProduto.txt";

    if(nomeDoArquivo.isEmpty()) throw QString("Arquivo não selecionado.");

    arquivo.open(nomeDoArquivo.toStdString().c_str(), std::ios::out);

    if(!arquivo.is_open()) throw QString("Erro: arquivo não pode ser criado.");

    LLDE<Produto> listaProduto;

    std::string linha = "";

    while(!arquivo.eof()) {
        std::getline(arquivo, linha);

        Produto prod = Produto();
        prod = Produto(prod.desmontar(QString::fromStdString(linha)));
        listaProduto.inserirInicio(prod);
        //        if(!(cli.getId() == id)) listaClientes.inserirInicio(cli);
    }

    for(int i = 0; i < listaProduto.getQuantidadeDeElementos(); i++) {
        if(listaProduto[i].getIdProduto() == produto.getIdProduto()) {
            listaProduto[i].setDescricao(produto.getDescricao());
            listaProduto[i].setPrecoUn(produto.getPrecoUn());
            listaProduto[i].setQtdProdutos(produto.getQtdProdutos());
        }
    }

    QString res = "";

    for(int i = 0; i < listaProduto.getQuantidadeDeElementos(); i++) {
        res += listaProduto[i].montar();

        if(i < listaProduto.getQuantidadeDeElementos() - 1) res += "\n";
    }

    arquivo<< "\n" << res.toStdString().c_str() << std::endl;

    arquivo.close();
}

void Adminstrador::deletar(QString id)
{
    Cliente cliente;
    cliente.deletar(id);
}

//void Adminstrador::deletar(Produto produto)
//{
//    std::fstream arquivo;

//    QString nomeDoArquivo = "baseProduto.txt";

//    if(nomeDoArquivo.isEmpty()) throw QString("Arquivo não selecionado.");

//    arquivo.open(nomeDoArquivo.toStdString().c_str(), std::ios::out);

//    if(!arquivo.is_open()) throw QString("Erro: arquivo não pode ser criado.");

//    LLDE<Produto> listaProduto;

//    std::string linha = "";

//    while(!arquivo.eof()) {
//        std::getline(arquivo, linha);

//        Produto prod = Produto();
//        prod = prod.desmontar(QString::fromStdString(linha));
//        listaProduto.inserirInicio(prod);
//        //        if(!(cli.getId() == id)) listaClientes.inserirInicio(cli);
//    }

//    for(int i = 0; i < listaProduto.getQuantidadeDeElementos(); i++) {
//        if(listaProduto[i].getIdProduto() == produto.getIdProduto()) {
//            listaProduto.retirarPos(i);
//        }
//    }

//    QString res = "";

//    for(int i = 0; i < listaProduto.getQuantidadeDeElementos(); i++) {
//        res += listaProduto[i].montar();

//        if(i < listaProduto.getQuantidadeDeElementos() - 1) res += "\n";
//    }

//    arquivo<< "\n" << res.toStdString().c_str() << std::endl;

//    arquivo.close();
//}

LLDE<Cliente> Adminstrador::getListaClientes()
{
    std::ifstream arquivo;

    QString nomeDoArquivo = "baseCliente.txt";

    if(nomeDoArquivo.isEmpty()) throw QString("Arquivo não selecionado.");

    arquivo.open(nomeDoArquivo.toStdString().c_str());

    if(!arquivo.is_open()) throw QString("Erro: arquivo não pode ser aberto.");

    std::string linha = "";

    LLDE<Cliente> aux;

    while(!arquivo.eof()) {
        std::getline(arquivo, linha);

        QString line = QString::fromStdString(linha);

        if(!line.isEmpty()) {
            QStringList linha;

            linha = line.split(";");

            Cliente cli = Cliente(linha[1], linha[2], linha[3], linha[4]);
//            cli.setId();
            aux.inserirInicio(cli);
        }
    }

    arquivo.close();

    return aux;
}

}
