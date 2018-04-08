#include "MyWidget.h"

MyWidget::MyWidget(QWidget *parent) : QWidget(parent)
{
    _button = new QPushButton("this is button",this);
    _button->show();
}


void MyWidget::paintEvent(QPaintEvent *)
{
    //QPainter 绘制类
    QPainter painter(this);
    //设置画笔
    painter.setPen(QColor(255,0,0));
    //设置画刷
    painter.setBrush(QBrush(QColor(255,255,0)));
#if 0
    //画一条线
    painter.drawLine(QPoint(0,0),QPoint(100,100));
    //绘制文字
    painter.drawText(200,200,"HellowQt");
#endif
    //绘制实心圆
    painter.drawEllipse(_ptClick,50,50);
}

//得到鼠标点击的地方
void MyWidget::mousePressEvent(QMouseEvent *event)
{
    _ptClick = event->pos();
    //强制程序重新绘制图像
    this->update();
}
