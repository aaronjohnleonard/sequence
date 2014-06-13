#include "player_computer.h"
#include <QDebug>

Player_Computer::Player_Computer()
{
    qDebug() << "Creating a computer";
}

Player_Computer::Player_Computer(Team*){

}

void Player_Computer::drawCard(){

}

void Player_Computer::performTurn(){
    qDebug() << "computer's hand: ";
    for (int i = 0; i < hand.size(); i++){
        hand[i].print();
    }
    qDebug() << "\n";
}

bool Player_Computer::hasCard(Card c){

}
