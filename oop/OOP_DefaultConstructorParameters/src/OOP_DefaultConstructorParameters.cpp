//============================================================================
// Name        : OOP_DefaultConstructorParameters.cpp
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

};

Player::Player(std::string nameval,int hpval, int xpval)
	:name(nameval),hp(hpval),xp(xpval){}

int main() {

	Player noone;
	cout << "Name: " << noone.get_name() << " HP " << noone.get_hp() << " XP " << noone.get_xp()<< endl ;
	Player dz("Dzmitry");
	cout << "Name: " << dz.get_name() << " HP " << dz.get_hp() << " XP " << dz.get_xp()<< endl ;

	Player goober("Goober",100);
	cout << "Name: " << goober.get_name() << " HP " << goober.get_hp() << " XP " << goober.get_xp()<< endl ;
	return 0;
}
