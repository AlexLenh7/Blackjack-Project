#include <iostream>
#include "Card.h"

// initialize the member variables using the member initializer list in the constructor
Card::Card(RANK rank, SUIT suit, bool isUp) 
	: rank(rank), suit(suit) {}

//Function getValue
//Return the value of the card if the card is facing up.Otherwise return 0.
//NOTE : The king, queen, jack should also return a value 10
//END FUNCTION
int Card::getValue()
{
	// if value of card is facing up
	if (isFaceUp)
	{
		// return the value of that card
		return static_cast<int>(rank);
	}
	else
	{
		return 0; // else return 0
	}
}

//Function flip()
//Flips a card.Face up becomes face down, and face down becomes face up
//END FUNCTION
void Card::flip()
{
	// if card is facing up set to false
	if (isFaceUp == true)
	{
		isFaceUp = false;
	}
	else 
	{
		isFaceUp = true; // card has to be down if not up so set to true
	}
}

