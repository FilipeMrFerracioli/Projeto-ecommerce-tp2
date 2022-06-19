/********************************************************************************
** Form generated from reading UI file 'cliente.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENTE_H
#define UI_CLIENTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_Cliente
{
public:

    void setupUi(QDialog *Cliente)
    {
        if (Cliente->objectName().isEmpty())
            Cliente->setObjectName(QString::fromUtf8("Cliente"));
        Cliente->resize(400, 300);

        retranslateUi(Cliente);

        QMetaObject::connectSlotsByName(Cliente);
    } // setupUi

    void retranslateUi(QDialog *Cliente)
    {
        Cliente->setWindowTitle(QCoreApplication::translate("Cliente", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Cliente: public Ui_Cliente {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTE_H
