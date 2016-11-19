#include "bookwindow.h"
#include "ui_bookwindow.h"
#include "checkoutwindow.h"

bookWindow::bookWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::bookWindow)
{
    ui->setupUi(this);
}

bookWindow::~bookWindow()
{
    delete ui;
}

void bookWindow::on_buttonCheckout_clicked()
{
    checkoutWindow checkoutWin;
    checkoutWin.setModal(true);
    checkoutWin.exec();
}
