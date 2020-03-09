//============================================================================
// Name        : OOP_SectionChallange.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Movies.h"
#include "vector"

using namespace std;

int main() {
	Movies movies;
	movies.display();
	movies.add_movie("Nemo","PG-13",5);
	movies.add_movie("RR","PG-13",5);
	movies.add_movie("NeZZmo","PG-13",5);
	movies.display();
	movies.updated_watched_for_movie("Nemo");
	movies.display();
	movies.add_movie("Nemo","PG-13",5);

	return 0;
}
