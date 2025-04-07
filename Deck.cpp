#include <iostream>
#include <algorithm>
#include <ctime>
#include "Deck.h"

//Constructor
//Call the function cardVector.reserve(52)
//Call function populate()
//END FUNCTION
Deck::Deck() {
    cardVector.reserve(52); // Reserve space for a standard deck
    populate();
}

// Destructor
Deck::~Deck() {
    // Body of the destructor remains empty
}


//Function populate
//Creates a standard deck of 52 cards.
//Call function clearHand()
//To create standard deck iterate through all ranks and suits[use nested loop on each enumerator]
//call function add(new Card(static_cast<Card::RANK>(r), static_cast<Card::SUIT>(s)))
//END FUNCTION
void Deck::populate() 
{
    clearHand(); // Clear any existing cards

    // Create standard deck of 52 cards
    for (int s = Card::CLUBS; s <= Card::SPADES; s++) 
    {
        for (int r = Card::ACE; r <= Card::KING; r++) 
        {
            add(new Card(static_cast<Card::RANK>(r), static_cast<Card::SUIT>(s)));
        }
    }
}


//Function shuffle
//Shuffles cards.
//Call function random_shuffle(cardVector.begin(), cardVector.end())
//[You will need to include the standard library named algorithms for this to work]
//END FUNCTION
void Deck::shuffle() 
{
    std::random_shuffle(cardVector.begin(), cardVector.end());
}


//Function deal
//Deals one card to a hand.A hand is any player.
//IF cardVector is not empty[use empty() in vector library] THEN
//call aHand.add(cardVector.back())
//call cardVector.pop_back()
//ELSE
//display an appropriate message indicating that you are out of cards and are unable to
//deal.
//END IF
//END FUNCTION
void Deck::deal(Hand& aHand) 
{
    if (!cardVector.empty()) 
    {
        aHand.add(cardVector.back());
        cardVector.pop_back();
    }
    else 
    {
        std::cout << "Out of cards. Unable to deal." << std::endl;
    }
}

//Function additionalCards
//Gives additional cards to any player for as long as, that player can and wants to hit.
//WHILE generic player object is not busted and keeps hitting
//call the function deal and pass the generic player object to it.
//Display generic player object using cout[this will invoke the overloaded insertion
//operator]
//IF generic player object is busted THEN
//call the function bust() using the generic player object
//END IF
//END WHILE
//END FUNCTION
void Deck::additionalCards(GenericPlayer& aGenericPlayer) {
    std::cout << std::endl; // Add a line break for readability

    // Continue to deal a card as long as player isn't busted and wants another hit
    while (!aGenericPlayer.isBusted() && aGenericPlayer.isHitting()) {
        // Check if deck is empty before dealing
        if (cardVector.empty()) {
            std::cout << "Out of cards. Unable to deal more cards." << std::endl;
            break; // Exit the loop if no more cards
        }

        deal(aGenericPlayer);
        std::cout << aGenericPlayer << std::endl;

        // Check if player has busted after receiving card
        if (aGenericPlayer.getTotal() > 21) {
            aGenericPlayer.bust();
            break; // Exit the loop if player busts
        }
    }
}