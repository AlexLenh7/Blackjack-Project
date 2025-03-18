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
    int	getValue();
    void flip();

protected:
    RANK rank;
    SUIT suit;
};