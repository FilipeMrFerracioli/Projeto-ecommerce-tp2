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
    QTabWidget *tabWidgetAdminstrador;
    QWidget *tab_ListaClientes;
    QTableWidget *tableWidget;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QPushButton *pushButtonAdicionar;
    QPushButton *pushButtonAtualizar;
    QPushButton *pushButtonRemover;
    QPushButton *pushButtonLocalizar;
    QWidget *tab_ListaEstoque;
    QTableWidget *tableWidgetGridProduto;
    QWidget *widget1;
    QGridLayout *gridLayout;
    QPushButton *pushButtonAdicionarProduto;
    QPushButton *pushButtonAtualizarProduto;
    QPushButton *pushButtonRemoverProduto;
    QPushButton *pushButtonLocalizarProduto;

    void setupUi(QDialog *Admin)
    {
        if (Admin->objectName().isEmpty())
            Admin->setObjectName(QString::fromUtf8("Admin"));
        Admin->resize(870, 624);
        tabWidgetAdminstrador = new QTabWidget(Admin);
        tabWidgetAdminstrador->setObjectName(QString::fromUtf8("tabWidgetAdminstrador"));
        tabWidgetAdminstrador->setGeometry(QRect(11, 11, 851, 601));
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
        widget = new QWidget(tab_ListaClientes);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(654, 12, 181, 251));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButtonAdicionar = new QPushButton(widget);
        pushButtonAdicionar->setObjectName(QString::fromUtf8("pushButtonAdicionar"));

        gridLayout_2->addWidget(pushButtonAdicionar, 0, 0, 1, 1);

        pushButtonAtualizar = new QPushButton(widget);
        pushButtonAtualizar->setObjectName(QString::fromUtf8("pushButtonAtualizar"));

        gridLayout_2->addWidget(pushButtonAtualizar, 1, 0, 1, 1);

        pushButtonRemover = new QPushButton(widget);
        pushButtonRemover->setObjectName(QString::fromUtf8("pushButtonRemover"));

        gridLayout_2->addWidget(pushButtonRemover, 2, 0, 1, 1);

        pushButtonLocalizar = new QPushButton(widget);
        pushButtonLocalizar->setObjectName(QString::fromUtf8("pushButtonLocalizar"));

        gridLayout_2->addWidget(pushButtonLocalizar, 3, 0, 1, 1);

        tabWidgetAdminstrador->addTab(tab_ListaClientes, QString());
        tab_ListaEstoque = new QWidget();
        tab_ListaEstoque->setObjectName(QString::fromUtf8("tab_ListaEstoque"));
        tableWidgetGridProduto = new QTableWidget(tab_ListaEstoque);
        if (tableWidgetGridProduto->columnCount() < 4)
            tableWidgetGridProduto->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidgetGridProduto->setHorizontalHeaderItem(0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidgetGridProduto->setHorizontalHeaderItem(1, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidgetGridProduto->setHorizontalHeaderItem(2, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidgetGridProduto->setHorizontalHeaderItem(3, __qtablewidgetitem8);
        tableWidgetGridProduto->setObjectName(QString::fromUtf8("tableWidgetGridProduto"));
        tableWidgetGridProduto->setGeometry(QRect(0, 0, 521, 561));
        widget1 = new QWidget(tab_ListaEstoque);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(530, 0, 201, 211));
        gridLayout = new QGridLayout(widget1);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButtonAdicionarProduto = new QPushButton(widget1);
        pushButtonAdicionarProduto->setObjectName(QString::fromUtf8("pushButtonAdicionarProduto"));

        gridLayout->addWidget(pushButtonAdicionarProduto, 0, 0, 1, 1);

        pushButtonAtualizarProduto = new QPushButton(widget1);
        pushButtonAtualizarProduto->setObjectName(QString::fromUtf8("pushButtonAtualizarProduto"));

        gridLayout->addWidget(pushButtonAtualizarProduto, 1, 0, 1, 1);

        pushButtonRemoverProduto = new QPushButton(widget1);
        pushButtonRemoverProduto->setObjectName(QString::fromUtf8("pushButtonRemoverProduto"));

        gridLayout->addWidget(pushButtonRemoverProduto, 2, 0, 1, 1);

        pushButtonLocalizarProduto = new QPushButton(widget1);
        pushButtonLocalizarProduto->setObjectName(QString::fromUtf8("pushButtonLocalizarProduto"));

        gridLayout->addWidget(pushButtonLocalizarProduto, 3, 0, 1, 1);

        tabWidgetAdminstrador->addTab(tab_ListaEstoque, QString());

        retranslateUi(Admin);

        tabWidgetAdminstrador->setCurrentIndex(1);


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
        ___qtablewidgetitem6->setText(QCoreApplication::translate("Admin", "Descri\303\247\303\243o", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidgetGridProduto->horizontalHeaderItem(2);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("Admin", "Qtd", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidgetGridProduto->horizontalHeaderItem(3);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("Admin", "Valor", nullptr));
        pushButtonAdicionarProduto->setText(QCoreApplication::translate("Admin", "Adicionar", nullptr));
        pushButtonAtualizarProduto->setText(QCoreApplication::translate("Admin", "Atualizar", nullptr));
        pushButtonRemoverProduto->setText(QCoreApplication::translate("Admin", "Remover", nullptr));
        pushButtonLocalizarProduto->setText(QCoreApplication::translate("Admin", "Localizar", nullptr));
        tabWidgetAdminstrador->setTabText(tabWidgetAdminstrador->indexOf(tab_ListaEstoque), QCoreApplication::translate("Admin", "Tab 2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Admin: public Ui_Admin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_H
