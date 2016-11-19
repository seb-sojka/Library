/********************************************************************************
** Form generated from reading UI file 'checkoutwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHECKOUTWINDOW_H
#define UI_CHECKOUTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_checkoutWindow
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *memberLabel;
    QLabel *bookLabel;
    QVBoxLayout *verticalLayout;
    QLineEdit *memberText;
    QLineEdit *bookText;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *okayButton;
    QPushButton *cancelButton;

    void setupUi(QDialog *checkoutWindow)
    {
        if (checkoutWindow->objectName().isEmpty())
            checkoutWindow->setObjectName(QStringLiteral("checkoutWindow"));
        checkoutWindow->resize(400, 300);
        widget = new QWidget(checkoutWindow);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(30, 50, 326, 115));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        memberLabel = new QLabel(widget);
        memberLabel->setObjectName(QStringLiteral("memberLabel"));
        QFont font;
        font.setPointSize(12);
        memberLabel->setFont(font);

        verticalLayout_2->addWidget(memberLabel);

        bookLabel = new QLabel(widget);
        bookLabel->setObjectName(QStringLiteral("bookLabel"));
        bookLabel->setFont(font);

        verticalLayout_2->addWidget(bookLabel);


        horizontalLayout_2->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        memberText = new QLineEdit(widget);
        memberText->setObjectName(QStringLiteral("memberText"));
        memberText->setFont(font);

        verticalLayout->addWidget(memberText);

        bookText = new QLineEdit(widget);
        bookText->setObjectName(QStringLiteral("bookText"));
        bookText->setFont(font);

        verticalLayout->addWidget(bookText);


        horizontalLayout_2->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        okayButton = new QPushButton(widget);
        okayButton->setObjectName(QStringLiteral("okayButton"));
        okayButton->setFont(font);

        horizontalLayout->addWidget(okayButton);

        cancelButton = new QPushButton(widget);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        cancelButton->setFont(font);

        horizontalLayout->addWidget(cancelButton);


        verticalLayout_3->addLayout(horizontalLayout);


        retranslateUi(checkoutWindow);

        QMetaObject::connectSlotsByName(checkoutWindow);
    } // setupUi

    void retranslateUi(QDialog *checkoutWindow)
    {
        checkoutWindow->setWindowTitle(QApplication::translate("checkoutWindow", "Dialog", 0));
        memberLabel->setText(QApplication::translate("checkoutWindow", "Member ID:", 0));
        bookLabel->setText(QApplication::translate("checkoutWindow", "Book ID:", 0));
        okayButton->setText(QApplication::translate("checkoutWindow", "Okay", 0));
        cancelButton->setText(QApplication::translate("checkoutWindow", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class checkoutWindow: public Ui_checkoutWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHECKOUTWINDOW_H
