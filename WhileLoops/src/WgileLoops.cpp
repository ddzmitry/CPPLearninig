//============================================================================
// Name        : WgileLoops.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
using namespace std;

int count_numbers( const vector<int> &vec) {
    //---- WRITE YOUR CODE BELOW THIS LINE----

    int count {0};
    size_t index {0};  // See the Q/A forum for more about size_t
                       // size_t is an unsigned int
                       // you can replace size_t with int or unsigned int and it will work fine

    while (index < vec.size() && vec.at(index) != -99  ) {
        ++count;
        ++index;
    }


    //---- WRITE YOUR CODE ABOVE THIS LINE----
    //---- DO NOT MODIFY THE CODE BELOW THIS LINE----
    return count;
}

int main() {

//	int i {1};
//	 while (i <= 10){
//		 if(i % 2 == 0){
//			 cout << i << endl;
//		 }
//		 ++ i;
//	 }
//
//	int j {0};
//	while (j < 5){
//		cout << j << endl;
//		j++;
//
//	}

bool done {false};
int number {0};

while(!done){

	cout << " Enter integer between 1 and 5 ";
	cin >> number;

	if(number >=1 && number <=5){
		cout << "Thank you " << endl;
		done = true;
	} else{
		cout << " Invalid number " << endl;
	}
	cout << endl;

}

	return 0;
}
