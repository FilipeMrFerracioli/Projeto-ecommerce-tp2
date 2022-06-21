#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <admin.h>
#include <utils.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void setComboBoxProdutos();
    void setComboBoxResumoPedidos();
    void limparQuantidade();
private slots:
    void on_pushButtonAddCarrinho_clicked();

    void on_comboBoxListaProduto_activated(int index);

    void on_comboBoxResumoPedido_activated(int index);

    void on_pushButtonRemoverCarrinho_clicked();

private:
    Ui::MainWindow *ui;
    minhaNamespace::CarrinhoCompras carrinhoCompras;
};
#endif // MAINWINDOW_H
