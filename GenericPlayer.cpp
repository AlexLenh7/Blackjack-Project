// GenericPlayer.cpp
// Implementation of the abstract GenericPlayer class, inherited by Player and House.
// Provides shared behaviors such as checking for bust, displaying hand, and name management.
// Also implements overloaded << operator for hand display.

#include <iostream>
#include "GenericPlayer.h"

// Constructor
// Initialize the member variables using the member initializer in the constructor.
// The body of the constructor remains empty.
GenericPlayer::GenericPlayer(const std::string& name) : name(name) {}

// Destructor
GenericPlayer::~GenericPlayer() {}

// Function isBusted
// Indicates whether the generic player is busted.
bool GenericPlayer::isBusted() const
{
	return (getTotal() > 21);
}

// Function bust()
// Print the name and display that the player has busted
void GenericPlayer::bust() const
{
    std::cout << name << " busts with " << getTotal() << "." << std::endl;
}

// Function getName();
std::string GenericPlayer::getName() const
{
	return name;
}

// Function setName();
void GenericPlayer::setName(const std::string& name) {
	this->name = name;
}

// Overloaded << operator
// Displays player name, hand, and total score if applicable.
// Displays <empty> if hand is empty.
std::ostream& operator<<(std::ostream& os, const GenericPlayer& aGenericPlayer) {
    os << aGenericPlayer.name << "\t";

    std::vector<Card*>::const_iterator iter;
    if (!aGenericPlayer.cardVector.empty()) 
    {
        for (iter = aGenericPlayer.cardVector.begin(); iter != aGenericPlayer.cardVector.end(); ++iter) 
        {
            os << *(*iter) << "\t";
        }

        if (aGenericPlayer.getTotal() != 0) 
        {
            os << "(" << aGenericPlayer.getTotal() << ")";
        }
    }
    else 
    {
        os << "<empty>";
    }

    return os;
}