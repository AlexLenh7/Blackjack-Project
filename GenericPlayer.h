// GenericPlayer.h
// Declaration of the abstract GenericPlayer class, which inherits from Hand.
// Provides common functionality for both Player and House (dealer).
// Contains name management, bust checking, and display logic.

#ifndef GENERICPLAYER_H
#define GENERICPLAYER_H

#include <iostream>
#include <string>
#include "Hand.h"

class GenericPlayer : public Hand
{
private:
    std::string name;

public:
    GenericPlayer(const std::string& name = "");
    virtual ~GenericPlayer();
    
    virtual bool isHitting() const = 0;
    bool isBusted() const;
    void bust() const;

    std::string getName() const;
    void setName(const std::string& name);

    friend std::ostream& operator<<(std::ostream& os, const GenericPlayer& aGenericPlayer);
};

#endif // GENERICPLAYER_H