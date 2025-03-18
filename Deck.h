#include <iostream>
#include "GenericPlayer.h"
#include "Hand.h"

class Deck
{
public:
    Deck();
    virtual ~Deck();
    void populate();
    void shuffle();
    void deal(Hand& aHand);
    void additionalCards(GenericPlayer& aGenericPlayer);
};

