#include "cliente.h"

namespace minhaNamespace {

Cliente::Cliente():
    id(0),
    nome(""),
    endereco(""),
    telefone(""),
    cpf("")
{

}

Cliente::Cliente(QString nome, QString endereco, QString telefone, QString cpf):
    id(0),
    nome(""),
    endereco(""),
    telefone(""),
    cpf("")
{
    if(nome == "") throw QString("Nome mal formatado");
    this->nome = nome;

    if(endereco == "") throw QString("Endereco mal formatado");
    this->endereco = endereco;

    if(telefone == "") throw QString("Telefone mal formatado");
    this->telefone = telefone;

    if(cpf.length() == 11 && cpf != "") {
        this->cpf = cpf;
        id = cpf.toInt();
    }
    else throw QString("CPF mal formatado");
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
    if(endereco == "") throw QString("Endereco mal formatado");
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
        id = cpf.toInt();
    }
    else throw QString("CPF mal formatado");
}

QString Cliente::getCpf()
{
    return cpf;
}

QString Cliente::consultarPedidos(long id)
{
    Pedido ped;
    return ped.consultar(id);
}

void Cliente::criar()
{
    // verificar se já existe

    if(montar().isEmpty()) throw QString("Objeto mal formatado");

    std::fstream arquivo;

    arquivo.open("baseCliente.txt", std::ios::out | std::ios::app);

    if(!arquivo.is_open()) throw QString("Erro: arquivo não pode ser criado.");

    //    arquivo << montar().toStdString().c_str() << std::endl;
    if(montar().isEmpty()) arquivo << montar().toStdString().c_str();
    else arquivo << std::endl << montar().toStdString().c_str();
    //    arquivo << montar().toStdString().c_str();
    arquivo.close();
}

QString Cliente::consultar(long id)
{
    std::ifstream arquivo;

    QString nomeDoArquivo = "baseCliente.txt";

    if(nomeDoArquivo.isEmpty()) throw QString("Arquivo não selecionado.");

    arquivo.open(nomeDoArquivo.toStdString().c_str());

    if(!arquivo.is_open()) throw QString("Erro: arquivo não pode ser aberto.");

    std::string linha = "";

    QString res = "";
    while(!arquivo.eof()) {
        std::getline(arquivo, linha);

        Cliente cli = desmontar(QString::fromStdString(linha));
        if(cli.getId() == id) {
            res += QString::number(cli.getId()) + "\n";
            res += cli.getNome() + "\n";
            res += cli.getEndereco() + "\n";
            res += cli.getTelefone();
        }
    }

    arquivo.close();

    if(res.length() == 0) throw QString("Cliente não existe");

    return res;
}

void Cliente::atualizar(long id)
{
    std::fstream arquivo;

    QString nomeDoArquivo = "baseCliente.txt";

    if(nomeDoArquivo.isEmpty()) throw QString("Arquivo não selecionado.");

    arquivo.open(nomeDoArquivo.toStdString().c_str(), std::ios::out);

    if(!arquivo.is_open()) throw QString("Erro: arquivo não pode ser criado.");

    LLDE<Cliente> listaClientes;

    std::string linha = "";

    while(!arquivo.eof()) {
        std::getline(arquivo, linha);

        Cliente cli = Cliente(desmontar(QString::fromStdString(linha)));
        listaClientes.inserirInicio(cli);
        //        if(!(cli.getId() == id)) listaClientes.inserirInicio(cli);
    }

    for(int i = 0; i < listaClientes.getQuantidadeDeElementos(); i++) {
        if(listaClientes[i].getId() == id) {
            listaClientes[i].setNome(this->getNome());
            listaClientes[i].setEndereco(this->getEndereco());
            listaClientes[i].setTelefone(this->getTelefone());
        }
    }

    QString res = "";

    for(int i = 0; i < listaClientes.getQuantidadeDeElementos(); i++) {
        res += listaClientes[i].montar();

        if(i < listaClientes.getQuantidadeDeElementos() - 1) res += "\n";
    }

    arquivo<< "\n" << res.toStdString().c_str() << std::endl;

    arquivo.close();
}

void Cliente::deletar(long id)
{
    std::fstream arquivo;

    QString nomeDoArquivo = "baseCliente.txt";

    if(nomeDoArquivo.isEmpty()) throw QString("Arquivo não selecionado.");

    arquivo.open(nomeDoArquivo.toStdString().c_str(), std::ios::out);

    if(!arquivo.is_open()) throw QString("Erro: arquivo não pode ser criado.");

    LLDE<Cliente> listaClientes;

    std::string linha = "";

    while(!arquivo.eof()) {
        std::getline(arquivo, linha);

        Cliente cli = Cliente(desmontar(QString::fromStdString(linha)));
        listaClientes.inserirInicio(cli);
        //        if(!(cli.getId() == id)) listaClientes.inserirInicio(cli);
    }

    for(int i = 0; i < listaClientes.getQuantidadeDeElementos(); i++) {
        if(listaClientes[i].getId() == id) {
            listaClientes.retirarPos(i);
        }
    }

    QString res = "";

    for(int i = 0; i < listaClientes.getQuantidadeDeElementos(); i++) {
        res += listaClientes[i].montar();

        if(i < listaClientes.getQuantidadeDeElementos() - 1) res += "\n";
    }

    arquivo<< "\n" << res.toStdString().c_str() << std::endl;

    arquivo.close();
}

QString Cliente::montar()
{
    QString objeto = ""; // id;nome;endereco;telefone;cpf

    //    objeto += QString::number(id) + ";";
    objeto += nome + ";";
    objeto += endereco + ";";
    objeto += telefone + ";";
    objeto += cpf;

    return objeto;
}

Cliente Cliente::desmontar(QString objeto)
{
    if(objeto.isEmpty()) throw QString("Erro ao converter para Cliente");

    QStringList objProd = objeto.split(";");

    return Cliente(objProd[0], objProd[1], objProd[2], objProd[3]);
}

}
