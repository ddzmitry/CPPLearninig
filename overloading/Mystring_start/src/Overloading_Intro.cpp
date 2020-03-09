//============================================================================
// Name        : Overloading_Intro.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Mystring.h"
using namespace std;


int main() {
	Mystring empty;
	empty.display();
	Mystring dzmitry("Dzmitry");
	Mystring stooge {dzmitry};
	dzmitry.display();
	stooge.display();

	return 0;
}
