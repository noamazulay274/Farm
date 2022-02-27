/*
 * chickenFarm.h
 *
 *  Created on: Dec 25, 2021
 *      Author: ise
 */

#ifndef CHICKENFARM_H_
#define CHICKENFARM_H_

#include "Farm.h"
#include "chicken.h"



class chickenFarm: public Farm {

	virtual void print_farm()const;
public:
	chickenFarm();
	virtual ~chickenFarm();
	virtual void update_farm();
	virtual void buy_anumals();
	virtual void sell_all();
	virtual void add_cowfarm( Farm* other );
	virtual void add_sheepfarm( Farm* other );
	virtual void add_chickenfarm( Farm* other );
	virtual int buy_milk(Product*,int id);
	virtual int buy_wool(Product*,int id);
	virtual int buy_eggs( Product*,int id);


};

#endif /* CHICKENFARM_H_ */
