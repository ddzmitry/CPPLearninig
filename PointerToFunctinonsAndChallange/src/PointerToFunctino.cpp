//============================================================================
// Name        : PointerToFunctino.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
using namespace std;

void double_data(int *int_ptr) {
   *int_ptr *= 2;
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void display( const vector<string> *const  v) {
//(*v).at(0) = "Funny";
    for (auto str: *v)
        cout << str << " ";
    cout << endl;

 //   v = nullptr;
}

void display(int *array, int sentinel) {
    while (*array != sentinel)
        cout << *array++ << " ";
    cout << endl;
}


int main() {
    int value {10};
    int *int_ptr {nullptr};

    cout << "Value: " << value << endl;

    // passing by reference
    double_data(&value);
    cout << "Value: " << value << endl;

    cout << "-----------------------------" << endl;
    int_ptr = &value;
    // asign pointer to reference and change value
    double_data(int_ptr);
    cout << "Value: " << value << endl;

    cout  << endl;




    int x {100}, y {200};
    cout << "\nx: " << x <<  endl;
    cout << "y: " << y <<  endl;
    // passing by reference
    swap(&x, &y);
    cout << "\nx: " << x <<  endl;
    cout << "y: " << y <<  endl;
    cout  << endl;

    cout << "-----------------------------" << endl;
    vector<string> stooges {"Larry", "Moe", "Curly"};
    display(&stooges);

    cout << "\n-----------------------------" << endl;
    int scores[] {100,98,97,79,85,-1};
    display(scores, -1);

    cout  << endl;
    return 0;

}
