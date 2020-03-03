//============================================================================
// Name        : SectionVectorsChallange.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
using namespace std;

int smallest_value(vector<int> v){
	if (v.size() >= 1){
		sort(v.begin(),v.end());
		return v.at(0);
	}
	else{
		return 0;
	}
}

int biggest_value(vector<int> v){
	if (v.size() >= 1){
		sort(v.begin(),v.end());
		return v.at(v.size()-1);
	}
	else{
		return 0;
	}

}

int sum_value(vector<int> v){
	int sum {0};
	if (v.size() >= 1){
		for (int i = 0; i < v.size(); ++i) {

			//cout << "Number " <<v.at(i) << "Sum adding " << sum << endl ;
			sum += v.at(i);
		}
	return sum;
	}
	else{
		return 0;
	}
}

int get_values_output(vector<int> v){

	if (v.size() >= 1){
		cout << "[" ;

		for (int i = 0; i < v.size(); ++i) {
			 cout << i << ","  ;
		}
		cout << "]" << endl;
	}
	else{
		cout << "[" << "]" <<endl;
	}
	return 0;
}


int main() {

	char input {};
	vector<int> internalv {};
	do {
		cout << "What to do : " << endl;
		cout << "A) Insert to vector " << endl;
		cout << "B) Get values from vector "<< endl;
		cout << "C) Get sum "<< endl;
		cout << "D) Get biggest "<< endl;
		cout << "E) Get Smallest "<< endl;
		cout << "F) Clear Vector "<< endl;
		cout << "Q) Quit "<< endl;
		cout << "============================" << endl;
		cin >> input;

		if(input == 'A' || input == 'a'){
		 cout << "What would you want to add to vector: " << endl;
		 int toadd {};
		 cin >> toadd;
		 internalv.push_back(toadd);
		 cout << endl;

		} else if (input == 'B' || input == 'b'){
			cout << "Values from vector" << endl;
			get_values_output(internalv);
		} else if (input == 'C' || input == 'c'){
			cout << "Sum is " << sum_value(internalv) << endl;
		} else if(input == 'D' || input == 'd'){
			cout << "Biggest value is: " << biggest_value(internalv) << endl;
		} else if(input == 'E' || input == 'e'){
			cout << "Smallest value is: " << smallest_value(internalv) << endl;
		}else if(input == 'F' || input == 'f'){
			cout << "Vector is clean :" << endl ;
			internalv.clear();
			get_values_output(internalv);
		}


	} while (input != 'Q' && input != 'q');


	return 0;
}
