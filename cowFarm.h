/*
 * cowFarm.h
 *
 *  Created on: Dec 24, 2021
 *      Author: ise
 */

#ifndef COWFARM_H_
#define COWFARM_H_

#include "Farm.h"
#include "cow.h"


class cowFarm: public Farm {
	virtual void print_farm()const;
public:
	cowFarm();
	virtual ~cowFarm();
	cowFarm(const cowFarm &other);
	virtual void update_farm();
	void buy_anumals();
	virtual void sell_all();
	virtual void add_cowfarm( Farm* other );
	virtual void add_sheepfarm( Farm* other );
	virtual void add_chickenfarm( Farm* other );
	virtual int buy_milk(Product*,int id);
	virtual int buy_wool(Product*,int id);
	virtual int buy_eggs( Product*,int id);
};

#endif /* COWFARM_H_ */
