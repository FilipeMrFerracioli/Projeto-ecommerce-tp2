#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <admin.h>
#include <utils.h>
#include <QDateTime>

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
    void setGridPedidos(minhaNamespace::LLDE<minhaNamespace::Pedido> lista);
private slots:
    void on_pushButtonAddCarrinho_clicked();

    void on_comboBoxListaProduto_activated(int index);

    void on_comboBoxResumoPedido_activated(int index);

    void on_pushButtonRemoverCarrinho_clicked();

    void on_pushButtonProsseguir_clicked();

    void on_pushButtonConsultarPedido_clicked();

    void on_pushButtonRegistrar_clicked();

    void on_pushButtonAttAtt_clicked();

    void on_pushButtonAttSalvar_clicked();

private:
    Ui::MainWindow *ui;
    minhaNamespace::CarrinhoCompras carrinhoCompras;
};
#endif // MAINWINDOW_H
