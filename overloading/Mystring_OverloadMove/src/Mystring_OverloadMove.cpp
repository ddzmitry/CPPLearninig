//============================================================================
// Name        : Mystring_OverloadMove.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Mystring.h"
using namespace std;

int main() {
	Mystring a{"Hello"};
	a = Mystring{"Hola"};
	a = "Bonjour";

	return 0;
}
