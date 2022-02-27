/*
 * chickenFarm.cpp
 *
 *  Created on: Dec 25, 2021
 *      Author: ise
 */

#include "chickenFarm.h"

chickenFarm::chickenFarm()
{
	chicken* chicken1 = new chicken;
	chicken* chicken2 = new chicken;
	chicken* chicken3 = new chicken;

	if(NULL==chicken1||NULL==chicken2||NULL==chicken3)
	{
		exit(0);
	}
	animals.push_back(chicken1);
	animals.push_back(chicken2);
	animals.push_back(chicken3);

}

chickenFarm::~chickenFarm()
{
	for (Animal* A:animals)
			{
				delete A;
			}
	animals.clear();
	delete products[0];
	delete products[1];
	delete products[2];
}


void chickenFarm::print_farm()const
{
	cout<<"Farm Id: "<<this->ID<<", type: Chicken Farm, Money: "<<this->Money<<", Animals: "<<this->animals.size()<<" chickens, Products: ";
	this->print_product();
	cout<<endl;
}



void chickenFarm::update_farm()
{
	for(Animal* a :animals)
		{
			this->products[2]->set_num(this->products[2]->get_num()+a->getage());
		}
}


void chickenFarm::buy_anumals()
{
	int x= this->Money/chicken::get_cost();
	this->Money=this->Money%chicken::get_cost();
	if (x>0)
	cout<<"Chicken farm("<<this->get_ID()<<") bought "<<x<<" chickens for "<<x*chicken::get_cost()<<" dollars"<<endl;

	for(int i=0;i<x;i++)
	{
		chicken* chicken1 = new chicken;
		if(NULL==chicken1)
		{
			exit(0);
		}
		this->animals.push_back(chicken1);
	}
}

void chickenFarm::sell_all()
{
	for (Farm* f :clients)
	{
		this->Money+=f->buy_eggs(this->products[2],this->ID);
	}
}

void chickenFarm::add_cowfarm( Farm* other )
{
	cout<<"Chicken farm("<<this->ID<<") Added Cow farm("<<other->get_ID()<<") to his client list"<<endl;
	this->clients.push_back(other);
}
void chickenFarm::add_sheepfarm(Farm* other)
{
	other->add_chickenfarm(this);
}
void chickenFarm::add_chickenfarm( Farm* other )
{
}

int chickenFarm::buy_milk(Product* mil,int id)
{
	return 0;
}
int chickenFarm::buy_eggs(Product* egg,int id)
{

	return 0;

}


int chickenFarm::buy_wool(Product* wool,int id)
{
	int x= min(wool->get_num(),this->get_money()/wool->get_price());
	this->Money-=x*wool->get_price();
	this->products[1]->set_num(this->products[1]->get_num()+x);
	wool->set_num(wool->get_num()-x);
	if (x>0)
	{
		cout<<"Chicken farm("<<this->get_ID()<<") bought "<<x<<" wool for "<<x*products[1]->get_price()<<" dollars from Sheep farm("<<id<<")"<<endl;
	}
	return x*wool->get_price();
}

