#include <QDebug>

#include "player_human.h"

Player_Human::Player_Human()
{}

Player_Human::Player_Human(Team* t){
    team = t;
}

void Player_Human::drawCard(){

}

void Player_Human::performTurn(){
    qDebug() << "human's hand: ";
    for (int i = 0; i < hand.size(); i++){
        hand[i].print();
    }
    qDebug() << "\n";
}

void Player_Human::performTurn(int row, int col, int card){

}















