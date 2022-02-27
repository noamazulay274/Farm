/*
 * Eggs.cpp
 *
 *  Created on: Dec 25, 2021
 *      Author: ise
 */

#include "Eggs.h"

Eggs::Eggs() {
	this->price=1;
}

Eggs::~Eggs() {
	// TODO Auto-generated destructor stub
}

void Eggs::print_product()const
{
	cout<<"Eggs["<<this->num<<"]";
}
