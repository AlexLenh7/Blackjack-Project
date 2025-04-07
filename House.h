// House.h
// Declaration of the House (dealer) class, which inherits from GenericPlayer.
// Contains logic specific to dealer behavior, including whether to hit and flipping the first card.

#ifndef HOUSE_H
#define HOUSE_H

#include <iostream>
#include "GenericPlayer.h"

class House : public GenericPlayer
{
public:
    House(const std::string& name = "Dealer");
    virtual ~House();

    virtual bool isHitting() const;

    void flipFirstCard();
};

#endif // HOUSE_H