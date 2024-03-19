#ifndef MINION_H
#define MINION_H

#include <QObject>

class Minion : public QObject
{
    Q_OBJECT
public:
    explicit Minion(QObject *parent = nullptr);
    void Attack(Minion a,Minion b);
    void Show(Minion a);
    int gongjili;
    int xueliang;

signals:
};

#endif // MINION_H
