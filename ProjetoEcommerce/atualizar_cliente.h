#ifndef ATUALIZAR_CLIENTE_H
#define ATUALIZAR_CLIENTE_H

#include <QDialog>
#include <QMessageBox>
#include <adminstrador.h>
//#include <QStringList>

namespace Ui {
class atualizar_cliente;
}

class atualizar_cliente : public QDialog
{
    Q_OBJECT

public:
    explicit atualizar_cliente(QWidget *parent = nullptr);
    ~atualizar_cliente();

private slots:
    void on_pushButtonBuscar_clicked();

    void on_pushButtonAtualizar_clicked();

private:
    Ui::atualizar_cliente *ui;
    minhaNamespace::Adminstrador adm = minhaNamespace::Adminstrador();
    minhaNamespace::Cliente cliente = minhaNamespace::Cliente();
};

#endif // ATUALIZAR_CLIENTE_H
