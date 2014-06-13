#ifndef PLAYER_COMPUTER_H
#define PLAYER_COMPUTER_H

#include "player.h"

class Player_Computer : public Player
{
public:
    Player_Computer();
    Player_Computer(Team*);
    void drawCard();
    void performTurn();
    bool hasCard(Card c);
};

#endif // PLAYER_COMPUTER_H
