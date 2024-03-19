#ifndef BATTLESCENE_H
#define BATTLESCENE_H

#include <QMainWindow>

class BattleScene : public QMainWindow
{
    Q_OBJECT
public:
    explicit BattleScene(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent *);

signals:
};

#endif // BATTLESCENE_H
