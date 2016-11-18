#include "bookwindow.h"
#include "ui_bookwindow.h"

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
