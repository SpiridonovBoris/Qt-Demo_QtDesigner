
#include "mypicture.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"

MyPicture::MyPicture(QWidget * parent)
    : QWidget(parent)
{
    bool b=pixmap->load(":/Images/Images/img002.jpg");
    scale = 100;
}

void MyPicture::paintEvent(QPaintEvent *event)
{
    //width
    int maxW = this->width() > pixmap->width() ? this->geometry().width() :  pixmap->width();
    //Height
    int maxH = this->height() > pixmap->height() ? this->geometry().height() :  pixmap->height();
    int maxDim = maxW > maxH ? this->width() : this->height();


    QPainter painter(this);

    QPixmap tmp = pixmap->scaled(this->width()* scale/100,this->height()* scale/100,Qt::KeepAspectRatio);
    QSize size = pixmap->width() > pixmap->height() ? QSize(maxDim, maxDim * pixmap->height()/pixmap->width()) : QSize(maxDim * pixmap->width()/pixmap->height(), maxDim);

    painter.scale(scale/100,scale/100);

    painter.drawPixmap(0, 0, size.width(), size.height(), *pixmap);
}

void MyPicture::scaleChanged(int n)
{
    scale = n;
    QString scaleAsString = QString::number(scale);

    repaint();
}
