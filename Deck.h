#ifndef DECK_H
#define DECK_H

#include <iostream>
#include "GenericPlayer.h"
#include "Hand.h"

class Deck : public Hand
{
public:
    Deck();
    virtual ~Deck();

    void populate();
    void shuffle();
    void deal(Hand& aHand);
    void additionalCards(GenericPlayer& aGenericPlayer);
};

#endif // DECK_H