#include "signup.h"
#include "ui_signup.h"
#include "login.h"
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
    QString email_add = ui->email_lineEdit->text();
    QString pswd = ui->password_lineEdit->text();
    QString confirm_pswd = ui->confirm_lineEdit->text();
    QString phone_number = ui->phone_lineEdit->text();

   if(fullname=="" && email_add=="" && pswd=="")
    {
        QMessageBox::information(this,"SignUp","Fill all the requirements with * on it");
    }
   else if(email_add=="" && pswd=="")
   {
       QMessageBox::information(this,"SignUp","Fill all the requirements with * on it");
   }
   else if(fullname=="" && pswd=="")
   {
       QMessageBox::information(this,"SignUp","Fill all the requirements with * on it");
   }
   else if(fullname=="")
   {
       QMessageBox::information(this,"SignUp","Fill all the requirements with * on it");
   }
   else if(email_add=="")
   {
       QMessageBox::information(this,"SignUp","Fill all the requirements with * on it");
   }
   else if(pswd=="")
   {
       QMessageBox::information(this,"SignUp","Fill all the requirements with * on it");
   }
    else if(confirm_pswd.compare(pswd))
   {
       QMessageBox::information(this,"SignUp","Password not the same");
   }
   else
   {
       QMessageBox::information(this,"SignUp","Account created");
   }
}
