#include "square.h"

Square::Square()
{
}

Square::Square(Card *c){
    occupied = false;
    card = c;
}

Square::Square(int r, int c){
    row = r;
    col = c;
    occupied = false;
}

Team* Square::isOccupied(){
    if(occupied)
        return team;
    else
        return 0;
}

void Square::occupy(Team *t){
    occupied =  true;
    team = t;
}

void Square::unoccupy(){
    team = 0;
    occupied = false;
}
