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