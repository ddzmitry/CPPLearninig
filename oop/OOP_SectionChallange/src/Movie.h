/*
 * Movie.h
 *
 *  Created on: Mar 8, 2020
 *      Author: dzmitrydubarau
 */

#ifndef MOVIE_H_
#define MOVIE_H_
#include <string>
class Movie {
private:
	std::string name;
	std::string movie_rating;
	int watched;

public:
	// Constructor
	Movie(std::string name_val,std::string movie_rating_val,int watched_val);
	// Destructor
	virtual ~Movie();
	// Copy constructor
	Movie(const Movie &other);

	void display() const;
	void iwatched();

	std::string get_name(){
		return name;
	}

};

#endif /* MOVIE_H_ */
