#ifndef GAME_H
#define GAME_H

#include <iostream>
#include "Deck.h"
#include "House.h"
#include "Player.h"

class Game
{
private:
    Deck deck;
    House house;
    Player player;

public:
    Game(const std::string& name);
    ~Game();
    void play();
};

#endif // GAME_H
