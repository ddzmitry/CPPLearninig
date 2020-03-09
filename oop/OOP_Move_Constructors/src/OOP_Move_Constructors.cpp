//============================================================================
// Name        : OOP_Move_Constructors.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include  <vector>
using namespace std;

class Move {
private:
	int *data;
public:
	void set_data_value(int d);
	int get_data_value();
	// Construtctor
	Move(int d);
	// Copy constructor
	Move(const Move &source);
	// Move constructor
	Move(Move &&source);
	// Destructor
	~Move();
};


// Constructor
Move::Move(int d) {
    data = new int;
    *data = d;
}

// Deep Copy
Move::Move(const Move &source)
	// Pass to constructor
    : Move {*source.data} {
    cout << "Copy constructor  - deep copy " << source.data <<endl;
}

// Move Copy
Move::Move(Move &&source)
:data{source.data}
{
	cout << "Move Constructor called " << *source.data << endl;
	// assigning data back to nullptr freeing memory
	source.data = nullptr;
}


Move::~Move() {
	if (data != nullptr){
		cout << "Destructor freeing data " << *data << endl;
	} else{

		cout << "Destructor removed mullptr" << endl;
	}
        delete data;

    }



// Passing by R value (something that genirated by compiler)
void func_by_R_value(int &&num){
	cout << num << endl;
}
// Passing by L value (something that Passed as variable to compiler)
void func_by_L_value(int &num){
	cout << num << endl;
}
int main() {

	vector<Move> vec = {};
	vec.push_back(Move{10});
	vec.push_back(Move{20});
	vec.push_back(Move{30});
	vec.push_back(Move{40});
	vec.push_back(Move{50});
	vec.push_back(Move{60});



//	func_by_R_value(200);
//	//func_by_L_value(200); // WILL FAIL
//	int i {200};
//	func_by_L_value(i);



	return 0;
}
