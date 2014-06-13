#include <QDebug>
#include <string>

#include "card.h"

using namespace std;

Card::Card(int v){
    // all cards in deck are represented by a number from 1-52
    // 1-13 are Spades Ace, 2, ... Queen, King
    // 14-26 are Diamonds Ace, 2, ... Queen, King
    // 27-39 are Clubs Ace, 2, ... Queen, King
    // 40-52 are Hearts Ace, 2, ... Queen, King
    value = v;
}

bool Card::isEqual(Card *c){
    return c->value == value;
}

bool Card::isEqual(int cValue){
    return cValue == value;
}

void Card::print(){
    if(value == -1){
        qDebug() << "free";
        return;
    }
    char suit;
    if (value < 14)
        suit = 'S';
    else if (value < 27)
        suit = 'D';
    else if (value < 40)
        suit = 'C';
    else
        suit = 'H';

    int v;
    if(value%13 == 0)
        v = 13;
    else
        v = value%13;

    qDebug() << v << " of " << suit;
}
