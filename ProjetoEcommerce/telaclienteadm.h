#ifndef TELACLIENTEADM_H
#define TELACLIENTEADM_H

#include <QDialog>

namespace Ui {
class telaclienteadm;
}

class telaclienteadm : public QDialog
{
    Q_OBJECT

public:
    explicit telaclienteadm(QWidget *parent = nullptr);
    ~telaclienteadm();

private:
    Ui::telaclienteadm *ui;
};

#endif // TELACLIENTEADM_H
