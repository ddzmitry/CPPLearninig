//============================================================================
// Name        : OOP_ConstructorInitializationLists.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;


class Player {
private:
	std::string name;
	int health;
	int xp;
public:
	Player();
	Player(std::string nameval);
	Player(std::string nameval,int healthval, int xpval);

	std::string get_name(){
		return name;
	}


};

Player::Player()
:name{"None"},health{0},xp{0}{

};
Player::Player(std::string nameval)
:name{nameval},health{0},xp{0}{

};

Player::Player(std::string nameval,int healthval, int xpval)
:name{nameval},health{healthval},xp{xpval}{

};



int main() {
	Player noone;
	return 0;
}
