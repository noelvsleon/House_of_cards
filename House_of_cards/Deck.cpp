
#include "stdafx.h"
#include "Deck.h"
#include <string>
#include <vector>
#include<iostream>
#include<string.h>

using namespace std;

void Deck::deck(int nSuit, int nFace) //generate deck of cards
{
	for (int i = 0; i < nSuit; i++) //iterate through suits
	{

		for (int j = 0; j < nFace; j++) {//iterate through faces

			card = face[j] + " of " + suits[i]; //declare card

			vec_cards.push_back(card);  // add card to vector
			order_cards.push_back(card); //backup shuffled cards
			cardNum++;// raise card number for every card added to deck
		}
	}

}

void Deck::shuffle()
{
	int i = 0;
	while (cardNum > 0)
	{
		int RCard = rand() % cardNum;//generate a random number based on number of cards left in deck


		string DrawCard = vec_cards.at(RCard); // access vector syntax: vector.at(place_value);

											   // remove cards from vector so they cant be called twice
		vec_cards.erase(vec_cards.begin() + RCard);
		//erase vector element syntax: to erase the 6th element = myvector.erase (myvector.begin()+5);
		cardNum--; //lower available cards
		shuff_cards.push_back(DrawCard);  // add card to suffled card vector

		cout << DrawCard << endl;
	}
}

vector<string> Deck::GetCopyShuff()
{
	return shuff_cards;
}

vector<string> Deck::GetCopyOrder()
{
	return order_cards;
}

void Deck::DisplayCard()
{
	/*//char  str1[100], str2[100];
	for (unsigned int i = 0; i < shuff_cards.size(); i++)
	{
	for (unsigned int j = 0; j < order_cards.size(); j++)
	{
	string str1 = shuff_cards.at(i);
	string str2 = order_cards.at(j);
	//if (strcmp(str1, str2) == 0)
	//if (shuff_cards[i] == order_cards[j])
	if((str1.compare(str2)) < 0)
	{
	order_Num[i] = j; //find order of shuffled cards;
	}

	}


	}*/
	cout << "Ordered deck of cards" << endl;
	for (unsigned int i = 0; i < order_cards.size(); i++)
	{
		cout << "Element[" << i << "] = " << order_cards[i] << endl; // display ordered cards

	}
	cout << endl;
	cout << "Shuffled deck of cards" << endl;
	for (unsigned int i = 0; i < shuff_cards.size(); i++)
	{
		cout << "Element[" << i << "] = " << shuff_cards[i] << endl; // display shuffled cards

	}
	cout << endl;
	for (unsigned int i = 0; i < 52; i++)
	{
		//cout << "Element[" << i << "] = " << order_Num[i] << endl; // display shuffled cards order number

	}
	cout << endl;
}

void Deck::display_shuff(int i)
{
	cout << shuff_cards[i] << endl; // display shuffled cards
}