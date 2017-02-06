#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    ui->lineEdit->setValidator(new QIntValidator(0,99,this));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::slotEditChanged(QString s)
{
    int n;
    n = s.toInt();
    emit(signalEditChanged(n));
}
