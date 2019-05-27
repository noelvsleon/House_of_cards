#ifndef DECK_H
#define DECK_H

#include "stdafx.h"
#include <string>
#include <vector>
#include<iostream>
#include<string.h>

using namespace std;

class Deck
{


public:
	vector<string> shuff_cards;
	vector<string> order_cards;
	Deck()
	{}


	void deck(int, int); //generate deck of cards
	

	void shuffle();
	

	vector<string> GetCopyShuff();
	

	vector<string> GetCopyOrder();
	
	void DisplayCard();
	
	void display_shuff(int);
	



private:
	vector<string> vec_cards;
	vector<int> order_Num;
	int numC, numP, cardNum = 0;
	string card = "";
	string suits[4] = { "Hearts", "Clubs", "Diamonds", "Spades" };
	string face[13] = { "2","3","4","5","6","7","8","9","10","Jack","Queen","King","Ace" };


};

#endif DECK_H	// !__DECH_H__

