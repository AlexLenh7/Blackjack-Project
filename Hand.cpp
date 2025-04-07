#include <iostream>
#include <vector>
#include "Hand.h"

//Constructor
//Call the reserve() on CardVector and pass a value of 7
//END FUNCTION
Hand::Hand()
{
	cardVector.reserve(7);
}

//Destructor
//Call the function clearHand()
//END FUNCTION
Hand::~Hand()
{
	clearHand();
}

//Function add
//Adds a card to the hand.
//Call push_back() on the cardVector and pass the cardPtr as its argument
//END FUNCTION
void Hand::add(Card* ptr)
{
	cardVector.push_back(ptr);
}

//Function clearHand
//Clears all cards from the hand
//Declare an iterator of the type vector<Card*>
//using the iterator delete each* iter[name of the iterator]
//Set the* iter to NULL -- Good practice
//Call function clear() on cardVector
//END FUNCTION
void Hand::clearHand()
{
	std::vector<Card*>::iterator iter;
	for (iter = cardVector.begin(); iter != cardVector.end(); iter++) {
		delete* iter; // Delete each card
		*iter = NULL;
	}
	cardVector.clear();
}

//Function getTotal
//Returns the total value of the hand.
//IF cardVector is empty[Hint:empty is a function defined in vector class] THEN
//return 0
//ENDIF
//IF the value of the first card is 0 THEN
//return 0
//Hint: use cardVector[0]->getValue()
//ENDIF
//To add up the card values create a const_iterator
//LOOP through the vector(using the iterator)
//calculate the total value for all the cards[Hint use(*iter)->getValue() to
//get the value of each card.]
//END LOOP
//Page 5 of 10
//LOOP through the hand and check if it contains an Ace
//IF the total IS LESS THAN AND EQUAL TO 11, THEN
//add 10 to the total[since we have already set the ace to 1].
//Return the total.
//ENDIF
//END LOOP
//END FUNCTION
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