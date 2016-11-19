#ifndef BOOKWINDOW_H
#define BOOKWINDOW_H

#include <QDialog>

namespace Ui {
class bookWindow;
}

class bookWindow : public QDialog
{
    Q_OBJECT

public:
    explicit bookWindow(QWidget *parent = 0);
    ~bookWindow();

private slots:
    void on_buttonCheckout_clicked();

private:
    Ui::bookWindow *ui;
};

#endif // BOOKWINDOW_H
