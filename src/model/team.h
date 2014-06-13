#ifndef TEAM_H
#define TEAM_H

#include "vector"
#include "player.h"

using namespace std;

class Team
{
public:
    enum Color { blue, red, green };
    Color color;
    vector<Player> players;

    Team();
};

#endif // TEAM_H
