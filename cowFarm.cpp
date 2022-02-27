/*
 * cowFarm.cpp
 *
 *  Created on: Dec 24, 2021
 *      Author: ise
 */

#include "cowFarm.h"

cowFarm::cowFarm()
{
	cow* cow1=new cow;
	cow* cow2=new cow;
	cow* cow3=new cow;
	if(NULL==cow1||NULL==cow2||NULL==cow3)
	{
		exit(0);
	}
	this->animals.push_back(cow1);
	this->animals.push_back(cow2);
	this->animals.push_back(cow3);
}

cowFarm::~cowFarm()
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

void cowFarm::print_farm()const
{
	cout<<"Farm Id: "<<this->ID<<", type: Cow farm, Money: "<<this->Money<<", Animals: "<<this->animals.size()<<" cows, Products: ";
	this->print_product();
	cout<<endl;
}

void cowFarm::update_farm()
{
	for(Animal* a :animals)
	{
		this->products[0]->set_num(this->products[0]->get_num()+a->getage());//add the sum of milk by age of animal
	}
}


void cowFarm::buy_anumals()
{
	int x= this->Money/cow::get_cost();//x is the count of new cow
	this->Money=this->Money%cow::get_cost();
	if (x>0)
	cout<<"Cow farm("<<this->get_ID()<<") bought "<<x<<" cows for "<<x*cow::get_cost()<<" dollars"<<endl;

	for(int i=0;i<x;i++)
	{
		cow* cow_n=new cow;
		if(NULL==cow_n)
		{
			exit(0);
		}

		this->animals.push_back(cow_n);
	}
}

void cowFarm::sell_all()
{
	for (Farm* f :clients)
	{
		this->Money+=f->buy_milk(this->products[0],this->ID);

	}
}

void cowFarm::add_cowfarm( Farm* other )
{

}
void cowFarm::add_sheepfarm(Farm* other)
{
	cout<<"Cow farm("<<this->ID<<") Added Sheep farm("<<other->get_ID()<<") to his client list"<<endl;
	this->clients.push_back(other);
}
void cowFarm::add_chickenfarm( Farm* other )
{
	other->add_cowfarm(this);
}



int cowFarm::buy_milk(Product* mil,int id)
{
	return 0;
}
int cowFarm::buy_eggs(Product* egg,int id)
{

	int x= min(egg->get_num(),this->get_money()/egg->get_price());
	this->Money-=x*egg->get_price();
	this->products[2]->set_num(this->products[2]->get_num()+x);
	egg->set_num(egg->get_num()-x);
	if (x>0)
	{
		cout<<"Cow farm("<<this->get_ID()<<") bought "<<x<<" eggs for "<<x*egg->get_price()<<" dollars from Chicken farm("<<id<<")"<<endl;
	}
	return x*egg->get_price();
}


int cowFarm::buy_wool(Product* wool,int id)
{
	return 0;
}

