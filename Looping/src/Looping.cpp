//============================================================================
// Name        : Looping.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <vector>
#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	for (int x = 0; x < 10; ++x) {
		cout << x <<  " is " ;
		cout << ((x%2==0) ? " Even": " Odd");
		cout << endl;

	}


	for (int i {1}, j {5} ; i <= 5 ; ++i,++j){
		cout << i << " * " << j << " : " << (i * j) << endl;

	}

	for (int x = 0; x <= 100; ++x) {
		if (x % 10 ==0 ){
			cout << endl;
		} else if (x < 10){

			cout << 0 << x << " ";
		} else{
			cout << x << " ";
		}

	}
	std::vector<char> buffer;

	vector <int> nums {10,20,30,40,50,5,6,2,1,8,4};
//	for ( unsigned int i = 0; i < nums.size(); ++i) {
//			cout << nums.at(i) << endl;
//	}

	// Range based for loops
	double sum {};
	for (auto score: nums) {
		cout << score << " Score" << endl;
		sum += score;
	}
	// Set output persicision
	cout << fixed << setprecision(1);
	cout << sum / nums.size() << " avg " << endl;
	// For strings

	for (auto c: "This is a test"){
		if(c != ' ')
		cout << c;
	}

	return 0;
}
