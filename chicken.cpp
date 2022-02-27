/*
 * chicken.cpp
 *
 *  Created on: Dec 25, 2021
 *      Author: ise
 */

#include "chicken.h"

chicken::chicken() {
	this->death=3;
	this->price=3;
}

chicken::~chicken() {
	// TODO Auto-generated destructor stub
}

void chicken::show()const
{
}

int chicken::get_cost()
{
	return cost;
}
int chicken::cost=3;
