#ifndef SQUARE_H
#define SQUARE_H

#include "card.h"

class Team;

class Square
{
public:
    Card* card;
    int row;
    int col;
    bool occupied;
    Team* team;

    Square();
    Square(Card*);
    Square(int, int);
    void occupy(Team *t);
    void unoccupy();
    Team* isOccupied();

};

#endif // SQUARE_H
