#ifndef GAME_H
#define GAME_H

#include <QtGui/QGuiApplication>
#include <QQuickItem>
#include <QtDebug>

#include "../model/team.h"
#include "../model/player.h"
#include "../model/board.h"
#include "../model/card.h"
#include "../model/player_human.h"
#include "../model/player_computer.h"

#include "vector"
#include "deque"

class Game : public QObject
{
    Q_OBJECT
public:
    vector<Team> teams;
    vector<Player*> players;
    Board board;
    deque<Card> deck;
    vector<Card> discard;
    int currentTurn;
    bool gameCompleted;
    QQuickItem* qmlRoot;

    Game();
    Game(int, int);
    void createDeck();
    void dealHandToPlayer(Player*);
    void performTurn();

public slots:
    void placeTokenSlot(QVariant row, QVariant col, QVariant card);
};


#endif // GAME_H
