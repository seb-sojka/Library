#include "checkoutwindow.h"
#include "ui_checkoutwindow.h"

checkoutWindow::checkoutWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::checkoutWindow)
{
    ui->setupUi(this);
}

checkoutWindow::~checkoutWindow()
{
    delete ui;
}
