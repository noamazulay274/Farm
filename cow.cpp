/*
 * cow.cpp
 *
 *  Created on: Dec 25, 2021
 *      Author: ise
 */

#include "cow.h"

cow::cow() {
	this->death=10;
	this->price=10;
}

cow::~cow() {
	// TODO Auto-generated destructor stub
}

void cow::show()const
{
}
int cow::get_cost()
{
	return cost;
}
int cow::cost=10;
