#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //    ui->widgetHome->hide();
    //    ui->tabWidget->setTabText(0, "Cuzin");
    //        Admin adm;
    //        adm.exec();
    setComboBoxProdutos();
}

void MainWindow::setComboBoxProdutos() {
    QStringList listaProdutos = minhaNamespace::Utils::abrirArquivo("baseProduto.txt");

    for(int i = 0; i < listaProdutos.length(); i++) {
        minhaNamespace::Produto prod = minhaNamespace::Produto();
        prod = prod.desmontar(listaProdutos[i]);

        ui->comboBoxListaProduto->addItem(prod.getDescricao());
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

