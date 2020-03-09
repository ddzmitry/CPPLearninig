/*
 * Player.cpp
 *
 *  Created on: Mar 8, 2020
 *      Author: dzmitrydubarau
 */

#include "Player.h"

//assigining static value only once
int Player::num_players {0};

// Constructor
Player::Player(std::string name_val, int health_val, int xp_val):
	name {name_val},health{health_val},xp{xp_val}{
		// On every time when created it will increase count
		num_players++;
}

// Copy constructor
Player::Player(const Player &source)
  :Player{source.name,source.health,source.xp}{

}

int Player::get_num_players(){
	return num_players;
}

Player::~Player() {
	// On every time when removed it will decrease count
	num_players--;
	// TODO Auto-generated destructor stub
}

