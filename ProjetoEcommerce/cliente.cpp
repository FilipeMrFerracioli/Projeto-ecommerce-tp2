#include "cliente.h"

namespace minhaNamespace {

Cliente::Cliente():
    id(""),
    nome(""),
    endereco(""),
    telefone(""),
    cpf("")
{

}

Cliente::Cliente(QString nome, QString endereco, QString telefone, QString cpf):
    id(""),
    nome(""),
    endereco(""),
    telefone(""),
    cpf("")
{
    setNome(nome);
    setEndereco(endereco);
    setTelefone(telefone);
    setCpf(cpf);
}

QString Cliente::getId()
{
    return id;
}

void Cliente::setNome(QString nome)
{
    if(nome == "") throw QString("Nome mal formatado");
    this->nome = nome;
}

QString Cliente::getNome()
{
    return nome;
}

void Cliente::setEndereco(QString endereco)
{
    if(endereco == "") throw QString("Endereço mal formatado");
    this->endereco = endereco;
}

QString Cliente::getEndereco()
{
    return endereco;
}

void Cliente::setTelefone(QString telefone)
{
    if(telefone == "") throw QString("Telefone mal formatado");
    this->telefone = telefone;
}

QString Cliente::getTelefone()
{
    return telefone;
}

void Cliente::setCpf(QString cpf)
{
    if(cpf.length() == 11 && cpf != "") {
        this->cpf = cpf;
        this->id = cpf;
    } //else throw QString("CPF mal formatado");
}

QString Cliente::getCpf()
{
    return cpf;
}

QString Cliente::getCliente(QString id, QString nome, QString endereco, QString telefone, QString cpf)
{
    QString res = "";

    res += id + "\n";
    res += nome + "\n";
    res += endereco + "\n";
    res += telefone + "\n";
    res += cpf;

    return res;
}

QString Cliente::consultarPedidos(long id)
{
    Pedido ped;
    return ped.consultar(id);
}

void Cliente::criar()
{
    Utils::salvarArquivo(nomeArquivo, montar());
}

QString Cliente::consultar(long id)
{
    QStringList lista = Utils::abrirArquivo(nomeArquivo);

    QString res = "";
    for(int i = 0; i < lista.length(); i++) {
        Cliente cli = desmontar(lista[i]);
        if(cli.getId() == QString::number(id)) {
            res = getCliente(cli.getId(), cli.getNome(), cli.getEndereco(), cli.getTelefone(), cli.getCpf());
        }
    }

    if(res.isEmpty()) throw QString("O cliente não existe");

    return res;
}

//void Cliente::atualizar(long id)
//{
//    std::fstream arquivo;

//    QString nomeDoArquivo = "baseCliente.txt";

//    if(nomeDoArquivo.isEmpty()) throw QString("Arquivo não selecionado.");

//    arquivo.open(nomeDoArquivo.toStdString().c_str(), std::ios::out);

//    if(!arquivo.is_open()) throw QString("Erro: arquivo não pode ser criado.");

//    LLDE<Cliente> listaClientes;

//    std::string linha = "";

//    while(!arquivo.eof()) {
//        std::getline(arquivo, linha);

//        Cliente cli = Cliente(desmontar(QString::fromStdString(linha)));
//        listaClientes.inserirInicio(cli);
//        //        if(!(cli.getId() == id)) listaClientes.inserirInicio(cli);
//    }

//    for(int i = 0; i < listaClientes.getQuantidadeDeElementos(); i++) {
//        if(listaClientes[i].getId() == QString::number(id)) {
//            listaClientes[i].setNome(this->getNome());
//            listaClientes[i].setEndereco(this->getEndereco());
//            listaClientes[i].setTelefone(this->getTelefone());
//        }
//    }

//    QString res = "";

//    for(int i = 0; i < listaClientes.getQuantidadeDeElementos(); i++) {
//        res += listaClientes[i].montar();

//        if(i < listaClientes.getQuantidadeDeElementos() - 1) res += "\n";
//    }

//    arquivo<< "\n" << res.toStdString().c_str() << std::endl;

//    arquivo.close();
//}

void Cliente::atualizar(Cliente cliente)
{
    QStringList lista = Utils::abrirArquivo(nomeArquivo);

    LLDE<Cliente> listaClientes;
    for(int i = 0; i < lista.length(); i++) {
        Cliente cli = desmontar(lista[i]);
        if(cli.getId() != cliente.id) {
            listaClientes.inserirInicio(cli);
        }
    }
    listaClientes.inserirInicio(cliente); // cliente att

    QString conteudo = "";
    for(int i = 0; i < lista.length(); i++) {
        conteudo += listaClientes[i].montar();
    }

    Utils::salvarArquivo(nomeArquivo, conteudo);
}

//void Cliente::deletar(long id)
//{
//    std::fstream arquivo;

//    QString nomeDoArquivo = "baseCliente.txt";

//    if(nomeDoArquivo.isEmpty()) throw QString("Arquivo não selecionado.");

//    arquivo.open(nomeDoArquivo.toStdString().c_str(), std::ios::out);

//    if(!arquivo.is_open()) throw QString("Erro: arquivo não pode ser criado.");

//    LLDE<Cliente> listaClientes;

//    std::string linha = "";

//    while(!arquivo.eof()) {
//        std::getline(arquivo, linha);

//        Cliente cli = Cliente(desmontar(QString::fromStdString(linha)));
//        listaClientes.inserirInicio(cli);
//    }

//    for(int i = 0; i < listaClientes.getQuantidadeDeElementos(); i++) {
//        if(listaClientes[i].getId() == QString::number(id)) {
//            listaClientes.retirarPos(i);
//        }
//    }

//    QString res = "";

//    for(int i = 0; i < listaClientes.getQuantidadeDeElementos(); i++) {
//        res += listaClientes[i].montar();

//        if(i < listaClientes.getQuantidadeDeElementos() - 1) res += "\n";
//    }

//    arquivo<< "\n" << res.toStdString().c_str() << std::endl;

//    arquivo.close();
//}

void Cliente::deletar(long id)
{
    QStringList lista = Utils::abrirArquivo(nomeArquivo);

    LLDE<Cliente> listaClientes;
    for(int i = 0; i < lista.length(); i++) {
        Cliente cli = desmontar(lista[i]);

        throw QString::number(id);

        if(cli.getId() != QString::number(id)) {
            listaClientes.inserirInicio(cli);
        }
    }

    QString conteudo = "";
    for(int i = 0; i < lista.length(); i++) {
        conteudo += listaClientes[i].montar();

        //        if(i < lista.length() - 1) conteudo += "\n";
    }

    Utils::salvarArquivo(nomeArquivo, conteudo);
}

QString Cliente::montar()
{
    QString objeto = "";

    objeto += id + ";";
    objeto += nome + ";";
    objeto += endereco + ";";
    objeto += telefone + ";";
    objeto += cpf + ";";

    return objeto; // id;nome;endereco;telefone;cpf
}

Cliente Cliente::desmontar(QString objeto)
{
    if(objeto.isEmpty()) throw QString("Erro ao converter para Cliente");

    QStringList objCli = objeto.split(";"); // id;nome;endereco;telefone;cpf

    Cliente cli = Cliente(objCli[1], objCli[2], objCli[3], objCli[4]);

    return cli;
}

}
