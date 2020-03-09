//============================================================================
// Name        : OOP_StaticClassMethods.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Player.h"
using namespace std;

void displaye_active_players(){
	cout << "Active PLayers " << Player::get_num_players() << endl;;
}

int main() {

	Player dz {"Dzmitry",1,1};
	{
		Player dz1 {"Dzmitry",1,1};
		Player dz2 {"Dzmitry",1,1};
		displaye_active_players();
	}

	displaye_active_players();

	Player *enemy = new Player("Enemy");
	displaye_active_players();

	delete enemy;
	displaye_active_players();
	return 0;
}
