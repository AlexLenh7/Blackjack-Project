#include <iostream>
#include <string>

class Player
{
public:
    Player(const std::string& name);
    virtual ~Player();
    virtual bool isHitting();
    bool win();
    bool lose();
    bool push();
};