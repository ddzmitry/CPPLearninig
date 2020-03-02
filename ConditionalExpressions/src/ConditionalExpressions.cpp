//============================================================================
// Name        : ConditionalExpressions.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	  int iSecret, iGuess;
	  /* initialize random seed: */
	  srand (time(NULL));
	  /* generate secret number between 1 and 10: */
	  iSecret = rand() % 10;
	  cout << "Test " << iSecret << endl;

	  cout << "Guess the number between 1 and 10: ";
	  cin >> iGuess;
	  cout << ((iSecret == iGuess) ?  "Congrats" : "Failed");


	return 0;
}
