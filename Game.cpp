// Game.cpp
// Coordinates the entire Blackjack game.
// Manages initial dealing, player and dealer turns, result determination, and hand clearing for the next round.

#include <iostream>
#include "Game.h"

// Constructor
// Call the setName function for player object and pass it the name.
Game::Game(const std::string& name) 
{
    player.setName(name);
    deck.populate();
    deck.shuffle();
}

Game::~Game() 
{
    // Body of the destructor remains empty
}


void Game::play() 
{
    // Deal initial 2 cards to each player
    for (int i = 0; i < 2; i++)
    {
        deck.deal(player);
        deck.deal(house);
    }

    // Hide dealer's first card
    house.flipFirstCard();

    // Show initial hands
    std::cout << "\n--- Initial Deal ---" << std::endl;
    std::cout << player << std::endl;
    house.flipFirstCard();
    std::cout << house << std::endl;

    // Deal additional cards to player
    std::cout << "\n--- Player's Turn ---" << std::endl;
    deck.additionalCards(player);

    if (player.isBusted())
    {
        std::cout << "\n--- Player has busted! ---" << std::endl;
        player.lose();
    }
    else
    {
        std::cout << "\n--- Dealer's Turn ---" << std::endl;
        house.flipFirstCard();
        std::cout << house << std::endl;

        deck.additionalCards(house);

        std::cout << "\n--- Game Results ---" << std::endl;

        if (house.isBusted())
        {
            player.win();
        }
        else
        {
            if (player.getTotal() > house.getTotal())
            {
                player.win();
            }
            else if (player.getTotal() < house.getTotal())
            {
                player.lose();
            }
            else
            {
                player.push(); // Tie game
            }
        }
    }

    // Clear hands for next round
    player.clearHand();
    house.clearHand();
}
