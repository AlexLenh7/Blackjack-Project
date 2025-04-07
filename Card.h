// Card.h
// Declaration of the Card class used in the Blackjack game.
// Defines a playing card with a rank, suit, and visibility (face up/down).
// Provides functionality to flip the card, get its value, and display it.

#ifndef CARD_H
#define CARD_H

#include <iostream>

class Card
{
private:
    bool isFaceUp;

public:
    enum RANK
    {
        ACE = 1,
        TWO = 2,
        THREE = 3,
        FOUR = 4,
        FIVE = 5,
        SIX = 6,
        SEVEN = 7,
        EIGHT = 8,
        NINE = 9,
        TEN = 10,
        JACK = 10,
        QUEEN = 10,
        KING = 10
    };

    enum SUIT
    {
        HEARTS,
        DIAMONDS,
        CLUBS,
        SPADES
    };

    Card(RANK rank = ACE, SUIT suit = SPADES, bool isUp = true);
    int	getValue() const;
    void flip();
    
    friend std::ostream& operator<<(std::ostream& os, const Card& aCard);

protected:
    RANK rank;
    SUIT suit;
};

#endif // CARD_H