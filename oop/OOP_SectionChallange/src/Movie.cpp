/*
 * Movie.cpp
 *
 *  Created on: Mar 8, 2020
 *      Author: dzmitrydubarau
 */

#include "Movie.h"
#include <iostream>
// Constructor
Movie::Movie(std::string name_val,std::string movie_rating_val,int watched_val):
name(name_val),movie_rating(movie_rating_val),watched(watched_val){}

Movie::~Movie() {
	// TODO Auto-generated destructor stub
}

// Copy constructor
Movie::Movie(const Movie &other)
:Movie{other.name,other.movie_rating,other.watched}{}

void Movie::display() const{

	std::cout << "Name of the movie: " << name << " Rating : " << movie_rating << " Watched : " << watched << std::endl;
}

void Movie::iwatched(){
	watched++;
}

