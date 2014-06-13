#ifndef BOARD_H
#define BOARD_H

#include "square.h"
#include "card.h"

class Board
{
public:

    Square** board;

    Board();
    Square getSquare(int row, int col);
    bool isEqual(Card c, int row, int col);
    void setToken(int row, int col, Team* team);
    bool occupied(int row, int col);
};

#endif // BOARD_H
