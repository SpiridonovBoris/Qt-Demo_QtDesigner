#-------------------------------------------------
#
# Project created by QtCreator 2016-01-28T13:06:15
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Designer
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    mypicture.cpp

HEADERS  += mainwindow.h \
    mypicture.h

TRANSLATIONS += Spyder_ru.ts

FORMS    += mainwindow.ui

RESOURCES += \
    myimages.qrc


