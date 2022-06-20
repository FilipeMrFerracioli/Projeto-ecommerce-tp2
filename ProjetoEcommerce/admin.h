#ifndef ADMIN_H
#define ADMIN_H

//#include <QDialog>
#include <QInputDialog>
#include <telaclienteadm.h>
#include <atualizar_cliente.h>
#include <QMessageBox>
#include <cliente.h>

namespace Ui {
class Admin;
}

class Admin : public QDialog
{
    Q_OBJECT

public:
    explicit Admin(QWidget *parent = nullptr);
    ~Admin();

    void setGrid(minhaNamespace::LLDE<minhaNamespace::Cliente> lista);
private slots:
    void on_pushButtonAddCliente_clicked();

    void on_pushButtonAttCliente_clicked();

    void on_pushButtonRmCliente_clicked();

    void on_pushButtonLocCliente_clicked();

    void on_pushButtonAddProduto_clicked();

    void on_pushButtonAttProduto_clicked();

    void on_pushButtonRmProduto_clicked();

    void on_pushButtonLocProduto_clicked();

    void on_pushButtonAddPedido_clicked();

    void on_pushButtonAttPedido_clicked();

    void on_pushButtonRmPedido_clicked();

    void on_pushButtonLocPedido_clicked();

private:
    Ui::Admin *ui;
};

#endif // ADMIN_H
