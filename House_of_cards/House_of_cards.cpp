// House_of_cards.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Deck.h"
#include "play_cards.h"
#include <string>
#include <vector>
#include<iostream>
#include<string.h>

using namespace std;


int main()
{
	// Create our class and perform function
	Deck d1;
	d1.deck(4, 13);
	d1.shuffle();
	// Display the vector contents so far
	d1.DisplayCard();

	//Display player cards
	play_cards p1;
	p1.player_deck(4, 13);

	
    return 0;
}

