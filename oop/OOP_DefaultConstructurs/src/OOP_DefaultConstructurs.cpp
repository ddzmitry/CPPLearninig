//============================================================================
// Name        : OOP_DefaultConstructurs.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "PLayer.h"
using namespace std;

int main() {
	PLayer dz;
	cout << dz.get_name() << endl;
	dz.set_name("Dzmitry");
	cout << dz.get_name() << endl;

	PLayer goober("Goober");
	cout << goober.get_name() << endl;
	return 0;
}
