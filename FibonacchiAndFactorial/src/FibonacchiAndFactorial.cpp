// Section 11
// Recursion - Factorial

#include <iostream>

using namespace std;

unsigned long long factorial(unsigned long long);

double penny_a_day(int days,double init=0.01);

unsigned long long factorial(unsigned long long n) {
    if (n == 0)
        return 1;	             // base case
    return n * factorial(n-1); // recursive case
}

// using insigned long long cause big number issue
unsigned long long fib(int n, int &count){
	count+=1;
//	cout << n << endl;
	cout << "COUNT: " << count << " NUMBER: "<< n << endl;
	return (n <= 1) ? n :(fib(n-1,count) + fib(n-2,count));
}


double penny_a_day(int day, double init){
	cout << day << endl;
	if(day<=1){
		return init;
	} else {
		return (penny_a_day(--day, init*2));
	}
}


int main() {
	int count {0};
//    cout << factorial(3) << endl;       // 6
//    cout << factorial(8) << endl;     // 40320
//    cout << factorial(12) << endl;   // 479001600
//    cout << factorial(20) << endl;   // 2432902008176640000
//	cout << fib(10,count) << endl;

//	cout << fib(15) << endl;
//	cout << fib(55,count) << endl;
//	cout << fib(500) << endl;

	cout << penny_a_day(18) << endl;
    return 0;
}
