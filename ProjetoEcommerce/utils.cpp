#include "utils.h"

namespace minhaNamespace {

QStringList Utils::abrirArquivo(QString nomeArquivo)
{
    std::ifstream arquivo;

    if(nomeArquivo.isEmpty()) throw QString("Nome do arquivo inválido");

    arquivo.open(nomeArquivo.toStdString().c_str());

    if(!arquivo.is_open()) throw QString("Erro: " + nomeArquivo + " não pode ser criado ou aberto");

    std::string linha = "";
    QStringList lista;

    while(!arquivo.eof()) {
        std::getline(arquivo, linha);

        QString _linha = QString::fromStdString(linha);

        if(!_linha.isEmpty()) {
            lista += _linha + "\n";
        }
    }

    arquivo.close();

    return lista;
}

void Utils::salvarArquivo(QString nomeArquivo, QString conteudo, bool subtituir)
{
    std::ofstream arquivo;

    if(nomeArquivo.isEmpty()) throw QString("Nome do arquivo inválido");

    arquivo.open(nomeArquivo.toStdString().c_str(), (subtituir) ? std::ios::app : std::ios::out);

    if(!arquivo.is_open()) throw QString("Erro: " + nomeArquivo + " não pode ser criado ou aberto");

    arquivo << std::endl << conteudo.toStdString().c_str();

    arquivo.close();
}

//void Utils::verificarIDRepetido(QString nomeArquivo, QString id)
//{
//    QStringList lista = abrirArquivo(nomeArquivo);

//    for(int i = 0; i < lista.length(); i++) {
//        if(lista[i].split(";")[0] == id) throw QString("ID já existe");
//    }
//}

bool Utils::verificarIDRepetido(QString nomeArquivo, QString id)
{
    QStringList lista = abrirArquivo(nomeArquivo);

    for(int i = 0; i < lista.length(); i++) {
        if(lista[i].split(";")[0] == id) return true;
    }

    return false;
}

void Utils::verificarSeIDNaoExiste(QString nomeArquivo, QString id)
{
    QStringList lista = abrirArquivo(nomeArquivo);

    bool verificar = false;

    for(int i = 0; i < lista.length(); i++) {
        if(lista[i].split(";")[0] == id) verificar = true;
    }

    if(!verificar) throw QString("ID não existe");
}

}
