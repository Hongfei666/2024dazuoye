#include "minion.h"

Minion::Minion(QObject *parent)
    : QObject{parent}
{

}
void Minion::Attack(Minion a,Minion b){
    a.xueliang-=b.gongjili;
    b.xueliang-=a.gongjili;
}
