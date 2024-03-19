#ifndef CARD_H
#define CARD_H

#include <QObject>

class Card : public QObject
{
    Q_OBJECT
public:
    explicit Card(QObject *parent = nullptr);
    int fulizhi;
    int gongjili;
    int xueliang;

signals:
};

#endif // CARD_H
