#include <iostream>
#include <vector>
#include "Card.h"

class Hand
{
public:
    Hand();
    virtual ~Hand();
    void add(Card* cardPtr);
    void ClearHand();
    int getTotal();

protected:
    std::vector<Card*> cardVector;
};