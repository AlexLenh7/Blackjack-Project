// Hand.cpp
// Implements functionality to manage a hand of cards.
// Includes logic for adding cards, clearing the hand, and calculating hand total with Ace logic.

#include <iostream>
#include <vector>
#include "Hand.h"

// Constructor
// Call the reserve() on CardVector and pass a value of 7
Hand::Hand()
{
	cardVector.reserve(7);
}

// Destructor
// Call the function clearHand()
Hand::~Hand()
{
	clearHand();
}

// Function add
// Adds a card to the hand.
void Hand::add(Card* ptr)
{
	cardVector.push_back(ptr);
}

// Function clearHand
// Clears all cards from the hand
void Hand::clearHand()
{
	std::vector<Card*>::iterator iter;
	for (iter = cardVector.begin(); iter != cardVector.end(); iter++) {
		delete* iter; // Delete each card
		*iter = NULL;
	}
	cardVector.clear();
}

// Function getTotal
// Returns the total value of the hand.
int Hand::getTotal() const
{
    if (cardVector.empty())
    {
        return 0;
    }

    int total = 0;
    bool containsAce = false;

    for (const auto& card : cardVector)
    {
        int value = card->getValue(); // will be 0 if face down
        if (value == 1)
        {
            containsAce = true;
        }
        total += value;
    }

    // Account for Ace as 11 if it helps
    if (containsAce && total <= 11)
    {
        total += 10;
    }

    return total;
}