#ifndef HAND_H
#define HAND_H

#include <iostream>
#include <vector>
#include "Card.h"

class Hand
{
public:
    Hand();
    virtual ~Hand();
    void add(Card* cardPtr);
    void clearHand();
    int getTotal() const;

protected:
    std::vector<Card*> cardVector;
};

#endif // HAND_H