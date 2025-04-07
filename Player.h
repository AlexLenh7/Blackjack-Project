// Player.h
// Declaration of the Player class, which inherits from GenericPlayer.
// Implements player-specific behaviors including hitting decisions and result announcements.

#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string>
#include "GenericPlayer.h"

class Player : public GenericPlayer
{
public:
    Player(const std::string& name = "");
    virtual ~Player();
    virtual bool isHitting() const;

    bool win() const;
    bool lose() const;
    bool push() const;
};

#endif // PLAYER_H