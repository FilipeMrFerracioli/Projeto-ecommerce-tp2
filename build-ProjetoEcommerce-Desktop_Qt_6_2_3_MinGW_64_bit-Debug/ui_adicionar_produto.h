/********************************************************************************
** Form generated from reading UI file 'adicionar_produto.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADICIONAR_PRODUTO_H
#define UI_ADICIONAR_PRODUTO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_adicionar_produto
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLineEdit *lineEditDescricao;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QLineEdit *lineEditQuantidade;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *lineEditPreco;
    QPushButton *pushButtonRegistrar;

    void setupUi(QDialog *adicionar_produto)
    {
        if (adicionar_produto->objectName().isEmpty())
            adicionar_produto->setObjectName(QString::fromUtf8("adicionar_produto"));
        adicionar_produto->resize(267, 198);
        gridLayout = new QGridLayout(adicionar_produto);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label = new QLabel(adicionar_produto);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_3->addWidget(label);

        lineEditDescricao = new QLineEdit(adicionar_produto);
        lineEditDescricao->setObjectName(QString::fromUtf8("lineEditDescricao"));

        horizontalLayout_3->addWidget(lineEditDescricao);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_2 = new QLabel(adicionar_produto);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_4->addWidget(label_2);

        lineEditQuantidade = new QLineEdit(adicionar_produto);
        lineEditQuantidade->setObjectName(QString::fromUtf8("lineEditQuantidade"));

        horizontalLayout_4->addWidget(lineEditQuantidade);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(adicionar_produto);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        lineEditPreco = new QLineEdit(adicionar_produto);
        lineEditPreco->setObjectName(QString::fromUtf8("lineEditPreco"));

        horizontalLayout_2->addWidget(lineEditPreco);


        verticalLayout->addLayout(horizontalLayout_2);

        pushButtonRegistrar = new QPushButton(adicionar_produto);
        pushButtonRegistrar->setObjectName(QString::fromUtf8("pushButtonRegistrar"));

        verticalLayout->addWidget(pushButtonRegistrar);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(adicionar_produto);

        QMetaObject::connectSlotsByName(adicionar_produto);
    } // setupUi

    void retranslateUi(QDialog *adicionar_produto)
    {
        adicionar_produto->setWindowTitle(QCoreApplication::translate("adicionar_produto", "Adicionar produto", nullptr));
        label->setText(QCoreApplication::translate("adicionar_produto", "<html><head/><body><p><span style=\" font-size:12pt;\">Descri\303\247\303\243o</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("adicionar_produto", "<html><head/><body><p><span style=\" font-size:12pt;\">Quantidade</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("adicionar_produto", "<html><head/><body><p><span style=\" font-size:12pt;\">Pre\303\247o (un)</span></p></body></html>", nullptr));
        pushButtonRegistrar->setText(QCoreApplication::translate("adicionar_produto", "Registrar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class adicionar_produto: public Ui_adicionar_produto {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADICIONAR_PRODUTO_H
