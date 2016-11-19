#-------------------------------------------------
#
# Project created by QtCreator 2016-11-18T11:10:32
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Library
TEMPLATE = app


SOURCES += main.cpp\
        librarymainmenu.cpp \
    bookwindow.cpp \
    checkoutwindow.cpp

HEADERS  += librarymainmenu.h \
    bookwindow.h \
    checkoutwindow.h

FORMS    += librarymainmenu.ui \
    bookwindow.ui \
    checkoutwindow.ui
