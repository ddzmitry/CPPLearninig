//============================================================================
// Name        : DoWhile.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
using namespace std;

int main() {
	char selection {};
	vector <string> options {"Do this","Do that","So Sometning else", "Quit"};
	do {
		cout << "=================" << endl;

		for (int i = 0; i < options.size(); ++i) {
			cout << i + 1 << " " << options.at(i) << endl;
		}
		cout << "=================" << endl;
		cin >> selection;
		cout << selection << " " << options.size() << endl;

		try {
			int b = selection-48;
		if (b <= options.size() + 1){
			cout << "OKAY executing " << options.at(selection) << endl;
			cout << endl;
			} else{
				cout << "Number is too big";
				cout << endl;
			}

		} catch (exception e) {

			cout << "Enter Number Please: ";
			cout << endl;
		}


	} while (selection !='q' && selection != 'Q');
	return 0;
}
