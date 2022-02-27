/*
 * Farm.h
 *
 *  Created on: Dec 24, 2021
 *      Author: ise
 */
#ifndef FARM_H_
#define FARM_H_
#include "Animal.h"
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#include "Eggs.h"
#include "Milk.h"
#include "Wool.h"

const int number_of_product = 3;


class Farm {
protected:
	int ID;
	int Money;
	Product* products[number_of_product];
	static int num_of_farms;
	vector<Animal*> animals;
	vector<Farm*> clients;
public:
	Farm();
	virtual ~Farm();
	Farm(const Farm &other);
	virtual void print_farm() const =0;
	void print_product() const;
	virtual void update_farm()=0;
	void next_age();
	void add_money(int);
	virtual void buy_anumals() =0;
	virtual void sell_all() =0;
	virtual void add_cowfarm( Farm* other )=0;
	virtual void add_sheepfarm( Farm* other )=0;
	virtual void add_chickenfarm( Farm* other )=0;
	virtual int buy_milk(Product* ,int id )=0;
	virtual int buy_wool(Product*,int id)=0;
	virtual int buy_eggs( Product*,int id)=0;
	int get_money()const;
	int get_ID()const;


};

#endif /* FARM_H_ */
