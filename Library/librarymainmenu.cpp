#include "librarymainmenu.h"
#include "ui_librarymainmenu.h"

libraryMainMenu::libraryMainMenu(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::libraryMainMenu)
{
    ui->setupUi(this);
}

libraryMainMenu::~libraryMainMenu()
{
    delete ui;
}

//Closes appilcation
void libraryMainMenu::on_buttonExit_clicked()
{
    this->close();
}

//Closes appilcation
void libraryMainMenu::on_actionExit_triggered()
{
    this->close();
}
