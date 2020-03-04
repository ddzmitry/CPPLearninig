//============================================================================
// Name        : FunctionPassBy.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
using namespace std;
void scale_number(int &num);
void mod_string(string &name);
void mod_vector(vector<string> &vt);

void scale_number(int &num) {

	num = num>100 ? 100 : num;
}

void mod_string(string &name){
	name = "POOP_JAR";
}

void mod_vector( vector<string> &vt){

// WILL CHANGE
for (int i = 0; i < vt.size(); ++i) {
	vt.at(i) = "POOP_JAR";
}

// NOT CHANGING VALUE
//	for( auto i : vt){
//		i = "POOP_JAR";
//	}
}

int main() {


	int number {1000};
	// will change a value because passed by reference
	scale_number(number);
	cout << number << endl;
	string name {"Dzmitry"};
	mod_string(name);
	cout << name << endl;

	vector<string> names {"Hello","World","Dzmitry"};
	mod_vector(names);
	for(auto name: names){
		cout << name << endl;
	}
	return 0;
}

