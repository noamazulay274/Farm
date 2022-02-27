/*
 * sheep.cpp
 *
 *  Created on: Dec 25, 2021
 *      Author: ise
 */

#include "sheep.h"


sheep::sheep() {
	this->death=5;
	this->price=5;
}

sheep::~sheep() {
	// TODO Auto-generated destructor stub
}

void sheep::show()const
{
}
int sheep::cost=5;

int sheep::get_cost()
{
	return cost;
}
