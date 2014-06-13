#ifndef CARD_H
#define CARD_H

class Card
{

public:
    // all cards in deck are represented by a number from 0-51
    // 0-12 are Spades 2-Ace
    // 13-25 are Diamonds 2-Ace
    // 26-38 are Clubs 2-Ace
    // 39-51 are Hearts 2-Ace
    int value;

    Card(int v);
    bool isEqual(Card*);
    bool isEqual(int cValue);
    void print();

};

#endif // CARD_H
