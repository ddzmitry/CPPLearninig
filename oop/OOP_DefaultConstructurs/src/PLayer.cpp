/*
 * PLayer.cpp
 *
 *  Created on: Mar 7, 2020
 *      Author: dzmitrydubarau
 */

#include "PLayer.h"
#include "string"

PLayer::PLayer() {
	name = "POOP";

}

PLayer::PLayer(std::string name_val){

	this->name=name_val;
}


PLayer::~PLayer() {
	// TODO Auto-generated destructor stub
}

void PLayer::set_name(std::string in_name){
	name=in_name;

}
std::string PLayer::get_name(){
	return name;
}
