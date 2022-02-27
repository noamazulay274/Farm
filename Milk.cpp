/*
 * Milk.cpp
 *
 *  Created on: Dec 25, 2021
 *      Author: ise
 */

#include "Milk.h"

Milk::Milk() {
	this->price=3;
}

Milk::~Milk() {
	// TODO Auto-generated destructor stub
}

void Milk::print_product()const
{
	cout<<"Milk["<<this->num<<"]";
}
