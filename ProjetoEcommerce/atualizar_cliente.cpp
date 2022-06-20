#include "atualizar_cliente.h"
#include "ui_atualizar_cliente.h"

atualizar_cliente::atualizar_cliente(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::atualizar_cliente)
{
    ui->setupUi(this);
    //    ui->lineEditID->setEnabled(false);
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
//        QStringList listaCliente = adm.consultar(ui->lineEditID->text()).split("\n");
        throw adm.consultar(ui->lineEditID->text());

        //        minhaNamespace::Cliente cliente = minhaNamespace::Cliente();

        ui->lineEditNome->setEnabled(false);
        ui->lineEditEndereco->setEnabled(false);
        ui->lineEditTelefone->setEnabled(false);
        ui->pushButtonAtualizar->setEnabled(false);

        //        cliente.setNome(ui->lineEditNome->text());
        //        cliente.setEndereco(ui->lineEditEndereco->text());
        //        cliente.setTelefone(ui->lineEditTelefone->text());

        /*ui->lineEditID->setText(listaCliente[0]);
        ui->lineEditNome->setText(listaCliente[1]);
        ui->lineEditEndereco->setText(listaCliente[2]);
        ui->lineEditTelefone->setText(listaCliente[3]);
        ui->lineEditCpf->setText(listaCliente[4]);*/

        //        this->close();
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
