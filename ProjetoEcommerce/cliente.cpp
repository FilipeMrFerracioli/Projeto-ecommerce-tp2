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

QString Cliente::getCliente(QString id, QString nome, QString endereco, QString telefone, QString cpf, bool naoFormatado)
{
    QString res = "";

    if(naoFormatado) {
        res += id + ";";
        res += nome + ";";
        res += endereco + ";";
        res += telefone + ";";
        res += cpf + ";";

        return res;
    }

    res += "ID: " + id + "\n";
    res += "Nome: " + nome + "\n";
    res += "Endereço: " + endereco + "\n";
    res += "Telefone: " + telefone + "\n";
    res += "CPF: " + cpf;

    return res;
}

QString Cliente::consultarPedidos(long id)
{
    Pedido ped;
    return ped.consultar(id);
}

void Cliente::criar()
{
    if(id.isEmpty() || id.length() != 11) throw QString("ID inválido");

    //    Utils::verificarIDRepetido(nomeArquivo, getId());
    if(Utils::verificarIDRepetido(nomeArquivo, getId())) throw QString("ID já existe");

    Utils::salvarArquivo(nomeArquivo, montar(), true);
}

QString Cliente::consultar(QString id, bool naoFormatado)
{
    if(id.isEmpty() || id.length() != 11) throw QString("ID inválido");

    Utils::verificarSeIDNaoExiste(nomeArquivo, id);

    QStringList lista = Utils::abrirArquivo(nomeArquivo);

    QString res = "";
    for(int i = 0; i < lista.length(); i++) {
        Cliente cli = desmontar(lista[i]);
        if(cli.getId() == id) {
            return res = getCliente(cli.getId(), cli.getNome(), cli.getEndereco(), cli.getTelefone(), cli.getCpf(), naoFormatado);
        }
    }

    return QString("O cliente não existe");
}

void Cliente::atualizar(Cliente cliente)
{
    Utils::verificarSeIDNaoExiste(nomeArquivo, cliente.getId());

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
    for(int i = 0; i < listaClientes.getQuantidadeDeElementos(); i++) {
        conteudo += listaClientes[i].montar() + "\n";
    }

    Utils::salvarArquivo(nomeArquivo, conteudo);
}

void Cliente::deletar(QString id)
{
    if(id.isEmpty()) return;

    Utils::verificarSeIDNaoExiste(nomeArquivo, id);

    QStringList lista = Utils::abrirArquivo(nomeArquivo);

    LLDE<Cliente> listaClientes;
    for(int i = 0; i < lista.length(); i++) {
        Cliente cli = desmontar(lista[i]);

        if(cli.getId() != id) {
            listaClientes.inserirInicio(cli);
        }
    }

    QString conteudo = "";
    for(int i = 0; i < listaClientes.getQuantidadeDeElementos(); i++) {
        conteudo += listaClientes[i].montar() + "\n";
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
