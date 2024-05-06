#include "card.h"
#include "battlescene.h"
#include <QDebug>

Card::Card()
{
}

void Card::draw(){
    this->pix.load(card_pic);
    this->setFixedSize(pix.width(),pix.height());
    this->setStyleSheet("QPushButton{border:0px}");
    this->setIcon(pix);
    this->setIconSize(QSize(pix.width(),pix.height()));
}

void Card::mousePressEvent(QMouseEvent *ev){
    if(ischangdi==0){
        press=ev->globalPos();
    }
    if(ischangdi){
        ischoosed=1;
    }
}

void Card::mouseMoveEvent(QMouseEvent *ev){
    if(ischangdi==0){
        movep=ev->globalPos();
        this->move(movep-press+pos);
    }
}

void Card::mouseReleaseEvent(QMouseEvent *ev){
    if(ischangdi==0){
        if((movep-press+pos).y()>550){
            this->move(pos);
        }
        else{
            emit this->play();
        }
    }
}
