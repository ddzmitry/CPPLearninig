//============================================================================
// Name        : ContinueAndBreak.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>

using namespace std;

int main() {

//	for(;;){
//		cout << "I am infinent" << endl;
//	}
//	while(true){
//		cout << " Thisis infinent" << endl;
//	}


//	while (true){
//		char again {};
//		cout << "Do you want to loop again? (Y/N): ";
//		cin >> again;
//
//		if(again == 'N' || again == 'n') {
//			break;
//		}
//	}

vector<int> test_data  {};

int result {0};
	if(test_data.size() == 0 || test_data.size() == 1)
		return result;
	else
	for (int i = 0; i < test_data.size(); ++i) {
		for (int j = i+1; j < test_data.size(); ++j) {
			cout << "(" << test_data.at(i) << "," << test_data.at(j) << ")"<< " ,";
			result += (test_data.at(i) * test_data.at(j));
		}
	}
	cout << "Result " << result << endl;
	return 0;
}
