/*
 * Farm.cpp
 *
 *  Created on: Dec 24, 2021
 *      Author: ise
 */

#include "Farm.h"

Farm::Farm() {
	this->ID=++num_of_farms;
	Milk* milk=new Milk();
	Wool* wool=new Wool();
	Eggs* eggs=new Eggs();
	if (NULL==milk||NULL==wool||NULL==eggs)
	{
		exit(0);
	}
	this->products[0]=milk;
	this->products[1]=wool;
	this->products[2]=eggs;
	this->Money=10;

}

Farm::~Farm()
{

}

void Farm::add_money(int x)
{

	this->Money+=x;
}


void Farm::next_age()
{
	int i =0;
	while(i<(int)animals.size())
	{
		animals[i]->nextyear();//add year
		if(animals[i]->getage()==animals[i]->getDeath())//delete animals that death
		{
			delete animals[i];
			animals.erase(animals.begin()+i);
		}
		else
		{
			i++;
		}

	}
}

void Farm::print_product() const
{
	for (int i=0;i<number_of_product;i++)//passed all product and print
	{
		this->products[i]->print_product();
		if (i<number_of_product-1)
		{
			cout<<", ";
		}
	}
}

int Farm::get_money()const
{
	return this->Money;
}


int Farm::get_ID()const
{
	return this->ID;
}



int Farm::num_of_farms=0;//start with 0 farms

