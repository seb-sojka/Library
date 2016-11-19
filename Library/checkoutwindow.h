#ifndef CHECKOUTWINDOW_H
#define CHECKOUTWINDOW_H

#include <QDialog>

namespace Ui {
class checkoutWindow;
}

class checkoutWindow : public QDialog
{
    Q_OBJECT

public:
    explicit checkoutWindow(QWidget *parent = 0);
    ~checkoutWindow();

private:
    Ui::checkoutWindow *ui;
};

#endif // CHECKOUTWINDOW_H
