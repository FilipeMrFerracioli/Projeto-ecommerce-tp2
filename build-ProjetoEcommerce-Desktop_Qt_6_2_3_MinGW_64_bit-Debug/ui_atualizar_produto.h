/********************************************************************************
** Form generated from reading UI file 'atualizar_produto.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ATUALIZAR_PRODUTO_H
#define UI_ATUALIZAR_PRODUTO_H

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

class Ui_atualizar_produto
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_6;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *lineEditID;
    QPushButton *pushButtonBuscar;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLineEdit *lineEditDescricao;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QLineEdit *lineEditQuantidade;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *lineEditPreco;
    QPushButton *pushButtonAtualizar;

    void setupUi(QDialog *atualizar_produto)
    {
        if (atualizar_produto->objectName().isEmpty())
            atualizar_produto->setObjectName(QString::fromUtf8("atualizar_produto"));
        atualizar_produto->resize(330, 252);
        gridLayout = new QGridLayout(atualizar_produto);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_5 = new QLabel(atualizar_produto);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_5->addWidget(label_5);

        lineEditID = new QLineEdit(atualizar_produto);
        lineEditID->setObjectName(QString::fromUtf8("lineEditID"));

        horizontalLayout_5->addWidget(lineEditID);


        horizontalLayout_6->addLayout(horizontalLayout_5);

        pushButtonBuscar = new QPushButton(atualizar_produto);
        pushButtonBuscar->setObjectName(QString::fromUtf8("pushButtonBuscar"));

        horizontalLayout_6->addWidget(pushButtonBuscar);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label = new QLabel(atualizar_produto);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_3->addWidget(label);

        lineEditDescricao = new QLineEdit(atualizar_produto);
        lineEditDescricao->setObjectName(QString::fromUtf8("lineEditDescricao"));

        horizontalLayout_3->addWidget(lineEditDescricao);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_2 = new QLabel(atualizar_produto);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_4->addWidget(label_2);

        lineEditQuantidade = new QLineEdit(atualizar_produto);
        lineEditQuantidade->setObjectName(QString::fromUtf8("lineEditQuantidade"));

        horizontalLayout_4->addWidget(lineEditQuantidade);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(atualizar_produto);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        lineEditPreco = new QLineEdit(atualizar_produto);
        lineEditPreco->setObjectName(QString::fromUtf8("lineEditPreco"));

        horizontalLayout_2->addWidget(lineEditPreco);


        verticalLayout->addLayout(horizontalLayout_2);

        pushButtonAtualizar = new QPushButton(atualizar_produto);
        pushButtonAtualizar->setObjectName(QString::fromUtf8("pushButtonAtualizar"));

        verticalLayout->addWidget(pushButtonAtualizar);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(atualizar_produto);

        QMetaObject::connectSlotsByName(atualizar_produto);
    } // setupUi

    void retranslateUi(QDialog *atualizar_produto)
    {
        atualizar_produto->setWindowTitle(QCoreApplication::translate("atualizar_produto", "Dialog", nullptr));
        label_5->setText(QCoreApplication::translate("atualizar_produto", "<html><head/><body><p><span style=\" font-size:12pt;\">ID:</span></p></body></html>", nullptr));
        pushButtonBuscar->setText(QCoreApplication::translate("atualizar_produto", "Buscar", nullptr));
        label->setText(QCoreApplication::translate("atualizar_produto", "<html><head/><body><p><span style=\" font-size:12pt;\">Descri\303\247\303\243o</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("atualizar_produto", "<html><head/><body><p><span style=\" font-size:12pt;\">Quantidade</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("atualizar_produto", "<html><head/><body><p><span style=\" font-size:12pt;\">Pre\303\247o</span></p></body></html>", nullptr));
        pushButtonAtualizar->setText(QCoreApplication::translate("atualizar_produto", "Atualizar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class atualizar_produto: public Ui_atualizar_produto {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ATUALIZAR_PRODUTO_H
