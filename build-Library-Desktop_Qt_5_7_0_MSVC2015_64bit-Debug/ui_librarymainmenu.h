/********************************************************************************
** Form generated from reading UI file 'librarymainmenu.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LIBRARYMAINMENU_H
#define UI_LIBRARYMAINMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_libraryMainMenu
{
public:
    QAction *actionExit;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QPushButton *buttonExit;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *libraryMainMenu)
    {
        if (libraryMainMenu->objectName().isEmpty())
            libraryMainMenu->setObjectName(QStringLiteral("libraryMainMenu"));
        libraryMainMenu->resize(400, 300);
        actionExit = new QAction(libraryMainMenu);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        centralWidget = new QWidget(libraryMainMenu);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        verticalLayout->addWidget(pushButton_3);

        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        buttonExit = new QPushButton(centralWidget);
        buttonExit->setObjectName(QStringLiteral("buttonExit"));

        verticalLayout->addWidget(buttonExit);

        libraryMainMenu->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(libraryMainMenu);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        libraryMainMenu->setMenuBar(menuBar);
        mainToolBar = new QToolBar(libraryMainMenu);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        libraryMainMenu->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(libraryMainMenu);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        libraryMainMenu->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuFile->addAction(actionExit);

        retranslateUi(libraryMainMenu);

        QMetaObject::connectSlotsByName(libraryMainMenu);
    } // setupUi

    void retranslateUi(QMainWindow *libraryMainMenu)
    {
        libraryMainMenu->setWindowTitle(QApplication::translate("libraryMainMenu", "libraryMainMenu", 0));
        actionExit->setText(QApplication::translate("libraryMainMenu", "Exit", 0));
        pushButton_3->setText(QApplication::translate("libraryMainMenu", "Books", 0));
        pushButton_2->setText(QApplication::translate("libraryMainMenu", "Members", 0));
        buttonExit->setText(QApplication::translate("libraryMainMenu", "Exit", 0));
        menuFile->setTitle(QApplication::translate("libraryMainMenu", "File", 0));
    } // retranslateUi

};

namespace Ui {
    class libraryMainMenu: public Ui_libraryMainMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIBRARYMAINMENU_H
