#include <iostream>
#include "Card.h"

// initialize the member variables using the member initializer list in the constructor
Card::Card(RANK rank, SUIT suit, bool isUp) 
	: rank(rank), suit(suit) {}

//Function getValue
//Return the value of the card if the card is facing up.Otherwise return 0.
//NOTE : The king, queen, jack should also return a value 10
//END FUNCTION
int Card::getValue() const
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

//overloaded << operator for Card Class
//Create 2 constant string arrays named RANKS and SUITS(RANKS will contain elements like “0”, “A”
//	etc and SUITS will contain “S”, “C” etc) and use these string arrays to print appropriate rank
//	and suit when displaying the card.The enumerators created in the card class will work like the
//	index for the above arrays.
//	IF the card is facing up THEN
//	store the rank and suit in the output object.
//	ELSE
//	store "XX"
//	END IF
//	Return output object[See overloaded << class example]
//	HINT: This function should print JH for jack of hearts or 5S for 5 spades etc for each card.
//	END FUNCTION
std::ostream& operator<<(std::ostream& os, const Card& aCard) {
	const std::string RANKS[] = { "0", "A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K" };
	const std::string SUITS[] = { "C", "D", "H", "S" };

	if (aCard.isFaceUp) {
		os << RANKS[aCard.rank] << SUITS[aCard.suit];
	}
	else {
		os << "XX";
	}

	return os;
}