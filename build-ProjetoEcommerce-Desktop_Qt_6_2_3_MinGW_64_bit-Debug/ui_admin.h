/********************************************************************************
** Form generated from reading UI file 'admin.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_H
#define UI_ADMIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Admin
{
public:
    QGridLayout *gridLayout_4;
    QTabWidget *tabWidgetAdminstrador;
    QWidget *tab_ListaClientes;
    QTableWidget *tableWidget;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_2;
    QPushButton *pushButtonAdicionar;
    QPushButton *pushButtonAtualizar;
    QPushButton *pushButtonRemover;
    QPushButton *pushButtonLocalizar;
    QWidget *tab_ListaEstoque;
    QTableWidget *tableWidgetGridProduto;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout;
    QPushButton *pushButtonAdicionarProduto;
    QPushButton *pushButtonAtualizarProduto;
    QPushButton *pushButtonRemoverProduto;
    QPushButton *pushButtonLocalizarProduto;
    QWidget *tab;
    QGridLayout *gridLayout_5;
    QTableWidget *tableWidgetGridProduto_2;
    QGridLayout *gridLayout_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;

    void setupUi(QDialog *Admin)
    {
        if (Admin->objectName().isEmpty())
            Admin->setObjectName(QString::fromUtf8("Admin"));
        Admin->resize(870, 624);
        gridLayout_4 = new QGridLayout(Admin);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        tabWidgetAdminstrador = new QTabWidget(Admin);
        tabWidgetAdminstrador->setObjectName(QString::fromUtf8("tabWidgetAdminstrador"));
        tab_ListaClientes = new QWidget();
        tab_ListaClientes->setObjectName(QString::fromUtf8("tab_ListaClientes"));
        tableWidget = new QTableWidget(tab_ListaClientes);
        if (tableWidget->columnCount() < 5)
            tableWidget->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(11, 11, 631, 551));
        layoutWidget = new QWidget(tab_ListaClientes);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(654, 12, 181, 251));
        gridLayout_2 = new QGridLayout(layoutWidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButtonAdicionar = new QPushButton(layoutWidget);
        pushButtonAdicionar->setObjectName(QString::fromUtf8("pushButtonAdicionar"));

        gridLayout_2->addWidget(pushButtonAdicionar, 0, 0, 1, 1);

        pushButtonAtualizar = new QPushButton(layoutWidget);
        pushButtonAtualizar->setObjectName(QString::fromUtf8("pushButtonAtualizar"));

        gridLayout_2->addWidget(pushButtonAtualizar, 1, 0, 1, 1);

        pushButtonRemover = new QPushButton(layoutWidget);
        pushButtonRemover->setObjectName(QString::fromUtf8("pushButtonRemover"));

        gridLayout_2->addWidget(pushButtonRemover, 2, 0, 1, 1);

        pushButtonLocalizar = new QPushButton(layoutWidget);
        pushButtonLocalizar->setObjectName(QString::fromUtf8("pushButtonLocalizar"));

        gridLayout_2->addWidget(pushButtonLocalizar, 3, 0, 1, 1);

        tabWidgetAdminstrador->addTab(tab_ListaClientes, QString());
        tab_ListaEstoque = new QWidget();
        tab_ListaEstoque->setObjectName(QString::fromUtf8("tab_ListaEstoque"));
        tableWidgetGridProduto = new QTableWidget(tab_ListaEstoque);
        if (tableWidgetGridProduto->columnCount() < 5)
            tableWidgetGridProduto->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidgetGridProduto->setHorizontalHeaderItem(0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidgetGridProduto->setHorizontalHeaderItem(1, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidgetGridProduto->setHorizontalHeaderItem(2, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidgetGridProduto->setHorizontalHeaderItem(3, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidgetGridProduto->setHorizontalHeaderItem(4, __qtablewidgetitem9);
        tableWidgetGridProduto->setObjectName(QString::fromUtf8("tableWidgetGridProduto"));
        tableWidgetGridProduto->setGeometry(QRect(0, 0, 631, 561));
        layoutWidget1 = new QWidget(tab_ListaEstoque);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(640, 0, 201, 211));
        gridLayout = new QGridLayout(layoutWidget1);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButtonAdicionarProduto = new QPushButton(layoutWidget1);
        pushButtonAdicionarProduto->setObjectName(QString::fromUtf8("pushButtonAdicionarProduto"));

        gridLayout->addWidget(pushButtonAdicionarProduto, 0, 0, 1, 1);

        pushButtonAtualizarProduto = new QPushButton(layoutWidget1);
        pushButtonAtualizarProduto->setObjectName(QString::fromUtf8("pushButtonAtualizarProduto"));

        gridLayout->addWidget(pushButtonAtualizarProduto, 1, 0, 1, 1);

        pushButtonRemoverProduto = new QPushButton(layoutWidget1);
        pushButtonRemoverProduto->setObjectName(QString::fromUtf8("pushButtonRemoverProduto"));

        gridLayout->addWidget(pushButtonRemoverProduto, 2, 0, 1, 1);

        pushButtonLocalizarProduto = new QPushButton(layoutWidget1);
        pushButtonLocalizarProduto->setObjectName(QString::fromUtf8("pushButtonLocalizarProduto"));

        gridLayout->addWidget(pushButtonLocalizarProduto, 3, 0, 1, 1);

        tabWidgetAdminstrador->addTab(tab_ListaEstoque, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout_5 = new QGridLayout(tab);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        tableWidgetGridProduto_2 = new QTableWidget(tab);
        if (tableWidgetGridProduto_2->columnCount() < 5)
            tableWidgetGridProduto_2->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidgetGridProduto_2->setHorizontalHeaderItem(0, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidgetGridProduto_2->setHorizontalHeaderItem(1, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidgetGridProduto_2->setHorizontalHeaderItem(2, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidgetGridProduto_2->setHorizontalHeaderItem(3, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidgetGridProduto_2->setHorizontalHeaderItem(4, __qtablewidgetitem14);
        tableWidgetGridProduto_2->setObjectName(QString::fromUtf8("tableWidgetGridProduto_2"));

        gridLayout_5->addWidget(tableWidgetGridProduto_2, 0, 0, 2, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        pushButton_4 = new QPushButton(tab);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        gridLayout_3->addWidget(pushButton_4, 1, 0, 1, 1);

        pushButton = new QPushButton(tab);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout_3->addWidget(pushButton, 0, 0, 1, 1);

        pushButton_3 = new QPushButton(tab);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        gridLayout_3->addWidget(pushButton_3, 2, 0, 1, 1);

        pushButton_2 = new QPushButton(tab);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout_3->addWidget(pushButton_2, 3, 0, 1, 1);


        gridLayout_5->addLayout(gridLayout_3, 0, 1, 1, 1);

        tabWidgetAdminstrador->addTab(tab, QString());

        gridLayout_4->addWidget(tabWidgetAdminstrador, 0, 0, 1, 1);


        retranslateUi(Admin);

        tabWidgetAdminstrador->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(Admin);
    } // setupUi

    void retranslateUi(QDialog *Admin)
    {
        Admin->setWindowTitle(QCoreApplication::translate("Admin", "Dialog", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("Admin", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("Admin", "Nome", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("Admin", "Endere\303\247o", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("Admin", "Telefone", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("Admin", "CPF", nullptr));
        pushButtonAdicionar->setText(QCoreApplication::translate("Admin", "Adicionar", nullptr));
        pushButtonAtualizar->setText(QCoreApplication::translate("Admin", "Atualizar", nullptr));
        pushButtonRemover->setText(QCoreApplication::translate("Admin", "Remover", nullptr));
        pushButtonLocalizar->setText(QCoreApplication::translate("Admin", "Localizar", nullptr));
        tabWidgetAdminstrador->setTabText(tabWidgetAdminstrador->indexOf(tab_ListaClientes), QCoreApplication::translate("Admin", "Tab 1", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidgetGridProduto->horizontalHeaderItem(0);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("Admin", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidgetGridProduto->horizontalHeaderItem(1);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("Admin", "Nome", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidgetGridProduto->horizontalHeaderItem(2);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("Admin", "Descri\303\247\303\243o", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidgetGridProduto->horizontalHeaderItem(3);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("Admin", "Qtd", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidgetGridProduto->horizontalHeaderItem(4);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("Admin", "Valor", nullptr));
        pushButtonAdicionarProduto->setText(QCoreApplication::translate("Admin", "Adicionar", nullptr));
        pushButtonAtualizarProduto->setText(QCoreApplication::translate("Admin", "Atualizar", nullptr));
        pushButtonRemoverProduto->setText(QCoreApplication::translate("Admin", "Remover", nullptr));
        pushButtonLocalizarProduto->setText(QCoreApplication::translate("Admin", "Localizar", nullptr));
        tabWidgetAdminstrador->setTabText(tabWidgetAdminstrador->indexOf(tab_ListaEstoque), QCoreApplication::translate("Admin", "Tab 2", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidgetGridProduto_2->horizontalHeaderItem(0);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("Admin", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidgetGridProduto_2->horizontalHeaderItem(1);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("Admin", "Usu\303\241rio", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidgetGridProduto_2->horizontalHeaderItem(2);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("Admin", "Descri\303\247\303\243o", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidgetGridProduto_2->horizontalHeaderItem(3);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("Admin", "Qtd", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidgetGridProduto_2->horizontalHeaderItem(4);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("Admin", "Valor", nullptr));
        pushButton_4->setText(QCoreApplication::translate("Admin", "Atualizar", nullptr));
        pushButton->setText(QCoreApplication::translate("Admin", "Adicionar", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Admin", "Remover", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Admin", "Localizar", nullptr));
        tabWidgetAdminstrador->setTabText(tabWidgetAdminstrador->indexOf(tab), QCoreApplication::translate("Admin", "Page", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Admin: public Ui_Admin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_H
