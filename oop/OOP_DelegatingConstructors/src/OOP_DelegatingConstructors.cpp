//============================================================================
// Name        : OOP_DelegatingConstructors.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Player{
private:
	std::string name;
	int hp;
	int xp;
public:
	Player(std::string nameval,int hpval, int xpval);
	Player(std::string nameval);
	Player();

	string get_name(){
		return name;
	}
	int get_hp(){
		return hp;
	}
	int get_xp(){
		return xp;
	}

};

Player::Player(std::string nameval,int hpval, int xpval)
	:name(nameval),hp(hpval),xp(xpval){}

Player::Player(std::string nameval)
	:Player(nameval,0,0){}

Player::Player()
	:Player("None",0,0){}


int main() {
	Player noone;
	cout << "Name: " << noone.get_name() << " HP " << noone.get_hp() << " XP " << noone.get_xp()<< endl ;
	Player dz("Dzmitry");
	cout << "Name: " << dz.get_name() << " HP " << dz.get_hp() << " XP " << dz.get_xp()<< endl ;

	Player goober("Goober",100,200);
	cout << "Name: " << goober.get_name() << " HP " << goober.get_hp() << " XP " << goober.get_xp()<< endl ;

	//Player *poofy {nullptr};
	//cout << "Name: " << poofy->get_name() << " HP " << poofy->get_hp() << " XP " << poofy->get_xp()<< endl ;

	//delete poofy;

	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
