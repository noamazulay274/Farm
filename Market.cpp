/*
 * Market.cpp
 *
 *  Created on: Dec 24, 2021
 *      Author: ise
 */

#include "Market.h"
bool get_nums(int *cow,int* sheep,int* chicken)
{
	cout<<"How many new cow farms will be added this year?"<<endl;
	cin>>*cow;
	if(*cow<0)
	{
		throw cow_error();
	}
	cout<<"How many new sheep farms will be added this year?"<<endl;
	cin>>*sheep;
	if(*sheep<0)
	{
		throw sheep_error();
	}
	cout<<"How many new chicken farms will be added this year?"<<endl;
	cin>>*chicken;
	if(*chicken<0)
	{
		throw  chicken_error();
	}
	return true;
}

Market::Market() {
	this->years=0;
}

Market::~Market()
{
	for (Farm* f:Farms)
		{
				delete f;
		}
	Farms.clear();

}


void Market::create_new_farms()
{
	int cows;
	int sheep;
	int chicken;
	cout<<"----Creating new farms----"<<endl;
	bool repeat=false;
		while (repeat!=true)
		{
			try
			{
				repeat= get_nums(&cows,&sheep,&chicken);//insert the count of the farms we have to create for each kind.
			}

			catch (error& e)
			{
				e.handle();
			}
		}
	cout<<"----Adding new farms to market----"<<endl;
	for (int i =0; i<cows; i++)//create "cows" time cow_farm
	{
		cowFarm* n_CF=new cowFarm;//create new cow farm
		if (NULL==n_CF)
		{
			exit(0);
		}
		for(Farm* cfarm :Farms)
		{
			cfarm->add_cowfarm(n_CF);//add the new cowfarm to client list of other farms or other farms to the no cowfarm client list
		}
		this->Farms.push_back(n_CF);//add to farm list
	}
	//same for sheep and checken
	for (int i =0; i<sheep; i++)
	{
		sheepFarm* n_SF=new sheepFarm;
		if (NULL==n_SF)
		{
			exit(0);
		}
		for(Farm* cfarm :Farms)
		{
			cfarm->add_sheepfarm(n_SF);
		}
		this->Farms.push_back(n_SF);
	}
	for (int i =0; i<chicken; i++)
		{
		chickenFarm* n_CHF=new chickenFarm;
		if (NULL==n_CHF)
		{
			exit(0);
		}
			for(Farm* cfarm :Farms)
			{
				cfarm->add_chickenfarm(n_CHF);
			}
			this->Farms.push_back(n_CHF);
		}

}

int Market::getYear()const
{
	return this->years;
}
void Market::next(int number)
{
	for (int i=0 ;i<number; i++)//foreach year we passed
		{
		this->years++;//add one to year
		for (Farm* f:Farms )
		{
			f->update_farm();//update the product that each farm make this year(by passed each animal)
		}

		cout<<"----Begin Market----"<<endl;

		for (Farm* f:Farms )
		{
			f->sell_all();//passed all the farms and try sell the most product that the farm could
		}

		cout<<"----Buy Animals----"<<endl;

		for (Farm* f:Farms)
		{
			f->buy_anumals();//each farm by with all her money animals

		}
		for (Farm* f:Farms)
		{
			f->next_age();//each farm raise her animals age by one
			f->add_money(10);//add each farm 10 dollaes

		}
	}

}

void Market::nextYear()
{

	this->create_new_farms();
	next(1);//passed only one year

}
void Market::fastForwardYears()
{
	int x;
	cout<<"How many years to fast forward?"<<endl;
	cin>>x;
	next(x);//next passed x years
}
void Market::printMarketFarms()const
{
	cout<<"----Market Farms----"<<endl;
	for (Farm* f:Farms)
		{
			f->print_farm();//print each farm
		}
}

