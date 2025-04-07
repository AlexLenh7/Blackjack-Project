#include <iostream>
#include <string>
#include "Game.h"

//Print appropriate welcome message to begin the game
//Create a character variable called again and initialize it to 'y'
//Prompt for the player name and store it in variable called name.
//Create a game object and pass the name to it
//Call the function play() using the game object.[Use a sentinel controlled loop around this to prompt
//the player and check if he wants to play again to stay in the game.You exit the game when the user
//chooses 'no']
//END FUNCTION
int main() {
    std::cout << "\t\tWelcome to Blackjack!\n\n";

    std::string name;
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    char again = 'y';
    while (again == 'y' || again == 'Y') {
        Game game(name);
        game.play();

        std::cout << "\nDo you want to play again? (y/n): ";
        std::cin >> again;
        std::cin.ignore(); // Clear the input buffer
    }

    return 0;
}
