/*
 * Product.cpp
 *
 *  Created on: Dec 25, 2021
 *      Author: ise
 */

#include "Product.h"

Product::Product() {
	this->num=0;
	this->price=0;//eah prodct update his price
}

Product::~Product() {
	// TODO Auto-generated destructor stub
}

int Product::get_num()const
{
	return this->num;
}
bool Product::set_num(int n)
{
	if (n>=0)
	{
		this->num=n;
		return true;
	}
	return false;
}
int Product::get_price()const
{
	return this->price;
}
