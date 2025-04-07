#include <iostream>
#include "GenericPlayer.h"

//NOTE: WRITE APPROPRIATE CODE FOR SETTER AND GETTER FUNCTIONS FOR THIS CLASS

//Constructor
//Initialize the member variables using the member initializer in the constructor.
//The body of the constructor remains empty.
//END FUNCTION
GenericPlayer::GenericPlayer(const std::string& name) : name(name) {}

// Destructor
GenericPlayer::~GenericPlayer() {}

//Function isBusted
//Indicates whether the generic player is busted.
//IF getTotal() IS GREATER THAN 21 THEN
//Return appropriate value
//ELSE
//Return appropriate value
//END IF
//END FUNCTION
bool GenericPlayer::isBusted() const
{
	return (getTotal() > 21);
}

//Function bust()
//Print the name and display that the player has busted
//END FUNCTION
void GenericPlayer::bust() const
{
    std::cout << name << " busts with " << getTotal() << "." << std::endl;
}

//Function getName();
std::string GenericPlayer::getName() const
{
	return name;
}

//Function setName();
void GenericPlayer::setName(const std::string& name) {
	this->name = name;
}

//overloaded << operator for GenericPlayer Class
//Store the name followed by a tab space in the output object.
//Create a vector iterator of type Card*
//IF the cardVector for the generic player object is not empty THEN
//LOOP through all cards for that player
//store the value of the card followed by the tab space[use * (*iterator_name)]
//END LOOP
//IF the total score for the player is NOT EQUAL TO 0 THEN
//append the total to the output object
//END IF
//ELSE
//append "<empty>"
//END IF
//Return output object
//Example Output : Say the name of the player is Player1 and the player has 5 spades and a jack of
//hearts and the dealer’s first card is still facing down then this function should print an
//output as follows :
//Player1 5s JH(15)
//House XX 9C
//END FUNCTION
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