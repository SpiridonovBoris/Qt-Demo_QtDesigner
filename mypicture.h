#ifndef MYPICTURE
#define MYPICTURE

#include <QWidget>
#include <QPainter>

class MyPicture : public QWidget
{
    Q_OBJECT
public:
    explicit MyPicture(QWidget *parent = 0);
    QPixmap * pixmap = new QPixmap(), * pi;
    double scale;

    MyPicture();

protected:
    virtual void paintEvent(QPaintEvent * event) override;

signals:

public slots:
    void scaleChanged(int);
};

#endif // MYPICTURE

