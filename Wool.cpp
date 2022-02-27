/*
 * Wool.cpp
 *
 *  Created on: Dec 25, 2021
 *      Author: ise
 */

#include "Wool.h"

Wool::Wool() {
	this->price=2;
}

Wool::~Wool() {
	// TODO Auto-generated destructor stub
}

void Wool::print_product()const
{
	cout<<"Wool["<<this->num<<"]";
}
