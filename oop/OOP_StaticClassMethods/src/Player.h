/*
 * Player.h
 *
 *  Created on: Mar 8, 2020
 *      Author: dzmitrydubarau
 */

#ifndef PLAYER_H_
#define PLAYER_H_
#include <string>
class Player {

private:
	static int num_players; //doesnt belong to object

	std::string name;
	int health;
	int xp;

public:
	std::string get_name(){return name;}
	int get_health() {return health;}
	int get_xp() {return xp;}
	// Constructor
	Player(std::string name_val = "None", int health_val = 0, int xp_val =0);
	// Copy constructor
	Player(const Player &source);
	// Destructor
	virtual ~Player();

	// Get players number

	static int get_num_players();
};

#endif /* PLAYER_H_ */
