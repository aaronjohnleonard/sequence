#ifndef PLAYER_HUMAN_H
#define PLAYER_HUMAN_H

#include "player.h"

class Player_Human : public Player
{
public:
    Player_Human();
    Player_Human(Team*);
    void drawCard();
    void performTurn();
    void performTurn(int row, int col, int card);
    bool hasCard(Card c);
};

#endif // PLAYER_HUMAN_H
