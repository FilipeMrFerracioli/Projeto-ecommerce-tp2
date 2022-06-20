/********************************************************************************
** Form generated from reading UI file 'atualizar_cliente.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ATUALIZAR_CLIENTE_H
#define UI_ATUALIZAR_CLIENTE_H

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

class Ui_atualizar_cliente
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
    QLineEdit *lineEditNome;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QLineEdit *lineEditEndereco;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *lineEditTelefone;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QLineEdit *lineEditCpf;
    QPushButton *pushButtonAtualizar;

    void setupUi(QDialog *atualizar_cliente)
    {
        if (atualizar_cliente->objectName().isEmpty())
            atualizar_cliente->setObjectName(QString::fromUtf8("atualizar_cliente"));
        atualizar_cliente->resize(318, 240);
        gridLayout = new QGridLayout(atualizar_cliente);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_5 = new QLabel(atualizar_cliente);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_5->addWidget(label_5);

        lineEditID = new QLineEdit(atualizar_cliente);
        lineEditID->setObjectName(QString::fromUtf8("lineEditID"));

        horizontalLayout_5->addWidget(lineEditID);


        horizontalLayout_6->addLayout(horizontalLayout_5);

        pushButtonBuscar = new QPushButton(atualizar_cliente);
        pushButtonBuscar->setObjectName(QString::fromUtf8("pushButtonBuscar"));

        horizontalLayout_6->addWidget(pushButtonBuscar);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label = new QLabel(atualizar_cliente);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_3->addWidget(label);

        lineEditNome = new QLineEdit(atualizar_cliente);
        lineEditNome->setObjectName(QString::fromUtf8("lineEditNome"));

        horizontalLayout_3->addWidget(lineEditNome);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_2 = new QLabel(atualizar_cliente);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_4->addWidget(label_2);

        lineEditEndereco = new QLineEdit(atualizar_cliente);
        lineEditEndereco->setObjectName(QString::fromUtf8("lineEditEndereco"));

        horizontalLayout_4->addWidget(lineEditEndereco);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(atualizar_cliente);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        lineEditTelefone = new QLineEdit(atualizar_cliente);
        lineEditTelefone->setObjectName(QString::fromUtf8("lineEditTelefone"));

        horizontalLayout_2->addWidget(lineEditTelefone);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_4 = new QLabel(atualizar_cliente);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout->addWidget(label_4);

        lineEditCpf = new QLineEdit(atualizar_cliente);
        lineEditCpf->setObjectName(QString::fromUtf8("lineEditCpf"));

        horizontalLayout->addWidget(lineEditCpf);


        verticalLayout->addLayout(horizontalLayout);

        pushButtonAtualizar = new QPushButton(atualizar_cliente);
        pushButtonAtualizar->setObjectName(QString::fromUtf8("pushButtonAtualizar"));

        verticalLayout->addWidget(pushButtonAtualizar);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(atualizar_cliente);

        QMetaObject::connectSlotsByName(atualizar_cliente);
    } // setupUi

    void retranslateUi(QDialog *atualizar_cliente)
    {
        atualizar_cliente->setWindowTitle(QCoreApplication::translate("atualizar_cliente", "Atualizar cliente", nullptr));
        label_5->setText(QCoreApplication::translate("atualizar_cliente", "<html><head/><body><p><span style=\" font-size:12pt;\">ID:</span></p></body></html>", nullptr));
        pushButtonBuscar->setText(QCoreApplication::translate("atualizar_cliente", "Buscar", nullptr));
        label->setText(QCoreApplication::translate("atualizar_cliente", "<html><head/><body><p><span style=\" font-size:12pt;\">Nome</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("atualizar_cliente", "<html><head/><body><p><span style=\" font-size:12pt;\">Endere\303\247o</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("atualizar_cliente", "<html><head/><body><p><span style=\" font-size:12pt;\">Telefone</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("atualizar_cliente", "<html><head/><body><p><span style=\" font-size:12pt;\">CPF</span></p></body></html>", nullptr));
        pushButtonAtualizar->setText(QCoreApplication::translate("atualizar_cliente", "Registrar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class atualizar_cliente: public Ui_atualizar_cliente {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ATUALIZAR_CLIENTE_H
