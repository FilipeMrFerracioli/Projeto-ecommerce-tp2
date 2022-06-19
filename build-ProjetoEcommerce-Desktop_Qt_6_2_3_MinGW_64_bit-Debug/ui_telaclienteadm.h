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

QT_BEGIN_NAMESPACE

class Ui_telaclienteadm
{
public:

    void setupUi(QDialog *telaclienteadm)
    {
        if (telaclienteadm->objectName().isEmpty())
            telaclienteadm->setObjectName(QString::fromUtf8("telaclienteadm"));
        telaclienteadm->resize(400, 300);

        retranslateUi(telaclienteadm);

        QMetaObject::connectSlotsByName(telaclienteadm);
    } // setupUi

    void retranslateUi(QDialog *telaclienteadm)
    {
        telaclienteadm->setWindowTitle(QCoreApplication::translate("telaclienteadm", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class telaclienteadm: public Ui_telaclienteadm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TELACLIENTEADM_H
