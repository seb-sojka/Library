#include "librarymainmenu.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    libraryMainMenu w;
    w.show();

    return a.exec();
}
