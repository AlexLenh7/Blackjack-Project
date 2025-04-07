// Player.cpp
// Implements the Player class which inherits from GenericPlayer.
// Handles player's interaction such as choosing to hit, and printing win/lose/push messages.

#include <iostream>
#include "Player.h"

// Constructor
// Call the base class constructor to initialize the member variable.
Player::Player(const std::string& name) : GenericPlayer(name) {}

// Destructor
Player::~Player() {}

// Function isHitting
// Concrete function.Indicates whether the player wants to hit
// Using name of the player prompt to check if he wants to hit and return appropriate values
bool Player::isHitting() const {
    char response;
    std::cout << getName() << ", do you want to hit? (y/n): ";
    std::cin >> response;
    return (response == 'y' || response == 'Y');
}

// Function win
// Print the name and display that the player has won
bool Player::win() const {
    std::cout << getName() << " wins." << std::endl;
    return true;
}

// Function lose
// Print the name and display that the player has lost
bool Player::lose() const {
    std::cout << getName() << " loses." << std::endl;
    return true;
}

// Function push
// Print the name and display that the player has pushed
bool Player::push() const {
    std::cout << getName() << " pushes." << std::endl;
    return true;
}