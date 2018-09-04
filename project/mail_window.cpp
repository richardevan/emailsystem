#include "mail_window.h"
#include "ui_mail_window.h"
#include "compose.h"

mail_window::mail_window(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::mail_window)
{
    ui->setupUi(this);
}

mail_window::~mail_window()
{
    delete ui;
}

void mail_window::on_compose_pushButton_clicked()
{
    Compose = new compose(this);
    Compose->show();
}
