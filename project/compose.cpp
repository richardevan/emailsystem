#include "compose.h"
#include "ui_compose.h"
#include <QFontDialog>
#include <QFont>

compose::compose(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::compose)
{
    ui->setupUi(this);
}

compose::~compose()
{
    delete ui;
}

void compose::on_actionCopy_triggered()
{
    ui->textEdit->copy();
}

void compose::on_actionPaste_triggered()
{
    ui->textEdit->paste();
}

void compose::on_actionCut_triggered()
{
    ui->textEdit->cut();
}

void compose::on_actionRedo_triggered()
{
    ui->textEdit->redo();
}

void compose::on_actionUndo_triggered()
{
    ui->textEdit->undo();
}

void compose::on_actionFont_triggered()
{
    bool ok;
    QFont font = QFontDialog::getFont(&ok, this);
    if (ok){
        ui->textEdit->setFont(font);
    }
    else return;
}
