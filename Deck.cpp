// Deck.cpp
// Implementation of the Deck class that inherits from Hand.
// Responsible for creating a full deck, shuffling, dealing, and handling additional cards.
// Includes logic to interact with both player and dealer during gameplay.

#include <iostream>
#include <algorithm>
#include <ctime>
#include "Deck.h"

// Constructor
// Call the function cardVector.reserve(52)
// Call function populate()
Deck::Deck() 
{
    cardVector.reserve(52); // Reserve space for a standard deck
    populate();
}

// Destructor
Deck::~Deck() 
{
    // Body of the destructor remains empty
}


// Function populate
// Creates a standard deck of 52 cards.
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


// Function shuffle
// Shuffles cards.
void Deck::shuffle() 
{
    std::random_shuffle(cardVector.begin(), cardVector.end());
}


// Function deal
// Deals one card to a hand. A hand is any player.
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

// Function additionalCards
// Gives additional cards to any player for as long as, that player can and wants to hit.
void Deck::additionalCards(GenericPlayer& aGenericPlayer) 
{
    std::cout << std::endl; // Add a line break for readability

    // Continue to deal a card as long as player isn't busted and wants another hit
    while (!aGenericPlayer.isBusted() && aGenericPlayer.isHitting()) 
    {
        // Check if deck is empty before dealing
        if (cardVector.empty()) 
        {
            std::cout << "Out of cards. Unable to deal more cards." << std::endl;
            break; // Exit the loop if no more cards
        }

        deal(aGenericPlayer);
        std::cout << aGenericPlayer << std::endl;

        // Check if player has busted after receiving card
        if (aGenericPlayer.getTotal() > 21) 
        {
            aGenericPlayer.bust();
            break; // Exit the loop if player busts
        }
    }
}