#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QWidget>
#include <QPainter>
#include <QMouseEvent>
#include <QPushButton>

class MyWidget : public QWidget
{
    Q_OBJECT
public:
    explicit MyWidget(QWidget *parent = nullptr);
    //Qtcreator中斜体的代表虚函数
    virtual void paintEvent(QPaintEvent *);
    //mouse press 事件
    virtual void mousePressEvent(QMouseEvent *event);

    QPoint _ptClick;

    QPushButton* _button;
signals:

public slots:
};

#endif // MYWIDGET_H
