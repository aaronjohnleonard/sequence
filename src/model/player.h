#ifndef PLAYER_H
#define PLAYER_H

#include "vector"
#include "card.h"
#include "square.h"

using namespace std;

class Team;

class Player
{
public:
    Team *team;
    vector<Card> hand;
    vector< vector <Square> > sequences;

    Player();
    Player(Team*);
    void drawCard();
    virtual void performTurn();
    virtual void performTurn(int row, int col, int card);
    bool hasCard(int cValue);
    bool hasCard(Card c);
    void printHand();



};

#endif // PLAYER_H
