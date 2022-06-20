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
    QWidget *tabCliente;
    QTableWidget *tableWidgetCliente;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_2;
    QPushButton *pushButtonAddCliente;
    QPushButton *pushButtonAttCliente;
    QPushButton *pushButtonRmCliente;
    QPushButton *pushButtonLocCliente;
    QWidget *tabProduto;
    QTableWidget *tableWidgetProduto;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout;
    QPushButton *pushButtonAddProduto;
    QPushButton *pushButtonAttProduto;
    QPushButton *pushButtonRmProduto;
    QPushButton *pushButtonLocProduto;
    QWidget *tabPedido;
    QGridLayout *gridLayout_5;
    QTableWidget *tableWidgetPedidos;
    QGridLayout *gridLayout_3;
    QPushButton *pushButtonAttPedido;
    QPushButton *pushButtonAddPedido;
    QPushButton *pushButtonRmPedido;
    QPushButton *pushButtonLocPedido;

    void setupUi(QDialog *Admin)
    {
        if (Admin->objectName().isEmpty())
            Admin->setObjectName(QString::fromUtf8("Admin"));
        Admin->resize(870, 624);
        gridLayout_4 = new QGridLayout(Admin);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        tabWidgetAdminstrador = new QTabWidget(Admin);
        tabWidgetAdminstrador->setObjectName(QString::fromUtf8("tabWidgetAdminstrador"));
        tabCliente = new QWidget();
        tabCliente->setObjectName(QString::fromUtf8("tabCliente"));
        tableWidgetCliente = new QTableWidget(tabCliente);
        if (tableWidgetCliente->columnCount() < 5)
            tableWidgetCliente->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidgetCliente->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidgetCliente->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidgetCliente->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidgetCliente->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidgetCliente->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        tableWidgetCliente->setObjectName(QString::fromUtf8("tableWidgetCliente"));
        tableWidgetCliente->setGeometry(QRect(11, 11, 631, 551));
        layoutWidget = new QWidget(tabCliente);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(654, 12, 181, 251));
        gridLayout_2 = new QGridLayout(layoutWidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButtonAddCliente = new QPushButton(layoutWidget);
        pushButtonAddCliente->setObjectName(QString::fromUtf8("pushButtonAddCliente"));

        gridLayout_2->addWidget(pushButtonAddCliente, 0, 0, 1, 1);

        pushButtonAttCliente = new QPushButton(layoutWidget);
        pushButtonAttCliente->setObjectName(QString::fromUtf8("pushButtonAttCliente"));

        gridLayout_2->addWidget(pushButtonAttCliente, 1, 0, 1, 1);

        pushButtonRmCliente = new QPushButton(layoutWidget);
        pushButtonRmCliente->setObjectName(QString::fromUtf8("pushButtonRmCliente"));

        gridLayout_2->addWidget(pushButtonRmCliente, 2, 0, 1, 1);

        pushButtonLocCliente = new QPushButton(layoutWidget);
        pushButtonLocCliente->setObjectName(QString::fromUtf8("pushButtonLocCliente"));

        gridLayout_2->addWidget(pushButtonLocCliente, 3, 0, 1, 1);

        tabWidgetAdminstrador->addTab(tabCliente, QString());
        tabProduto = new QWidget();
        tabProduto->setObjectName(QString::fromUtf8("tabProduto"));
        tableWidgetProduto = new QTableWidget(tabProduto);
        if (tableWidgetProduto->columnCount() < 4)
            tableWidgetProduto->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidgetProduto->setHorizontalHeaderItem(0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidgetProduto->setHorizontalHeaderItem(1, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidgetProduto->setHorizontalHeaderItem(2, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidgetProduto->setHorizontalHeaderItem(3, __qtablewidgetitem8);
        tableWidgetProduto->setObjectName(QString::fromUtf8("tableWidgetProduto"));
        tableWidgetProduto->setGeometry(QRect(0, 0, 631, 561));
        layoutWidget1 = new QWidget(tabProduto);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(640, 0, 201, 211));
        gridLayout = new QGridLayout(layoutWidget1);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButtonAddProduto = new QPushButton(layoutWidget1);
        pushButtonAddProduto->setObjectName(QString::fromUtf8("pushButtonAddProduto"));

        gridLayout->addWidget(pushButtonAddProduto, 0, 0, 1, 1);

        pushButtonAttProduto = new QPushButton(layoutWidget1);
        pushButtonAttProduto->setObjectName(QString::fromUtf8("pushButtonAttProduto"));

        gridLayout->addWidget(pushButtonAttProduto, 1, 0, 1, 1);

        pushButtonRmProduto = new QPushButton(layoutWidget1);
        pushButtonRmProduto->setObjectName(QString::fromUtf8("pushButtonRmProduto"));

        gridLayout->addWidget(pushButtonRmProduto, 2, 0, 1, 1);

        pushButtonLocProduto = new QPushButton(layoutWidget1);
        pushButtonLocProduto->setObjectName(QString::fromUtf8("pushButtonLocProduto"));

        gridLayout->addWidget(pushButtonLocProduto, 3, 0, 1, 1);

        tabWidgetAdminstrador->addTab(tabProduto, QString());
        tabPedido = new QWidget();
        tabPedido->setObjectName(QString::fromUtf8("tabPedido"));
        gridLayout_5 = new QGridLayout(tabPedido);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        tableWidgetPedidos = new QTableWidget(tabPedido);
        if (tableWidgetPedidos->columnCount() < 5)
            tableWidgetPedidos->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidgetPedidos->setHorizontalHeaderItem(0, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidgetPedidos->setHorizontalHeaderItem(1, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidgetPedidos->setHorizontalHeaderItem(2, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidgetPedidos->setHorizontalHeaderItem(3, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidgetPedidos->setHorizontalHeaderItem(4, __qtablewidgetitem13);
        tableWidgetPedidos->setObjectName(QString::fromUtf8("tableWidgetPedidos"));

        gridLayout_5->addWidget(tableWidgetPedidos, 0, 0, 2, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        pushButtonAttPedido = new QPushButton(tabPedido);
        pushButtonAttPedido->setObjectName(QString::fromUtf8("pushButtonAttPedido"));

        gridLayout_3->addWidget(pushButtonAttPedido, 1, 0, 1, 1);

        pushButtonAddPedido = new QPushButton(tabPedido);
        pushButtonAddPedido->setObjectName(QString::fromUtf8("pushButtonAddPedido"));

        gridLayout_3->addWidget(pushButtonAddPedido, 0, 0, 1, 1);

        pushButtonRmPedido = new QPushButton(tabPedido);
        pushButtonRmPedido->setObjectName(QString::fromUtf8("pushButtonRmPedido"));

        gridLayout_3->addWidget(pushButtonRmPedido, 2, 0, 1, 1);

        pushButtonLocPedido = new QPushButton(tabPedido);
        pushButtonLocPedido->setObjectName(QString::fromUtf8("pushButtonLocPedido"));

        gridLayout_3->addWidget(pushButtonLocPedido, 3, 0, 1, 1);


        gridLayout_5->addLayout(gridLayout_3, 0, 1, 1, 1);

        tabWidgetAdminstrador->addTab(tabPedido, QString());

        gridLayout_4->addWidget(tabWidgetAdminstrador, 0, 0, 1, 1);


        retranslateUi(Admin);

        tabWidgetAdminstrador->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(Admin);
    } // setupUi

    void retranslateUi(QDialog *Admin)
    {
        Admin->setWindowTitle(QCoreApplication::translate("Admin", "Admin", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidgetCliente->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("Admin", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidgetCliente->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("Admin", "Nome", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidgetCliente->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("Admin", "Endere\303\247o", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidgetCliente->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("Admin", "Telefone", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidgetCliente->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("Admin", "CPF", nullptr));
        pushButtonAddCliente->setText(QCoreApplication::translate("Admin", "Adicionar", nullptr));
        pushButtonAttCliente->setText(QCoreApplication::translate("Admin", "Atualizar", nullptr));
        pushButtonRmCliente->setText(QCoreApplication::translate("Admin", "Remover", nullptr));
        pushButtonLocCliente->setText(QCoreApplication::translate("Admin", "Localizar", nullptr));
        tabWidgetAdminstrador->setTabText(tabWidgetAdminstrador->indexOf(tabCliente), QCoreApplication::translate("Admin", "Tab 1", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidgetProduto->horizontalHeaderItem(0);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("Admin", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidgetProduto->horizontalHeaderItem(1);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("Admin", "Descri\303\247\303\243o", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidgetProduto->horizontalHeaderItem(2);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("Admin", "Qtd", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidgetProduto->horizontalHeaderItem(3);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("Admin", "Valor", nullptr));
        pushButtonAddProduto->setText(QCoreApplication::translate("Admin", "Adicionar", nullptr));
        pushButtonAttProduto->setText(QCoreApplication::translate("Admin", "Atualizar", nullptr));
        pushButtonRmProduto->setText(QCoreApplication::translate("Admin", "Remover", nullptr));
        pushButtonLocProduto->setText(QCoreApplication::translate("Admin", "Localizar", nullptr));
        tabWidgetAdminstrador->setTabText(tabWidgetAdminstrador->indexOf(tabProduto), QCoreApplication::translate("Admin", "Tab 2", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidgetPedidos->horizontalHeaderItem(0);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("Admin", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidgetPedidos->horizontalHeaderItem(1);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("Admin", "Usu\303\241rio", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidgetPedidos->horizontalHeaderItem(2);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("Admin", "Descri\303\247\303\243o", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidgetPedidos->horizontalHeaderItem(3);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("Admin", "Qtd", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidgetPedidos->horizontalHeaderItem(4);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("Admin", "Valor", nullptr));
        pushButtonAttPedido->setText(QCoreApplication::translate("Admin", "Atualizar", nullptr));
        pushButtonAddPedido->setText(QCoreApplication::translate("Admin", "Adicionar", nullptr));
        pushButtonRmPedido->setText(QCoreApplication::translate("Admin", "Remover", nullptr));
        pushButtonLocPedido->setText(QCoreApplication::translate("Admin", "Localizar", nullptr));
        tabWidgetAdminstrador->setTabText(tabWidgetAdminstrador->indexOf(tabPedido), QCoreApplication::translate("Admin", "Page", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Admin: public Ui_Admin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_H
