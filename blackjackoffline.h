
#ifndef BLACKJACKOFFLINE_H
#define BLACKJACKOFFLINE_H

#include <QMainWindow>
#include "clock.h"
#include "handcards.h"
#include "cardpicture.h"
#include "handcards_blackjack.h"

class BlackjackOffline : public QMainWindow
{
    Q_OBJECT
    HandCardsBlackjack *selfCards, *leftCards, *rightCards, *oppositeCards;// 手牌
    HandCardsBlackjack *lord;   // 庄家
    std::vector<int> deck;      // 游戏的牌堆
public:
    BlackjackOffline(QWidget *parent = nullptr);    //构造函数
    void paintEvent(QPaintEvent *event);
    void NewGame();             // 开始新的游戏，由玩家作为庄家。
    void NextGame(HandCardsBlackjack *lord);        // 开始新的游戏，由上一局获胜者作为庄家
    void MainGame();            // 游戏内容
    void PaintHandCards(HandCards& handcards);      //绘制手牌
signals:

public slots:
    void InitGame();  //初始化函数
};

#endif // BLACKJACKOFFLINE_H

