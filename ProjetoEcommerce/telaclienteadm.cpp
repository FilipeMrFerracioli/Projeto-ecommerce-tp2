#include "telaclienteadm.h"
#include "ui_telaclienteadm.h"

telaclienteadm::telaclienteadm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::telaclienteadm)
{
    ui->setupUi(this);
}

telaclienteadm::~telaclienteadm()
{
    delete ui;
}

void telaclienteadm::on_pushButtonRegistrar_clicked()
{
    try {
        minhaNamespace::Adminstrador adm = minhaNamespace::Adminstrador();

        minhaNamespace::Cliente cliente = minhaNamespace::Cliente(ui->lineEditNome->text(),
                                                                  ui->lineEditEndereco->text(),
                                                                  ui->lineEditTelefone->text(),
                                                                  ui->lineEditCpf->text());

        adm.criar(cliente);

        this->close();
    } catch (QString &erro) {
        QMessageBox::information(this, "Erro", erro);
    }
}

