#include <iostream>
#include "Card.h"

//Print appropriate welcome message to begin the game
//Create a character variable called again and initialize it to 'y'
//Prompt for the player name and store it in variable called name.
//Create a game object and pass the name to it
//Call the function play() using the game object.[Use a sentinel controlled loop around this to prompt
//the player and check if he wants to play again to stay in the game.You exit the game when the user
//chooses 'no']
//END FUNCTION
void main()
{

}

//overloaded << operator for Card Class
//Create 2 constant string arrays named RANKS and SUITS(RANKS will contain elements like “0”, “A”
//	etc and SUITS will contain “S”, “C” etc) and use these string arrays to print appropriate rank
//	and suit when displaying the card.The enumerators created in the card class will work like the
//	index for the above arrays.
//	IF the card is facing up THEN
//	store the rank and suit in the output object.
//	ELSE
//	store "XX"
//	END IF
//	Return output object[See overloaded << class example]
//	HINT: This function should print JH for jack of hearts or 5S for 5 spades etc for each card.
//	END FUNCTION

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
