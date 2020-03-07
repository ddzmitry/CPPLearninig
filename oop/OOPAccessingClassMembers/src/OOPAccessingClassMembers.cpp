//============================================================================
// Name        : OOPAccessingClassMembers.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class Player {
public:
    // attributes
    string name;
    int health;
    int xp;

    // methods
    void talk(string text_to_say) { cout << name << " says " << text_to_say << endl;  }
    bool is_dead();
};

class Account {
public:
    // attributes
    string name;
    double balance;

    // methods
    bool deposit(double bal) {balance += bal; cout << "In deposit" << endl; }
    bool withdraw(double bal) {balance -= bal; cout << "In withdraw" << endl;  }
};

int main() {
	Player dzmitry;
	dzmitry.name = "Dzmitry";
	dzmitry.health = 100;
    dzmitry.xp = 12;
    dzmitry.talk("POOP");

    Player *enemy = new Player;
    // (*enemy).name = "Enemy"; // works as well
    // (*enemy).talk("BOO");
    enemy->name = "Enemy";
    enemy->talk("BOO I kill ya");

    Account dzmitry_acc;
    dzmitry_acc.balance = 10;
    dzmitry_acc.deposit(500);
    dzmitry_acc.withdraw(451);
    cout << dzmitry_acc.balance << endl;



	return 0;
}
