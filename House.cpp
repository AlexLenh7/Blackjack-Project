#include <iostream>
#include "House.h"

//Constructor
//Call the base class constructor to initialize the member variable.
//END FUNCTION
House::House(const std::string& name) : GenericPlayer(name) {
    // Call the base class constructor to initialize name
}

// Destructor
House::~House() {
    // Body of the destructor remains empty
}

//Function isHitting
//Concrete function.Indicates whether the dealer wants to hit
//IF the value returned by getTotal() IS LESS THAN EQUAL TO 16 THEN
//The House hits(return appropriate values, use if..else, if needed)
//ENDIF
//END FUNCTION
bool House::isHitting() const {
    std::cout << "[DEBUG] Dealer total: " << getTotal() << std::endl;
    return (getTotal() <= 16);
}

//Function flipFirstCard
//Flips over the first card.
//IF cardVector is not empty THEN
//call the flip function on the first element of the vector.
//ELSE
//Display an appropriate message indicating that there are no cards to flip
//END IF
//END FUNCTION
void House::flipFirstCard() {
    if (!cardVector.empty()) {
        cardVector[0]->flip(); // Flip the first card
    }
    else {
        std::cout << "No card to flip!" << std::endl;
    }
}