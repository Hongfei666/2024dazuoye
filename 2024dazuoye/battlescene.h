#ifndef BATTLESCENE_H
#define BATTLESCENE_H

#include <QWidget>
#include "game.h"
#include "hero.h"
#include "card.h"
#include "spell.h"
#include "minion.h"
#include <QPainter>
#include <QRandomGenerator64>
#include <QMouseEvent>

namespace Ui {
class BattleScene;
}

class BattleScene : public QWidget
{
    Q_OBJECT

public:
    explicit BattleScene(QWidget *parent = nullptr);
    ~BattleScene();

    void paintEvent(QPaintEvent *);

    //基础属性
    int myfalizhi=0;
    int maxfalizhi=0;
    int pilao=0;
    int usedcard=-1;

    //记录减费持续效果
    int spellnext=0;
    int lianjinext=0;
    int next=0;

    //是否打出
    bool isplay=0;

    //是否需要目标
    bool isneedtarget1;

    //手牌，牌库，场地
    QList<Card*> Hand;
    QList<Card*> Library;
    QList<Minion*> changdi;

    Hero *myhero=new Hero;

    //更新手牌
    void HandShow();

    //更新场地
    void changdiShow();

    //抽牌
    void draw();

    //抽法术牌
    void drawspell();

    //抽随从牌
    void drawminion();

    //打出某张牌
    void play(Card* thiscard);

    //回合开始
    void turn_end();

    //回合结束
    void turn_begin();

private:
    Ui::BattleScene *ui;
};

#endif // BATTLESCENE_H
