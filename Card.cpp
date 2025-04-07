// Card.cpp
// Implementation of the Card class for Blackjack game.
// Contains logic for card value, flipping the card face, and output formatting.
// Includes overloaded << operator for card display.

#include <iostream>
#include "Card.h"

// Initialize the member variables using the member initializer list in the constructor.
Card::Card(RANK rank, SUIT suit, bool isUp) 
	: rank(rank), suit(suit) {}

// Function getValue
// Return the value of the card if the card is facing up.Otherwise return 0.
// NOTE : The king, queen, jack should also return a value 10
int Card::getValue() const
{
	if (isFaceUp) 
	{
		if (rank > 10) 
		{
			return 10;  // J, Q, K
		}
		return static_cast<int>(rank);
	}
	return 0;
}

// Function flip()
// Flips a card.Face up becomes face down, and face down becomes face up
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

// Overloaded << operator
// Displays the rank and suit if the card is face-up; otherwise shows "XX".
std::ostream& operator<<(std::ostream& os, const Card& aCard) {
	const std::string RANKS[] = { "0", "A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K" };
	const std::string SUITS[] = { "C", "D", "H", "S" };

	if (aCard.isFaceUp) 
	{
		os << RANKS[aCard.rank] << SUITS[aCard.suit];
	}
	else 
	{
		os << "XX";
	}

	return os;
}