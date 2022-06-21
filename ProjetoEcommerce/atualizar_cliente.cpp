#include "atualizar_cliente.h"
#include "ui_atualizar_cliente.h"

atualizar_cliente::atualizar_cliente(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::atualizar_cliente)
{
    ui->setupUi(this);
    ui->lineEditNome->setEnabled(false);
    ui->lineEditEndereco->setEnabled(false);
    ui->lineEditTelefone->setEnabled(false);
    ui->lineEditCpf->setEnabled(false);
    ui->pushButtonAtualizar->setEnabled(false);
}

atualizar_cliente::~atualizar_cliente()
{
    delete ui;
}

void atualizar_cliente::on_pushButtonBuscar_clicked()
{
    try {
        minhaNamespace::Cliente cli = minhaNamespace::Cliente();
        cli.setCpf(ui->lineEditID->text());
        QStringList listaCliente = adm.consultar(cli, true).split(";");

        ui->lineEditID->setText(listaCliente[0]);
        ui->lineEditNome->setText(listaCliente[1]);
        ui->lineEditEndereco->setText(listaCliente[2]);
        ui->lineEditTelefone->setText(listaCliente[3]);
        ui->lineEditCpf->setText(listaCliente[4]);

        ui->lineEditNome->setEnabled(true);
        ui->lineEditEndereco->setEnabled(true);
        ui->lineEditTelefone->setEnabled(true);
        ui->pushButtonAtualizar->setEnabled(true);
    }  catch (QString &erro) {
        QMessageBox::information(this, "Erro", erro);
    }
}

void atualizar_cliente::on_pushButtonAtualizar_clicked()
{
    try {
        minhaNamespace::Cliente clienteAtt = minhaNamespace::Cliente();

        clienteAtt.setNome(ui->lineEditNome->text());
        clienteAtt.setEndereco(ui->lineEditEndereco->text());
        clienteAtt.setTelefone(ui->lineEditTelefone->text());
        clienteAtt.setCpf(ui->lineEditCpf->text());

        adm.atualizar(clienteAtt);

        this->close();
    }  catch (QString &erro) {
        QMessageBox::information(this, "Erro", erro);
    }
}
