#ifndef CARD_H
#define CARD_H

#include <QWidget>
#include <QPushButton>
#include <QPixmap>
#include <QPainter>

class Card : public QPushButton
{
    Q_OBJECT
public:
    Card();

    //卡牌名称,图片
    QString card_pic;
    QPixmap pix;

    //法力值
    int mana;
    int originmana;

    //各种判断类型
    bool isspell=0;
    bool isminion=0;
    bool isweapon=0;
    bool isneedtarget=0;
    bool ischangdi=0;
    bool islianji=0;
    bool ischoosed=0;

    //实现卡牌拖动
    QPoint pos,press,movep;

    //绘制卡牌
    void draw();

    //鼠标事件
    void mousePressEvent(QMouseEvent *ev);
    void mouseReleaseEvent(QMouseEvent *ev);
    void mouseMoveEvent(QMouseEvent *ev);

signals:
    //打出信号
    void play();
};

#endif // CARD_H
