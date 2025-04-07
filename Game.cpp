#include <iostream>
#include "Game.h"

//Constructor
//Call the setName function for player object and pass it the name.
//Call function populate() using the deck object.
//Call function shuffle() using the deck object
//END FUNCTION
Game::Game(const std::string& name) 
{
    player.setName(name);
    deck.populate();
    deck.shuffle();
}

Game::~Game() {
    // Body of the destructor remains empty
}

//Function play
//Deal initial 2 cards to each player.[You will need a loop that runs twice and call deal
//function for each player]
//Using the house object call function flipFirstCard().
//Display player object using cout[to invoke the overloaded insertion operator]
//Display house object using cout[to invoke the overloaded insertion operator]
//Call the additionalCards() using the deck object and pass the player object to it.
//Using the house object call function flipFirstCard().
//Display house object using cout[to invoke the overloaded insertion operator]
//Call the additionalCards() using the deck object and passthe house object to it.
//IF the house has busted[call isBusted()] THEN
//IF player has not busted THEN
//invoke the win function using the player object.
//END IF
//ELSE
//IF player has not busted THEN
//compare the total score of the player with the house and display the appropriate
//winning, losing, push messages.[requires nested if..else statements]
//END IF
//END IF
//call the clearHand function for player object
//Call the clearHand() funtion for house object
//END FUNCTION
void Game::play() {
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
    std::cout << house << std::endl;

    // Deal additional cards to player
    std::cout << "\n--- Player's Turn ---" << std::endl;
    deck.additionalCards(player);

    // Reveal dealer's first card
    house.flipFirstCard();
    std::cout << house << std::endl;

    // Deal additional cards to dealer
    deck.additionalCards(house);

    // If house is busted, player wins (if not busted)
    if (house.isBusted()) 
    {
        if (!player.isBusted()) 
        {
            player.win();
        }
    }
    else 
    {
        // Compare hands if neither is busted
        if (!player.isBusted()) 
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