//============================================================================
// Name        : PointersDynamicMemoryAllocation.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <random>

using namespace std;

int main() {
	// Allocate pointer to array


	//============================================
//	int *array_ptr {nullptr};
//	size_t size {};
//
//	cout << "How big do you want the array?";
//	cin >> size;
//	int arr [size];
//
//	array_ptr = new int[size];
//	cout << array_ptr << endl;
//
//	for (int i = 0; i < size; ++i) {
//		//cout << array_ptr[i] << endl;
//		array_ptr[i] = random();
//
//	}
//
//	for (int i = 0; i < size; ++i) {
//		cout << array_ptr[i] << endl;
//
//	}
//
//	cout << array_ptr << endl; // addess of the pointer
//	cout << *array_ptr << endl; // points to first value
//
//	for (int i = 0; i < size; ++i) {
//		arr[i] = array_ptr[i];
//		cout << arr[i] << endl;
//	}
//	cout << arr << endl;
//	cout << &arr << endl;
//	delete [] array_ptr;
	//============================================

//	size_t size {0};
//	double *temp_ptr {nullptr};
//
//	cout << "How many temps?" << endl;
//
//	cin >> size;
//
//	temp_ptr = new double[size];
//    cout << temp_ptr << endl;
//    cout << &temp_ptr << endl;
//
//    delete [] temp_ptr;

	//==================Array and pointers==========================
//
//	string *arr_pointer {nullptr};
//	string arr_names[4] = {"Dz","Ani","Goober","Lili"};
//
//	// Assingn pointer to array
//
//	arr_pointer = arr_names;
//
//	for (int i = 0; i < 4; ++i) {
//		cout << arr_pointer[i] << endl;
//		//arr_names[i]= "POOP";
//		//cout << arr_names[i] << endl;
//	}
//
//	delete[] arr_pointer;

	//==================Using Point Expression==========================

//	int scores[] {100,95,89};
//	int *score_ptr {scores};
//	cout << *score_ptr << endl; // 100
//	cout << *(score_ptr + 1) << endl; //95
//	cout << *(score_ptr + 2) << endl; //89
//	return 0;

	//==================Arrays and Pointers============================

    int scores[] {100, 95, 89};

    cout << "Value of scores: " << scores << endl;

    int *score_ptr {scores};
    cout << "Value of score_ptr: " << score_ptr << endl;

    cout << "\nArray subscript notation -------------------------" << endl;
    cout << scores[0] << endl;
    cout << scores[1] << endl;
    cout << scores[2] << endl;

    cout << "\nPointer subscript notation -------------------------" << endl;
    cout << score_ptr[0] << endl;
    cout << score_ptr[1] << endl;
    cout << score_ptr[2] << endl;

    cout << "\nPointer offset notation-------------------------" << endl;
    cout << *score_ptr << endl;
    cout << *(score_ptr + 1) << endl;
    cout << *(score_ptr +2) << endl;

    cout << "\nArray offset notation-------------------------" << endl;
    cout << *scores << endl;
    cout << *(scores + 1) << endl;
    cout << *(scores +2) << endl;

    cout << endl;
    return 0;
}


