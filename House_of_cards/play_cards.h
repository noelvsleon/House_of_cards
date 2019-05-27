#ifndef PLAY_CARDS_H
#define PLAY_CARDS_H

#include "stdafx.h"
#include <string>
#include"Deck.h"
#include <vector>
#include<iostream>
#include<string.h>

using namespace std;

class play_cards : public Deck
{
public:
	play_cards()
	{}

	void init_array(int r, int c);
	

	void player_deck(int r, int c);
	

private:

	int **player;


};



#endif PLAY_CARDS_H	// !PLAY_CARDS_H
#pragma once
