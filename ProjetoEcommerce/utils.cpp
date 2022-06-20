#include "utils.h"

namespace minhaNamespace {

//QString Utils::abrirArquivo(QString nomeArquivo)
//{
//    std::ifstream arquivo;

//    if(nomeArquivo.isEmpty()) throw QString("Nome do arquivo inválido");

//    arquivo.open(nomeArquivo.toStdString().c_str());

//    if(!arquivo.is_open()) throw QString("Erro: " + nomeArquivo + " não pode ser criado ou aberto");

//    std::string linha = "";
//    QString res = "";
//    while(!arquivo.eof()) {
//        std::getline(arquivo, linha);

//        res += QString::fromStdString(linha) + "\n";
//    }

//    arquivo.close();

//    return res;
//}

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

    //    (sub)
    //    arquivo.open(nomeArquivo.toStdString().c_str(),  std::ios::out/* | std::ios::app*/);
    arquivo.open(nomeArquivo.toStdString().c_str(), (subtituir) ? std::ios::app : std::ios::out);

    if(!arquivo.is_open()) throw QString("Erro: " + nomeArquivo + " não pode ser criado ou aberto");

//    arquivo << conteudo.toStdString().c_str() << std::endl;
        arquivo << std::endl << conteudo.toStdString().c_str();

    arquivo.close();
}

}
