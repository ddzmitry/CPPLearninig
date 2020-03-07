//============================================================================
// Name        : OOPPrivate_and_Public.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Player {
private:
	string name {"Player"};
	int health;
	int xp;
public:
	void talk(string text_to_say){
		cout << name << " says " << text_to_say;
	}
	bool is_dead();


};
int main() {
	Player dzmitry;
	dzmitry.talk("Dzmitry");

	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
