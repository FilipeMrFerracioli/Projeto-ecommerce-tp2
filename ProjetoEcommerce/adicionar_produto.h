#ifndef ADICIONAR_PRODUTO_H
#define ADICIONAR_PRODUTO_H

#include <QDialog>
#include <adminstrador.h>
#include <QMessageBox>
#include <generateid.h>

namespace Ui {
class adicionar_produto;
}

class adicionar_produto : public QDialog
{
    Q_OBJECT

public:
    explicit adicionar_produto(QWidget *parent = nullptr);
    ~adicionar_produto();

private slots:
    void on_pushButtonRegistrar_clicked();

private:
    Ui::adicionar_produto *ui;
};

#endif // ADICIONAR_PRODUTO_H
