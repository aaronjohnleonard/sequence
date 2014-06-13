#include <QDebug>
#include <QQmlEngine>

#include "game.h"

Game::Game(){}

Game::Game(int numTeams, int numPlayers)
{

    board = Board();
    teams = vector<Team>();
    for (int i = 0; i < numTeams; i++){
        teams.push_back(Team());
    }
    players = vector<Player*>();
    for (int i = 0; i < numPlayers; i++){
        players.push_back(new Player_Human());
    }
    deck = deque<Card>();
    this->createDeck();
    discard = vector<Card>();
    currentTurn = 0;
    gameCompleted = false;
    for (unsigned long i = 0; i < players.size(); i++){
        dealHandToPlayer(players[i]);
    }
    for (unsigned long i = 0; i < players.size(); i++){
        players[i]->printHand();
    }
}

void Game::createDeck(){
    for (int i = 1; i <= 52; i++){
        // Adding two of the same card because we use two decks
        deck.push_back(Card(i));
        deck.push_back(Card(i));
    }

    random_shuffle(deck.begin(), deck.end());
    random_shuffle(deck.begin(), deck.end());
    random_shuffle(deck.begin(), deck.end());
}

void Game::dealHandToPlayer(Player* player){
    for (int i = 0; i < 6; i++){
        player->hand.push_back(deck.front());
        deck.pop_front();
    }
}

void Game::performTurn(){
    players[currentTurn]->performTurn();
    currentTurn++;
}

void Game::placeTokenSlot(QVariant r, QVariant c, QVariant crd){
    int row = r.toInt();
    int col = c.toInt();
    int card = crd.toInt();
    Player* currentPlayer =  players[currentTurn];
    if(currentPlayer->hasCard(card) && !board.occupied(row, col)){
        QVariant returnVal;
        QVariant arg = "has card";
        QMetaObject::invokeMethod(qmlRoot, "placeToken", Q_RETURN_ARG(QVariant, returnVal), Q_ARG(QVariant, row), Q_ARG(QVariant, col));
        currentPlayer->performTurn(row, col, card);
        board.setToken(row, col, currentPlayer->team);
        currentTurn++;
    }
}














































