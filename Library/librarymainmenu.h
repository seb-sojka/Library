#ifndef LIBRARYMAINMENU_H
#define LIBRARYMAINMENU_H

#include <QMainWindow>

namespace Ui {
class libraryMainMenu;
}

class libraryMainMenu : public QMainWindow
{
    Q_OBJECT

public:
    explicit libraryMainMenu(QWidget *parent = 0);
    ~libraryMainMenu();

private slots:
    void on_buttonExit_clicked();

    void on_actionExit_triggered();

private:
    Ui::libraryMainMenu *ui;
};

#endif // LIBRARYMAINMENU_H
