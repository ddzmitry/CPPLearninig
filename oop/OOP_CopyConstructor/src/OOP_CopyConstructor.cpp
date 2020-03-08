//============================================================================
// Name        : OOP_CopyConstructor.cpp
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
	Player(std::string nameval = "None",int hpval =0 , int xpval =0);

	string get_name(){
		return name;
	}
	int get_hp(){
		return hp;
	}
	int get_xp(){
		return xp;
	}
	// Copy constructor
	Player(const Player &source);

	// Destructor
	~Player(){
		cout << "Destructor called for " << name << "\n";

	}

};

Player::Player(std::string nameval,int hpval, int xpval)
	:name(nameval),hp(hpval),xp(xpval){}

Player::Player(const Player &source)

//:name(source.name),hp(source.hp),xp(source.xp) //initiation

{
	// Or could be
	Player(source.name,source.hp,source.xp);
cout << "Copy constructor called of "<< source.name  << endl;
}

void display_player(Player p){

	cout << "==========================" << endl;
	cout << "Name: " << p.get_name() << "\n HP " << p.get_hp() << "\n XP " << p.get_xp()<< endl ;
	cout << "==========================" << endl;
}

int main() {

	Player noone;
	display_player(noone);
	Player dz("Dzmitry");
	display_player(dz);
	Player goober("Goober",100);
	display_player(goober);
	// COPY constructor
	Player poofy = Player{goober};
	display_player(poofy);
	return 0;
}
