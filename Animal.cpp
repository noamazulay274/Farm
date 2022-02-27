/*
 * Animal.cpp
 *
 *  Created on: Dec 24, 2021
 *      Author: ise
 */

#include "Animal.h"

Animal::Animal()
{
	this->age=0;
	this->death=0;
	this->price=0;

}

Animal::~Animal() {
	// TODO Auto-generated destructor stub
}


int Animal::getage()const{
	return this->age;

}
int Animal::getDeath()const{
	return this->death;

}
void Animal::nextyear()
{
	this->age++;
}
int Animal::getprice()const{
	return this->price;

}
