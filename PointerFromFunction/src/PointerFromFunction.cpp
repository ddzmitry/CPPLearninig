// Section 12
// Return Pointer
#include <iostream>

using namespace std;

int *create_array(size_t size, int init_value = 0) {
   int *new_storage {nullptr};
   new_storage = new int[size];
   for (size_t i{0}; i < size; ++i)
	   //pointer offset notation
      *(new_storage + i) = init_value;
   return new_storage;
}

void display(const int *const array, size_t size) {
    for (size_t i{0}; i < size; ++i)
        cout << array[i] << " ";
    cout << endl;
}

void print(const int *const arr, size_t size) {
    cout << "[ ";
    for (size_t i{0}; i<size;++i)
        cout << arr[i] << " ";
    cout <<  "]";
    cout << endl;
}

int *apply_all(int *array1,size_t size,int *array2,size_t size2 ){

	cout << array1 << endl;
	cout << array2 << endl;
	int *new_storage {nullptr};
	new_storage = new int[size * size2];
	int counter {0};

    for (size_t i{0}; i < size; ++i){

        for (size_t j{0}; j < size2; ++j){
        	new_storage[counter] =(array1[i] * array2[j]);
        	++counter;

        }

    }
    print(new_storage, counter);
    delete [] new_storage;


}

int main() {
	int array1 [] {1,2,3,4,5};
	int array2 [] {10,20,30};

	apply_all(array1,5,array2,3);



//    int *my_array {nullptr};
//    size_t size;
//    int init_value {};
//
//    cout << "\nHow many integers would you like to allocate? ";
//    cin >> size;
//    cout << "What value would you like them initialized to? ";
//    cin >> init_value;
//
//    my_array = create_array(size, init_value);
//    cout << "\n--------------------------------------" << endl;
//
//    display(my_array, size);
//    delete [] my_array;
//    return 0;
}
