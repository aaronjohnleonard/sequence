#include "board.h"

Board::Board()
{
    board = new Square*[10];
    for (int r = 0; r < 10; r++){
        board[r] = new Square[10];
        for (int c = 0; c < 10; c++){
            board[r][c] =  Square();
        }
    }
}

void Board::setToken(int row, int col, Team* t){
    board[row][col].occupy(t);
}

bool Board::occupied(int row, int col){
    return board[row][col].occupied;
}
