/*
 * Market.h
 *
 *  Created on: Dec 24, 2021
 *      Author: ise
 */

#ifndef MARKET_H_
#define MARKET_H_
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#include "cowFarm.h"
#include "sheepFarm.h"
#include "chickenFarm.h"
#include "error.h"



class Market {
	int years;
	vector<Farm*>  Farms;
	void create_new_farms();
	void next(int);
	bool Trading_day();
public:
	Market();
	virtual ~Market();
	int getYear()const;
	void nextYear();
	void fastForwardYears();
	void printMarketFarms()const;
};

#endif /* MARKET_H_ */
