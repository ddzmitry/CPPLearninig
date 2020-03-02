//============================================================================
// Name        : SwitchLearning.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

enum Color {
	red,green,blue
};
int main() {

	Color screen_color {green};

	switch (screen_color) {
		case red:
			cout << "red";
			break;
		case green:
			cout << "green";
			break;
		case blue:
			cout << "blue";
			break;
		default:
			cout << "Never should be a case";
			break;
	}

	return 0;
}
