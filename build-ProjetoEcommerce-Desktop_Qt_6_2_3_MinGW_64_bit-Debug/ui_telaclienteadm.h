/********************************************************************************
** Form generated from reading UI file 'telaclienteadm.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TELACLIENTEADM_H
#define UI_TELACLIENTEADM_H

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

class Ui_telaclienteadm
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
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
    QPushButton *pushButtonRegistrar;

    void setupUi(QDialog *telaclienteadm)
    {
        if (telaclienteadm->objectName().isEmpty())
            telaclienteadm->setObjectName(QString::fromUtf8("telaclienteadm"));
        telaclienteadm->resize(268, 201);
        gridLayout = new QGridLayout(telaclienteadm);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label = new QLabel(telaclienteadm);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_3->addWidget(label);

        lineEditNome = new QLineEdit(telaclienteadm);
        lineEditNome->setObjectName(QString::fromUtf8("lineEditNome"));

        horizontalLayout_3->addWidget(lineEditNome);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_2 = new QLabel(telaclienteadm);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_4->addWidget(label_2);

        lineEditEndereco = new QLineEdit(telaclienteadm);
        lineEditEndereco->setObjectName(QString::fromUtf8("lineEditEndereco"));

        horizontalLayout_4->addWidget(lineEditEndereco);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(telaclienteadm);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        lineEditTelefone = new QLineEdit(telaclienteadm);
        lineEditTelefone->setObjectName(QString::fromUtf8("lineEditTelefone"));

        horizontalLayout_2->addWidget(lineEditTelefone);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_4 = new QLabel(telaclienteadm);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout->addWidget(label_4);

        lineEditCpf = new QLineEdit(telaclienteadm);
        lineEditCpf->setObjectName(QString::fromUtf8("lineEditCpf"));

        horizontalLayout->addWidget(lineEditCpf);


        verticalLayout->addLayout(horizontalLayout);

        pushButtonRegistrar = new QPushButton(telaclienteadm);
        pushButtonRegistrar->setObjectName(QString::fromUtf8("pushButtonRegistrar"));

        verticalLayout->addWidget(pushButtonRegistrar);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(telaclienteadm);

        QMetaObject::connectSlotsByName(telaclienteadm);
    } // setupUi

    void retranslateUi(QDialog *telaclienteadm)
    {
        telaclienteadm->setWindowTitle(QCoreApplication::translate("telaclienteadm", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("telaclienteadm", "<html><head/><body><p><span style=\" font-size:12pt;\">Nome</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("telaclienteadm", "<html><head/><body><p><span style=\" font-size:12pt;\">Endere\303\247o</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("telaclienteadm", "<html><head/><body><p><span style=\" font-size:12pt;\">Telefone</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("telaclienteadm", "<html><head/><body><p><span style=\" font-size:12pt;\">CPF</span></p></body></html>", nullptr));
        pushButtonRegistrar->setText(QCoreApplication::translate("telaclienteadm", "Registrar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class telaclienteadm: public Ui_telaclienteadm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELACLIENTEADM_H
