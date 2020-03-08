/*
 * PLayer.h
 *
 *  Created on: Mar 7, 2020
 *      Author: dzmitrydubarau
 */

#ifndef PLAYER_H_
#define PLAYER_H_
#include "string"

class PLayer {

private:
	std::string name;

public:
	void set_name (std::string);
	std::string get_name();
	PLayer();
	PLayer(std::string name_val);
	virtual ~PLayer();

};

#endif /* PLAYER_H_ */
