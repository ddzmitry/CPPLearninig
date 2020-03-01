//============================================================================
// Name        : ChallangeGreedyAlg.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
using namespace std;

int main() {
	const int dollar  {100};
	const int quater  {25};
	const int dime {10};
	const int nickel {5};
	const int penny {1};
	vector <vector<int>> vct {{dollar},{quater},{dime},{nickel},{penny}};
	int input {0};
	cout << "Enter Amount of coins you have:";
	cin  >> input ;
	int origin_input = input;
	int current_coint {0};
	int module_left {0};
	int coin_count {0};
	for (int x = 0; x < vct.size(); x++) {
		 current_coint = vct.at(x).at(0);
		 //cout << "COIN IS: " << current_coint << endl;
		 module_left = input % current_coint;
		 //cout << "Left from module " <<  module_left << endl;
		 // Count per nomination
		 coin_count = (input - module_left) / current_coint;
		 // for vector purpose
		 vct.at(x).at(0) =  coin_count;
		 cout << " There is " << coin_count << " of " << current_coint << " cent coin in " << origin_input << " cents "<< endl;
		 input = module_left;

	}





	return 0;
}
