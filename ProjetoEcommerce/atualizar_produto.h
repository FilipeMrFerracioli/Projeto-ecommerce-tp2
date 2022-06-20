#ifndef ATUALIZAR_PRODUTO_H
#define ATUALIZAR_PRODUTO_H

#include <QDialog>
#include <QMessageBox>
#include <adminstrador.h>

namespace Ui {
class atualizar_produto;
}

class atualizar_produto : public QDialog
{
    Q_OBJECT

public:
    explicit atualizar_produto(QWidget *parent = nullptr);
    ~atualizar_produto();

private slots:
    void on_pushButtonBuscar_clicked();

    void on_pushButtonAtualizar_clicked();

private:
    Ui::atualizar_produto *ui;
    minhaNamespace::Adminstrador adm = minhaNamespace::Adminstrador();
    minhaNamespace::Produto produto = minhaNamespace::Produto();
};

#endif // ATUALIZAR_PRODUTO_H
