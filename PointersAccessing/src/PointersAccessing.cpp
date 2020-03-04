//============================================================================
// Name        : PointersAccessing.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
using namespace std;

int main() {

	int num {10};

	cout << "==================1=================" << endl;

	cout << "Value of p is: " << num << endl;

	cout << "Address of p is: " << &num << endl;

	cout << "Size of p is: " << sizeof num << endl;

	cout << "Value of p is: " << num << endl;

	cout << "==================2=================" << endl;

	int *p {nullptr};

	cout << "Value of p is: " << p << endl;

	cout << "Address of p is: " << &p << endl;

	cout << "Size of p is: " << sizeof p << endl;
	// if p = &num will assign same value to p of num but address will be old
	//p = &num;
	p = nullptr;

	cout << "Value of p is: " << p << endl;
	//cout << "Address of p is: " << &p << endl;

	cout << "==================3=================" << endl;
	int *p1 {nullptr};
	double *p2 {nullptr};
    unsigned long long *p3 {nullptr};
    vector<string> *p4 {nullptr};
    string *p5 {nullptr};
    cout << "Size of p1 is: " << sizeof p1 << endl;
    cout << "Size of p2 is: " << sizeof p2 << endl;
    cout << "Size of p3 is: " << sizeof p3 << endl;
    cout << "Size of p4 is: " << sizeof p4 << endl;
    cout << "Size of p5 is: " << sizeof p5 << endl;

    cout << "==================4=================" << endl;


        int score{10};
        double high_temp{100.7};

        int *score_ptr {nullptr};

        score_ptr = &score;
        cout << "Value of score is: " << score << endl;
        cout << "Address of score is: " << &score << endl;
        cout << "Value of score_ptr is: " << score_ptr << endl;

       // score_ptr = &high_temp;     // Compiler error




//    int score {10};
//    double high_temp {100.7};
//
//    int *score_ptr {nullptr};
//
//    // will take address of score
//    score_ptr = &score;
//
//	cout << "Value of score is: " << score << endl;
//
//	cout << "Address of score is: " << &score << endl;
//
//	cout << "Size of score is: " << sizeof score << endl;
//
//
//	cout << "Value of score_ptr is: " << score_ptr << endl;
//
//	cout << "Address of score_ptr is: " << &score_ptr << endl;
//
//	cout << "Size of score_ptr is: " << sizeof score_ptr << endl;






	return 0;
}
