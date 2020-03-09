/*
 * Movies.h
 *
 *  Created on: Mar 8, 2020
 *      Author: dzmitrydubarau
 */

#ifndef MOVIES_H_
#define MOVIES_H_
#include <vector>
#include <string>
#include "Movie.h"

class Movies {
private:
	std::vector<Movie> movies;
public:

	Movies();
	virtual ~Movies();
	Movies(const Movies &other);

	bool add_movie(std::string name_val,std::string movie_rating_val,int watched_val);
	bool updated_watched_for_movie(std::string name_val);
	bool check_if_exists(std::string name_val);
	void display();
};

#endif /* MOVIES_H_ */
