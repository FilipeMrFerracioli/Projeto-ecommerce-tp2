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

void Cliente::montar()
{
    QString objeto = ""; // id;nome;endereco;telefone;cpf

    objeto += QString::number(id) + ";";
    objeto += nome + ";";
    objeto += endereco + ";";
    objeto += telefone + ";";
    objeto += cpf;

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

void Cliente::desmontar(QString objeto)
{
    std::string nomeArquivo = "baseCliente.txt";

    std::ifstream arquivo;

    arquivo.open(nomeArquivo.c_str());

    if(!arquivo.is_open()) throw QString("Erro: arquivo não pode ser aberto.");

    std::string linha = "";

    while(!arquivo.eof()) {
        std::getline(arquivo, linha);

        //    ordena->setLista(ordena->splitPessoa(QString::fromStdString(linha)));
    }

    arquivo.close();
}

}
