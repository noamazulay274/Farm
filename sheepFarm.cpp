/*
 * sheepFarm.cpp
 *
 *  Created on: Dec 25, 2021
 *      Author: ise
 */

#include "sheepFarm.h"

sheepFarm::sheepFarm()
{
	sheep* sheep1 = new sheep;
	sheep* sheep2 = new sheep;
	sheep* sheep3 = new sheep;
	if (NULL==sheep1||NULL==sheep2||NULL==sheep3)
	{
		exit(0);
	}
	animals.push_back(sheep1);
	animals.push_back(sheep2);
	animals.push_back(sheep3);


}

sheepFarm::~sheepFarm()
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

void sheepFarm::print_farm()const
{
	cout<<"Farm Id: "<<this->ID<<", type: Sheep farm, Money: "<<this->Money<<", Animals: "<<this->animals.size()<<" sheep, Products: ";
		this->print_product();
		cout<<endl;
}






void sheepFarm::update_farm()
{
	for(Animal* a :animals)
		{
			this->products[1]->set_num(this->products[1]->get_num()+a->getage());
		}
}



void sheepFarm::buy_anumals()
{
	int x= this->Money/sheep::get_cost();
	this->Money=this->Money%sheep::get_cost();
	if (x>0)
	cout<<"Sheep farm("<<this->get_ID()<<") bought "<<x<<" sheeps for "<<x*sheep::get_cost()<<" dollars"<<endl;

	for(int i=0;i<x;i++)
	{
		sheep* sheep1 = new sheep;
		if (NULL==sheep1)
		{
			exit(0);
		}
		this->animals.push_back(sheep1);

	}
}





 void sheepFarm::sell_all()
 {
		for (Farm* f :clients)
		{
			this->Money+=f->buy_wool(this->products[1],this->ID);

		}
 }

 void sheepFarm::add_cowfarm( Farm* other )
 {
 	other->add_sheepfarm(this);

 }
 void sheepFarm::add_sheepfarm(Farm* other)
 {

 }
 void sheepFarm::add_chickenfarm( Farm* other )
 {
	cout<<"Sheep farm("<<this->ID<<") Added Chicken farm("<<other->get_ID()<<") to his client list"<<endl;
 	this->clients.push_back(other);
 }


 int sheepFarm::buy_milk(Product* mil,int id)
 { 	int x= min(mil->get_num(),this->get_money()/mil->get_price());
	this->Money-=x*mil->get_price();
	this->products[0]->set_num(this->products[0]->get_num()+x);
	mil->set_num(mil->get_num()-x);
	if (x>0)
	{
		cout<<"Sheep farm("<<this->get_ID()<<") bought "<<x<<" milk for "<<x*products[0]->get_price()<<" dollars from Cow farm("<<id<<")"<<endl;
	}
	return x*mil->get_price();
 }
 int sheepFarm::buy_eggs(Product* egg,int id)
 {

 	return 0;

 }


 int sheepFarm::buy_wool(Product* wool,int id)
 {
 	return 0;

 }

