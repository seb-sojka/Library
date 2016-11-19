#include "librarymainmenu.h"
#include "ui_librarymainmenu.h"
#include "bookwindow.h"

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

void libraryMainMenu::on_pushButton_3_clicked()
{
    this->hide();
    bookWindow booksWin;
    booksWin.setModal(true);
    booksWin.exec();
    this->show();
}
