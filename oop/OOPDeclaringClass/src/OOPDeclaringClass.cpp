//============================================================================
// Name        : OOPDeclaringClass.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
using namespace std;

class Player {
// attributes
string name {"Player"};
int health {100};
int xp {3};

//methods
void talk(string);
bool is_dead();



};

class Account {
//
	string name {"Account"};
	double balances {0.0};
// method
	bool deplosit(double);

	bool withdraw(double);

};

int main() {
	// Player
	Player dzmitry;
	Player goober;

	Player players[] {dzmitry,goober};
	vector<Player> player_vec {dzmitry};
	player_vec.push_back(goober);

	Player *enemy {nullptr};
	enemy = new Player;

	delete enemy;

	// Account
	Account dzmitry_acc;
	Account goober_acc;



	return 0;
}
