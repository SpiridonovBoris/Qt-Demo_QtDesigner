/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "mypicture.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QSpinBox *spinBox;
    QLabel *SpinBuddy;
    QHBoxLayout *horizontalLayout_3;
    QSlider *horizontalSlider;
    QLabel *SliderBuddy;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEdit;
    QLabel *EditBuddy;
    QPushButton *buttonExit;
    MyPicture *widget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(300, 300);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Images/Images/cursor1.cur"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        spinBox = new QSpinBox(centralWidget);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setMaximumSize(QSize(50, 16777215));
        spinBox->setMaximum(100);

        horizontalLayout->addWidget(spinBox);

        SpinBuddy = new QLabel(centralWidget);
        SpinBuddy->setObjectName(QStringLiteral("SpinBuddy"));
        SpinBuddy->setFrameShape(QFrame::Box);

        horizontalLayout->addWidget(SpinBuddy);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSlider = new QSlider(centralWidget);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setMaximum(100);
        horizontalSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(horizontalSlider);

        SliderBuddy = new QLabel(centralWidget);
        SliderBuddy->setObjectName(QStringLiteral("SliderBuddy"));
        SliderBuddy->setMouseTracking(false);
        SliderBuddy->setFrameShape(QFrame::Box);

        horizontalLayout_3->addWidget(SliderBuddy);


        gridLayout->addLayout(horizontalLayout_3, 2, 0, 1, 2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setMaximumSize(QSize(30, 16777215));

        horizontalLayout_2->addWidget(lineEdit);

        EditBuddy = new QLabel(centralWidget);
        EditBuddy->setObjectName(QStringLiteral("EditBuddy"));
        EditBuddy->setFrameShape(QFrame::Box);

        horizontalLayout_2->addWidget(EditBuddy);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        buttonExit = new QPushButton(centralWidget);
        buttonExit->setObjectName(QStringLiteral("buttonExit"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Images/Images/Disney_42.png"), QSize(), QIcon::Normal, QIcon::Off);
        buttonExit->setIcon(icon1);

        gridLayout->addWidget(buttonExit, 0, 1, 1, 1);

        widget = new MyPicture(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setMaximumSize(QSize(300, 300));

        gridLayout->addWidget(widget, 3, 0, 1, 2);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 300, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
#ifndef QT_NO_SHORTCUT
        SpinBuddy->setBuddy(spinBox);
        SliderBuddy->setBuddy(horizontalSlider);
        EditBuddy->setBuddy(lineEdit);
#endif // QT_NO_SHORTCUT

        retranslateUi(MainWindow);
        QObject::connect(spinBox, SIGNAL(valueChanged(int)), horizontalSlider, SLOT(setValue(int)));
        QObject::connect(horizontalSlider, SIGNAL(valueChanged(int)), spinBox, SLOT(setValue(int)));
        QObject::connect(buttonExit, SIGNAL(released()), MainWindow, SLOT(close()));
        QObject::connect(lineEdit, SIGNAL(textChanged(QString)), MainWindow, SLOT(slotEditChanged(QString)));
        QObject::connect(spinBox, SIGNAL(valueChanged(QString)), lineEdit, SLOT(setText(QString)));
        QObject::connect(MainWindow, SIGNAL(signalEditChanged(int)), spinBox, SLOT(setValue(int)));
        QObject::connect(horizontalSlider, SIGNAL(valueChanged(int)), widget, SLOT(scaleChanged(int)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Lab3", 0));
        SpinBuddy->setText(QApplication::translate("MainWindow", "&SpinBuddy", 0));
        SliderBuddy->setText(QApplication::translate("MainWindow", "S&liderBuddy", 0));
        EditBuddy->setText(QApplication::translate("MainWindow", "&EditBuddy", 0));
        buttonExit->setText(QApplication::translate("MainWindow", "Exit", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
