#include "battlescene.h"
#include <QPainter>

BattleScene::BattleScene(QWidget *parent)
    : QMainWindow{parent}
{
    this->setFixedSize(1440,900);
    this->setWindowIcon(QPixmap(":/Image/Icon.png"));
    this->setWindowTitle("炉石传说");
}

void BattleScene::paintEvent(QPaintEvent *){
    QPainter painter(this);
    QPixmap pix;
    pix.load(":/Image/Battle.png");
    painter.drawPixmap(0,0,this->width(),this->height(),pix);
}
