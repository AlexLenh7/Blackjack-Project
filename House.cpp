#include <iostream>
#include "House.h"

// Constructor
// Call the base class constructor to initialize the member variable.
House::House(const std::string& name) : GenericPlayer(name) 
{
    // Call the base class constructor to initialize name
}

// Destructor
House::~House() 
{
    // Body of the destructor remains empty
}

// Function isHitting
// Concrete function.Indicates whether the dealer wants to hit
bool House::isHitting() const 
{
    return (getTotal() <= 16);
}

// Function flipFirstCard
// Flips over the first card.
void House::flipFirstCard() 
{
    if (!cardVector.empty()) 
    {
        cardVector[0]->flip(); // Flip the first card
    }
    else 
    {
        std::cout << "No card to flip!" << std::endl;
    }
}