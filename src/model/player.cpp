#include <QDebug>

#include "player.h"

Player::Player() {}

Player::Player(Team *t){
    team = t;
}

void Player::drawCard(){

}

void Player::performTurn(){
    qDebug() << "neither performing turn";
}

void Player::performTurn(int row, int col, int card){
    qDebug() << "neither performing turn";
}

void Player::printHand(){
    qDebug() << "Player's hand:";
    for (unsigned long i = 0; i < hand.size(); i++){
        hand[i].print();
    }
}

bool Player::hasCard(int c){
    for (int i = 0; i < hand.size(); i++){
        if(hand[i].isEqual(c)){
            return true;
        }
    }
    return false;
}

bool Player::hasCard(Card c){
    for (int i = 0; i < hand.size(); i++){
        if(hand[i].isEqual(&c)){
            return true;
        }
    }
    return false;
}









