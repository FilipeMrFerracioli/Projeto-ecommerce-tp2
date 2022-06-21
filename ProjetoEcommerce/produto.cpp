#include "produto.h"

namespace minhaNamespace {

Produto::Produto():
    idProduto(""),
    descricao(""),
    qtdProdutos(0),
    precoUn(0.0)
{

}

Produto::Produto(QString descricao, int qtdProdutos, double precoUn):
    idProduto(""),
    descricao(""),
    qtdProdutos(0),
    precoUn(0.0)
{
    setDescricao(descricao);
    setQtdProdutos(qtdProdutos);
    setPrecoUn(precoUn);
}

void Produto::setIdProduto(QString idProduto)
{
    if(idProduto.length() == 0) throw QString("ID produto inválido");
    this->idProduto = idProduto;
}

void Produto::setIdProduto()
{
    idProduto = GenerateID::generateIDProduto();
    while(Utils::verificarIDRepetido(nomeArquivo, idProduto)) {
        idProduto = GenerateID::generateIDProduto();
    }
}

QString Produto::getIdProduto()
{
    return idProduto;
}

void Produto::setDescricao(QString descricao)
{
    if(descricao == "") throw QString("descricao mal formatado");
    this->descricao = descricao;
}

QString Produto::getDescricao()
{
    return descricao;
}

//void Produto::setQtdProdutos(int qtdProdutos)
//{
//    if(qtdProdutos == 0) throw QString("qtdProdutos mal formatado");
//    this->qtdProdutos = qtdProdutos;
//}

void Produto::setQtdProdutos(int qtdProdutos)
{
    if(qtdProdutos == 0) throw QString("qtdProdutos mal formatado");
    this->qtdProdutos += qtdProdutos;
}

int Produto::getQtdProdutos()
{
    return qtdProdutos;
}

void Produto::setPrecoUn(double precoUn)
{
    if(precoUn == 0.0) throw QString("precoUn mal formatado");
    this->precoUn = precoUn;
}

double Produto::getPrecoUn()
{
    return precoUn;
}

QString Produto::getProduto(QString idProduto, QString descricao, int qtdProdutos, double precoUn, bool naoFormatado)
{
    QString res = "";

    if(naoFormatado) {
        res += idProduto + ";";
        res += descricao + ";";
        res += QString::number(qtdProdutos) + ";";
        res += QString::number(precoUn) + ";";

        return res;
    }

    res += "ID: " + idProduto + "\n";
    res += "Descrição: " + descricao + "\n";
    res += "Quantidade: " + QString::number(qtdProdutos) + "\n";
    res += "Preço (un): " + QString::number(precoUn);

    return res;
}

void Produto::criar()
{
    Utils::verificarIDRepetido(nomeArquivo, getIdProduto());

    Utils::salvarArquivo(nomeArquivo, montar(), true);
}

QString Produto::consultar(QString idProduto, bool naoFormatado)
{
    if(idProduto.isEmpty()) throw QString("ID inválido");

    Utils::verificarSeIDNaoExiste(nomeArquivo, idProduto);

    QStringList lista = Utils::abrirArquivo(nomeArquivo);

    QString res = "";
    for(int i = 0; i < lista.length(); i++) {
        Produto prod = desmontar(lista[i]);
        if(prod.getIdProduto() == idProduto) {
            return res = getProduto(prod.getIdProduto(), prod.getDescricao(), prod.getQtdProdutos(), prod.getPrecoUn(), naoFormatado);
        }
    }

    return QString("O produto não existe");
}

void Produto::atualizar(Produto produto)
{
    Utils::verificarSeIDNaoExiste(nomeArquivo, produto.getIdProduto());

    QStringList lista = Utils::abrirArquivo(nomeArquivo);

    LLDE<Produto> listaProdutos;
    for(int i = 0; i < lista.length(); i++) {
        Produto prod = desmontar(lista[i]);
        if(prod.getIdProduto() != produto.idProduto) {
            listaProdutos.inserirInicio(prod);
        }
    }
    listaProdutos.inserirInicio(produto); // produto att

    QString conteudo = "";
    for(int i = 0; i < listaProdutos.getQuantidadeDeElementos(); i++) {
        conteudo += listaProdutos[i].montar() + "\n";
    }

    Utils::salvarArquivo(nomeArquivo, conteudo);
}

void Produto::deletar(QString idProduto)
{
    if(idProduto.isEmpty()) return;

    Utils::verificarSeIDNaoExiste(nomeArquivo, idProduto);

    QStringList lista = Utils::abrirArquivo(nomeArquivo);

    LLDE<Produto> listaProdutos;
    for(int i = 0; i < lista.length(); i++) {
        Produto prod = desmontar(lista[i]);

        if(prod.getIdProduto() != idProduto) {
            listaProdutos.inserirInicio(prod);
        }
    }

    QString conteudo = "";
    for(int i = 0; i < listaProdutos.getQuantidadeDeElementos(); i++) {
        conteudo += listaProdutos[i].montar() + "\n";
    }

    Utils::salvarArquivo(nomeArquivo, conteudo);
}

QString Produto::montar()
{
    QString objeto = "";

    objeto += idProduto + ";";
    objeto += descricao + ";";
    objeto += QString::number(qtdProdutos) + ";";
    objeto += QString::number(precoUn) + ";";

    return objeto; // id;descricao;qtdProdutos;precoUn
}

Produto Produto::desmontar(QString objeto)
{
    if(objeto.isEmpty()) throw QString("Erro ao converter para Produto");

    QStringList objProd = objeto.split(";"); // id;descricao;qtdProdutos;precoUn

    //    pode dar errado
//    if(objProd.length() != 4) throw QString("Produto inválido!");
    //    pode dar errado

    Produto pd = Produto(objProd[1], objProd[2].toInt(), objProd[3].toDouble());
    pd.setIdProduto(objProd[0]);

    return pd;
}

}
