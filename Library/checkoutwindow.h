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

private slots:
    void on_okayButton_clicked();

    void on_cancelButton_clicked();

private:
    Ui::checkoutWindow *ui;
};

#endif // CHECKOUTWINDOW_H
