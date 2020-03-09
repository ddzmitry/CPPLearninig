/*
 * Movies.cpp
 *
 *  Created on: Mar 8, 2020
 *      Author: dzmitrydubarau
 */

#include "Movies.h"
#include "Movie.h"
#include <iostream>

Movies::Movies() {
	// TODO Auto-generated constructor stub

}



Movies::~Movies() {
	// TODO Auto-generated destructor stub
}

Movies::Movies(const Movies &other) {
	// TODO Auto-generated constructor stub

}



bool Movies::check_if_exists(std::string name_val){
	if(movies.size() >0){

		for (auto movie : movies){
			if (movie.get_name() == name_val){
				std::cout << "Movie: " << name_val << " is already exists" << std::endl;
				return false;
			} else{
				std::cout << "Movie: " << name_val << " can be  added" << std::endl;
				return true;

			}
		}
	} else{
		return true;
	}

}

bool Movies::add_movie(std::string name_val,std::string movie_rating_val,int watched_val){
	// add movie
	if(check_if_exists(name_val)){
		Movie temp_movie = Movie{name_val,movie_rating_val,watched_val};
		movies.push_back(temp_movie);
		return true;
	} else{
		return false;
	}
}

void Movies::display(){
	std::cout << "Display called " << std::endl;
	if(movies.size() > 0){
		for (auto movie : movies){
			movie.display();
		}
	} else{
		std::cout << "No movies" << std::endl;
	}

};

bool Movies::updated_watched_for_movie(std::string name_val){

	// or use (for Movie &movie:movies)
	for (int index = 0; index < movies.size(); ++index) {

		if(movies.at(index).get_name() == name_val){
			movies.at(index).iwatched();
		} else{
			std::cout << "Movie: " << name_val << " is DOESNT exists" << std::endl;
			return false;
		}

	}


};
