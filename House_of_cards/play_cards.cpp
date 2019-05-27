
#include "stdafx.h"
#include "Deck.h"
#include "play_cards.h"
#include <string>
#include <vector>
#include<iostream>
#include<string.h>

using namespace std;

void play_cards::init_array(int r, int c)
{
	player = new int*[r];
	for (int i = 0; i<c; i++)
	{
		player[i] = new int[c]; //assign num of players and their shuffled cards in a 2D matrix
	}
}

void play_cards::player_deck(int r, int c)
{
	init_array(r, c);
	int counter = 0;
	for (int i = 0; i<c; i++)
	{
		for (int j = 0; j<r; j++)
		{
			player[j][i] = counter; //distribute shuffled cards
			counter++;
		}
	}

	cout << " The given shuffled card order is :" << endl;
	for (int i = 0; i<r; i++)
	{
		cout << "Player" << i + 1 << "Cards " << endl;
		for (int j = 0; j<c; j++)
		{
			cout << player[i][j] << " ";  //shuffled card order with respect to players

		}
		cout << "\n";
	}

	/*vector<string> container1 = GetCopyShuff();
	for (unsigned int i = 0; i < container1.size(); i++)
	{
	cout << "container[" << i << "] = " << container1[i] << endl; // display shuffled cards

	}
	cout << endl;*/

	/*for (int i = 0; i<r; i++)
	{
		unsigned int counter = 0;
		cout << "Player" << i + 1 << "Cards " << endl;
		for (int j = 0; j<c; j++)
		{
			counter = static_cast<unsigned int>(player[i][j]); //display card associated with number
			display_shuff(counter);

		}
	}*/


}