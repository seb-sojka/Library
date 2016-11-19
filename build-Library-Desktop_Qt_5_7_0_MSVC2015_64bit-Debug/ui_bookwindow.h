/********************************************************************************
** Form generated from reading UI file 'bookwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOOKWINDOW_H
#define UI_BOOKWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_bookWindow
{
public:
    QVBoxLayout *verticalLayout;
    QPushButton *buttonCheckout;
    QPushButton *buttonRequestBook;
    QPushButton *buttonReturn;
    QPushButton *buttonAddBook;
    QPushButton *buttonRemoveBook;
    QPushButton *buttonExit;

    void setupUi(QDialog *bookWindow)
    {
        if (bookWindow->objectName().isEmpty())
            bookWindow->setObjectName(QStringLiteral("bookWindow"));
        bookWindow->resize(400, 300);
        verticalLayout = new QVBoxLayout(bookWindow);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        buttonCheckout = new QPushButton(bookWindow);
        buttonCheckout->setObjectName(QStringLiteral("buttonCheckout"));

        verticalLayout->addWidget(buttonCheckout);

        buttonRequestBook = new QPushButton(bookWindow);
        buttonRequestBook->setObjectName(QStringLiteral("buttonRequestBook"));

        verticalLayout->addWidget(buttonRequestBook);

        buttonReturn = new QPushButton(bookWindow);
        buttonReturn->setObjectName(QStringLiteral("buttonReturn"));

        verticalLayout->addWidget(buttonReturn);

        buttonAddBook = new QPushButton(bookWindow);
        buttonAddBook->setObjectName(QStringLiteral("buttonAddBook"));

        verticalLayout->addWidget(buttonAddBook);

        buttonRemoveBook = new QPushButton(bookWindow);
        buttonRemoveBook->setObjectName(QStringLiteral("buttonRemoveBook"));

        verticalLayout->addWidget(buttonRemoveBook);

        buttonExit = new QPushButton(bookWindow);
        buttonExit->setObjectName(QStringLiteral("buttonExit"));

        verticalLayout->addWidget(buttonExit);


        retranslateUi(bookWindow);

        QMetaObject::connectSlotsByName(bookWindow);
    } // setupUi

    void retranslateUi(QDialog *bookWindow)
    {
        bookWindow->setWindowTitle(QApplication::translate("bookWindow", "Dialog", 0));
        buttonCheckout->setText(QApplication::translate("bookWindow", "Checkout Book", 0));
        buttonRequestBook->setText(QApplication::translate("bookWindow", "Request Book", 0));
        buttonReturn->setText(QApplication::translate("bookWindow", "Return Book", 0));
        buttonAddBook->setText(QApplication::translate("bookWindow", "Add Book", 0));
        buttonRemoveBook->setText(QApplication::translate("bookWindow", "Remove Book", 0));
        buttonExit->setText(QApplication::translate("bookWindow", "Exit", 0));
    } // retranslateUi

};

namespace Ui {
    class bookWindow: public Ui_bookWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOKWINDOW_H
