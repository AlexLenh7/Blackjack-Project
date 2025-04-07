// Hand.h
// Declaration of the Hand class.
// Represents a collection of Card pointers and provides logic to add, clear, and total card values.

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