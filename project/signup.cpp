#include "signup.h"
#include "ui_signup.h"
#include <QMessageBox>

signup::signup(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::signup)
{
    ui->setupUi(this);
}

signup::~signup()
{
    delete ui;
}

void signup::on_pushButton_2_clicked()
{
    close();
}

void signup::on_pushButton_clicked()
{
    QString fullname = ui->name_lineEdit->text();
    QString pswd = ui->password->text();
    QString confirm_pswd = ui->password_lineEdit->text();
    QString phone_number = ui->phone_lineEdit->text();

   /*if()
    {
        QMessageBox::information(this,"SignUp","Fill all the requirements with * symbol");
    }
    else
    {
        QMessageBox::information(this,"SignUp","Account created")
    }*/
}
