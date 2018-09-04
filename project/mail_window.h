#ifndef MAIL_WINDOW_H
#define MAIL_WINDOW_H
#include "compose.h"
#include <QMainWindow>

namespace Ui {
class mail_window;
}

class mail_window : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit mail_window(QWidget *parent = 0);
    ~mail_window();
    
private slots:
    void on_compose_pushButton_clicked();

private:
    Ui::mail_window *ui;
    compose *Compose;
};

#endif // MAIL_WINDOW_H
