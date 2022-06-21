/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAlterar_dados;
    QAction *actionMeus_pedidos;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QTabWidget *tabWidgetCliente;
    QWidget *tab_Home;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QComboBox *comboBoxListaProduto;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QTextEdit *textEditDescricaoProduto;
    QPushButton *pushButtonAddCarrinho;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_3;
    QTextEdit *textEditResumoPedido;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_6;
    QLineEdit *lineEditTotalPedido;
    QHBoxLayout *horizontalLayout;
    QComboBox *comboBoxResumoPedido;
    QPushButton *pushButtonRemoverCarrinho;
    QPushButton *pushButtonProsseguir;
    QWidget *layoutWidget3;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_7;
    QDoubleSpinBox *doubleSpinBoxQuantidade;
    QWidget *tab_Login;
    QWidget *layoutWidget_6;
    QVBoxLayout *verticalLayout_19;
    QVBoxLayout *verticalLayout_20;
    QLabel *label_23;
    QLabel *label_17;
    QLineEdit *lineEditCadastroNome;
    QVBoxLayout *verticalLayout_21;
    QLabel *label_18;
    QLineEdit *lineEditCadastroEndereco;
    QVBoxLayout *verticalLayout_22;
    QLabel *label_19;
    QLineEdit *lineEditCadastroTelefone;
    QVBoxLayout *verticalLayout_23;
    QLabel *label_20;
    QLineEdit *lineEditCadastroCPF;
    QPushButton *pushButtonRegistrar;
    QWidget *layoutWidget_7;
    QVBoxLayout *verticalLayout_24;
    QLabel *label_22;
    QLabel *label_21;
    QLineEdit *lineEditCadastroCPF_2;
    QPushButton *pushButtonLogin;
    QFrame *line;
    QWidget *tab_Acc;
    QWidget *layoutWidget4;
    QVBoxLayout *verticalLayout_9;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_24;
    QLabel *label_4;
    QLineEdit *lineEditAccNome;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_5;
    QLineEdit *lineEditAccEndereco;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_8;
    QLineEdit *lineEditAccTelefone;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_9;
    QLineEdit *lineEditAccCPF;
    QWidget *layoutWidget5;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButtonAccCancelar;
    QPushButton *pushButtonAccSalvar;
    QWidget *tabClientePedidos;
    QGridLayout *gridLayout_2;
    QTableWidget *tableWidgetGridPedidos;
    QLabel *label_25;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(881, 520);
        actionAlterar_dados = new QAction(MainWindow);
        actionAlterar_dados->setObjectName(QString::fromUtf8("actionAlterar_dados"));
        actionMeus_pedidos = new QAction(MainWindow);
        actionMeus_pedidos->setObjectName(QString::fromUtf8("actionMeus_pedidos"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tabWidgetCliente = new QTabWidget(centralwidget);
        tabWidgetCliente->setObjectName(QString::fromUtf8("tabWidgetCliente"));
        tab_Home = new QWidget();
        tab_Home->setObjectName(QString::fromUtf8("tab_Home"));
        layoutWidget = new QWidget(tab_Home);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 0, 171, 62));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        comboBoxListaProduto = new QComboBox(layoutWidget);
        comboBoxListaProduto->setObjectName(QString::fromUtf8("comboBoxListaProduto"));

        verticalLayout->addWidget(comboBoxListaProduto);

        layoutWidget1 = new QWidget(tab_Home);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(250, 0, 258, 301));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget1);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_2->addWidget(label);

        textEditDescricaoProduto = new QTextEdit(layoutWidget1);
        textEditDescricaoProduto->setObjectName(QString::fromUtf8("textEditDescricaoProduto"));

        verticalLayout_2->addWidget(textEditDescricaoProduto);

        pushButtonAddCarrinho = new QPushButton(layoutWidget1);
        pushButtonAddCarrinho->setObjectName(QString::fromUtf8("pushButtonAddCarrinho"));

        verticalLayout_2->addWidget(pushButtonAddCarrinho);

        layoutWidget2 = new QWidget(tab_Home);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(590, 0, 260, 376));
        verticalLayout_4 = new QVBoxLayout(layoutWidget2);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_3 = new QLabel(layoutWidget2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_3->addWidget(label_3);

        textEditResumoPedido = new QTextEdit(layoutWidget2);
        textEditResumoPedido->setObjectName(QString::fromUtf8("textEditResumoPedido"));

        verticalLayout_3->addWidget(textEditResumoPedido);


        verticalLayout_4->addLayout(verticalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_6 = new QLabel(layoutWidget2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_2->addWidget(label_6);

        lineEditTotalPedido = new QLineEdit(layoutWidget2);
        lineEditTotalPedido->setObjectName(QString::fromUtf8("lineEditTotalPedido"));

        horizontalLayout_2->addWidget(lineEditTotalPedido);


        verticalLayout_4->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        comboBoxResumoPedido = new QComboBox(layoutWidget2);
        comboBoxResumoPedido->setObjectName(QString::fromUtf8("comboBoxResumoPedido"));

        horizontalLayout->addWidget(comboBoxResumoPedido);

        pushButtonRemoverCarrinho = new QPushButton(layoutWidget2);
        pushButtonRemoverCarrinho->setObjectName(QString::fromUtf8("pushButtonRemoverCarrinho"));

        horizontalLayout->addWidget(pushButtonRemoverCarrinho);


        verticalLayout_4->addLayout(horizontalLayout);

        pushButtonProsseguir = new QPushButton(layoutWidget2);
        pushButtonProsseguir->setObjectName(QString::fromUtf8("pushButtonProsseguir"));

        verticalLayout_4->addWidget(pushButtonProsseguir);

        layoutWidget3 = new QWidget(tab_Home);
        layoutWidget3->setObjectName(QString::fromUtf8("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(180, 0, 52, 62));
        verticalLayout_10 = new QVBoxLayout(layoutWidget3);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget3);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout_10->addWidget(label_7);

        doubleSpinBoxQuantidade = new QDoubleSpinBox(layoutWidget3);
        doubleSpinBoxQuantidade->setObjectName(QString::fromUtf8("doubleSpinBoxQuantidade"));
        doubleSpinBoxQuantidade->setDecimals(0);

        verticalLayout_10->addWidget(doubleSpinBoxQuantidade);

        tabWidgetCliente->addTab(tab_Home, QString());
        tab_Login = new QWidget();
        tab_Login->setObjectName(QString::fromUtf8("tab_Login"));
        layoutWidget_6 = new QWidget(tab_Login);
        layoutWidget_6->setObjectName(QString::fromUtf8("layoutWidget_6"));
        layoutWidget_6->setGeometry(QRect(400, 50, 321, 368));
        verticalLayout_19 = new QVBoxLayout(layoutWidget_6);
        verticalLayout_19->setObjectName(QString::fromUtf8("verticalLayout_19"));
        verticalLayout_19->setContentsMargins(0, 0, 0, 0);
        verticalLayout_20 = new QVBoxLayout();
        verticalLayout_20->setObjectName(QString::fromUtf8("verticalLayout_20"));
        label_23 = new QLabel(layoutWidget_6);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        verticalLayout_20->addWidget(label_23);

        label_17 = new QLabel(layoutWidget_6);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        verticalLayout_20->addWidget(label_17);

        lineEditCadastroNome = new QLineEdit(layoutWidget_6);
        lineEditCadastroNome->setObjectName(QString::fromUtf8("lineEditCadastroNome"));

        verticalLayout_20->addWidget(lineEditCadastroNome);


        verticalLayout_19->addLayout(verticalLayout_20);

        verticalLayout_21 = new QVBoxLayout();
        verticalLayout_21->setObjectName(QString::fromUtf8("verticalLayout_21"));
        label_18 = new QLabel(layoutWidget_6);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        verticalLayout_21->addWidget(label_18);

        lineEditCadastroEndereco = new QLineEdit(layoutWidget_6);
        lineEditCadastroEndereco->setObjectName(QString::fromUtf8("lineEditCadastroEndereco"));

        verticalLayout_21->addWidget(lineEditCadastroEndereco);


        verticalLayout_19->addLayout(verticalLayout_21);

        verticalLayout_22 = new QVBoxLayout();
        verticalLayout_22->setObjectName(QString::fromUtf8("verticalLayout_22"));
        label_19 = new QLabel(layoutWidget_6);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        verticalLayout_22->addWidget(label_19);

        lineEditCadastroTelefone = new QLineEdit(layoutWidget_6);
        lineEditCadastroTelefone->setObjectName(QString::fromUtf8("lineEditCadastroTelefone"));

        verticalLayout_22->addWidget(lineEditCadastroTelefone);


        verticalLayout_19->addLayout(verticalLayout_22);

        verticalLayout_23 = new QVBoxLayout();
        verticalLayout_23->setObjectName(QString::fromUtf8("verticalLayout_23"));
        label_20 = new QLabel(layoutWidget_6);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        verticalLayout_23->addWidget(label_20);

        lineEditCadastroCPF = new QLineEdit(layoutWidget_6);
        lineEditCadastroCPF->setObjectName(QString::fromUtf8("lineEditCadastroCPF"));

        verticalLayout_23->addWidget(lineEditCadastroCPF);

        pushButtonRegistrar = new QPushButton(layoutWidget_6);
        pushButtonRegistrar->setObjectName(QString::fromUtf8("pushButtonRegistrar"));

        verticalLayout_23->addWidget(pushButtonRegistrar);


        verticalLayout_19->addLayout(verticalLayout_23);

        layoutWidget_7 = new QWidget(tab_Login);
        layoutWidget_7->setObjectName(QString::fromUtf8("layoutWidget_7"));
        layoutWidget_7->setGeometry(QRect(130, 50, 156, 159));
        verticalLayout_24 = new QVBoxLayout(layoutWidget_7);
        verticalLayout_24->setObjectName(QString::fromUtf8("verticalLayout_24"));
        verticalLayout_24->setContentsMargins(0, 0, 0, 0);
        label_22 = new QLabel(layoutWidget_7);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        verticalLayout_24->addWidget(label_22);

        label_21 = new QLabel(layoutWidget_7);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        verticalLayout_24->addWidget(label_21);

        lineEditCadastroCPF_2 = new QLineEdit(layoutWidget_7);
        lineEditCadastroCPF_2->setObjectName(QString::fromUtf8("lineEditCadastroCPF_2"));

        verticalLayout_24->addWidget(lineEditCadastroCPF_2);

        pushButtonLogin = new QPushButton(layoutWidget_7);
        pushButtonLogin->setObjectName(QString::fromUtf8("pushButtonLogin"));

        verticalLayout_24->addWidget(pushButtonLogin);

        line = new QFrame(tab_Login);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(290, 50, 111, 361));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        tabWidgetCliente->addTab(tab_Login, QString());
        tab_Acc = new QWidget();
        tab_Acc->setObjectName(QString::fromUtf8("tab_Acc"));
        layoutWidget4 = new QWidget(tab_Acc);
        layoutWidget4->setObjectName(QString::fromUtf8("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(270, 50, 321, 332));
        verticalLayout_9 = new QVBoxLayout(layoutWidget4);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_24 = new QLabel(layoutWidget4);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        verticalLayout_5->addWidget(label_24);

        label_4 = new QLabel(layoutWidget4);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_5->addWidget(label_4);

        lineEditAccNome = new QLineEdit(layoutWidget4);
        lineEditAccNome->setObjectName(QString::fromUtf8("lineEditAccNome"));

        verticalLayout_5->addWidget(lineEditAccNome);


        verticalLayout_9->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        label_5 = new QLabel(layoutWidget4);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_6->addWidget(label_5);

        lineEditAccEndereco = new QLineEdit(layoutWidget4);
        lineEditAccEndereco->setObjectName(QString::fromUtf8("lineEditAccEndereco"));

        verticalLayout_6->addWidget(lineEditAccEndereco);


        verticalLayout_9->addLayout(verticalLayout_6);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        label_8 = new QLabel(layoutWidget4);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        verticalLayout_7->addWidget(label_8);

        lineEditAccTelefone = new QLineEdit(layoutWidget4);
        lineEditAccTelefone->setObjectName(QString::fromUtf8("lineEditAccTelefone"));

        verticalLayout_7->addWidget(lineEditAccTelefone);


        verticalLayout_9->addLayout(verticalLayout_7);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        label_9 = new QLabel(layoutWidget4);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        verticalLayout_8->addWidget(label_9);

        lineEditAccCPF = new QLineEdit(layoutWidget4);
        lineEditAccCPF->setObjectName(QString::fromUtf8("lineEditAccCPF"));

        verticalLayout_8->addWidget(lineEditAccCPF);


        verticalLayout_9->addLayout(verticalLayout_8);

        layoutWidget5 = new QWidget(tab_Acc);
        layoutWidget5->setObjectName(QString::fromUtf8("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(390, 400, 195, 31));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget5);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButtonAccCancelar = new QPushButton(layoutWidget5);
        pushButtonAccCancelar->setObjectName(QString::fromUtf8("pushButtonAccCancelar"));

        horizontalLayout_3->addWidget(pushButtonAccCancelar);

        pushButtonAccSalvar = new QPushButton(layoutWidget5);
        pushButtonAccSalvar->setObjectName(QString::fromUtf8("pushButtonAccSalvar"));

        horizontalLayout_3->addWidget(pushButtonAccSalvar);

        tabWidgetCliente->addTab(tab_Acc, QString());
        tabClientePedidos = new QWidget();
        tabClientePedidos->setObjectName(QString::fromUtf8("tabClientePedidos"));
        gridLayout_2 = new QGridLayout(tabClientePedidos);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        tableWidgetGridPedidos = new QTableWidget(tabClientePedidos);
        if (tableWidgetGridPedidos->columnCount() < 4)
            tableWidgetGridPedidos->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidgetGridPedidos->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidgetGridPedidos->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidgetGridPedidos->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidgetGridPedidos->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableWidgetGridPedidos->setObjectName(QString::fromUtf8("tableWidgetGridPedidos"));

        gridLayout_2->addWidget(tableWidgetGridPedidos, 1, 0, 1, 1);

        label_25 = new QLabel(tabClientePedidos);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        gridLayout_2->addWidget(label_25, 0, 0, 1, 1);

        tabWidgetCliente->addTab(tabClientePedidos, QString());

        gridLayout->addWidget(tabWidgetCliente, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        tabWidgetCliente->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionAlterar_dados->setText(QCoreApplication::translate("MainWindow", "Alterar dados", nullptr));
        actionMeus_pedidos->setText(QCoreApplication::translate("MainWindow", "Meus pedidos", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">Produtos</span></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">Descri\303\247\303\243o</span></p></body></html>", nullptr));
        pushButtonAddCarrinho->setText(QCoreApplication::translate("MainWindow", "Adicionar ao carrinho", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">Resumo do pedido</span></p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">Total:</span></p></body></html>", nullptr));
        pushButtonRemoverCarrinho->setText(QCoreApplication::translate("MainWindow", "Remover", nullptr));
        pushButtonProsseguir->setText(QCoreApplication::translate("MainWindow", "Prosseguir", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">Qtd</span></p></body></html>", nullptr));
        tabWidgetCliente->setTabText(tabWidgetCliente->indexOf(tab_Home), QCoreApplication::translate("MainWindow", "Tab 1", nullptr));
        label_23->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:24pt;\">Cadastre-se</span></p></body></html>", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">Nome</span></p></body></html>", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">Endere\303\247o</span></p></body></html>", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">Telefone</span></p></body></html>", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">CPF</span></p></body></html>", nullptr));
        pushButtonRegistrar->setText(QCoreApplication::translate("MainWindow", "CADASTRAR", nullptr));
        label_22->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:24pt;\">Login</span></p></body></html>", nullptr));
        label_21->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">CPF</span></p></body></html>", nullptr));
        pushButtonLogin->setText(QCoreApplication::translate("MainWindow", "LOGIN", nullptr));
        tabWidgetCliente->setTabText(tabWidgetCliente->indexOf(tab_Login), QCoreApplication::translate("MainWindow", "Page", nullptr));
        label_24->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:24pt;\">Alterar dados</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">Nome</span></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">Endere\303\247o</span></p></body></html>", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">Telefone</span></p></body></html>", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">CPF</span></p></body></html>", nullptr));
        pushButtonAccCancelar->setText(QCoreApplication::translate("MainWindow", "CANCELAR", nullptr));
        pushButtonAccSalvar->setText(QCoreApplication::translate("MainWindow", "SALVAR", nullptr));
        tabWidgetCliente->setTabText(tabWidgetCliente->indexOf(tab_Acc), QCoreApplication::translate("MainWindow", "Tab 2", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidgetGridPedidos->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidgetGridPedidos->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Data", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidgetGridPedidos->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "Valor (R$)", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidgetGridPedidos->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "Endere\303\247o", nullptr));
        label_25->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:24pt;\">Meus pedidos</span></p></body></html>", nullptr));
        tabWidgetCliente->setTabText(tabWidgetCliente->indexOf(tabClientePedidos), QCoreApplication::translate("MainWindow", "Page", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
