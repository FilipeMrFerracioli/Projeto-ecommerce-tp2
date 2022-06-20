#ifndef UTILS_H
#define UTILS_H

#include <QString>
#include <QStringList>
#include <fstream>

namespace minhaNamespace {
class Utils
{
public:
    static QStringList abrirArquivo(QString nomeArquivo);

    static void salvarArquivo(QString nomeArquivo, QString conteudo, bool subtituir = 0);

    static bool verificarIDRepetido(QString nomeArquivo, QString id);

    static void verificarSeIDNaoExiste(QString nomeArquivo, QString id);
};
}

#endif // UTILS_H
