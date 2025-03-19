#include <iostream>
#include "Deck.h"

//Constructor
//Call the function cardVector.reserve(52)
//Call function populate()
//END FUNCTION

//Function populate
//Creates a standard deck of 52 cards.
//Call function clearHand()
//To create standard deck iterate through all ranks and suits[use nested loop on each enumerator]
//call function add(new Card(static_cast<Card::RANK>(r), static_cast<Card::SUIT>(s)))
//END FUNCTION

//Function shuffle
//Shuffles cards.
//Call function random_shuffle(cardVector.begin(), cardVector.end())
//[You will need to include the standard library named algorithms for this to work]
//END FUNCTION

//Function deal
//Deals one card to a hand.A hand is any player.
//IF cardVector is not empty[use empty() in vector library] THEN
//call aHand.add(cardVector.back())
//call cardVector.pop_back()
//ELSE
//display an appropriate message indicating that you are out of cards and are unable to
//deal.
//END IF
//END FUNCTION

//Function additionalCards
//Gives additional cards to any player for as long as, that player can and wants to hit.
//WHILE generic player object is not busted and keeps hitting
//call the function deal and pass the generic player object to it.
//Display generic player object using cout[this will invoke the overloaded insertion
//operator]
//IF generic player object is busted THEN
//call the function bust() using the generic player object
//END IF
//END WHILE
//END FUNCTION

