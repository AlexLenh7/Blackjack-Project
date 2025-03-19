#include <iostream>
#include "Game.h"

//Constructor
//Call the setName function for player object and pass it the name.
//Call function populate() using the deck object.
//Call function shuffle() using the deck object
//END FUNCTION

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