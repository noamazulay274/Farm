/*
 * sheepFarm.h
 *
 *  Created on: Dec 25, 2021
 *      Author: ise
 */

#ifndef SHEEPFARM_H_
#define SHEEPFARM_H_

#include "Farm.h"
#include "sheep.h"


class sheepFarm: public Farm {
	void print_farm()const;
public:
	sheepFarm();
	virtual ~sheepFarm();
	virtual void update_farm();
	virtual void buy_anumals();
	static int get_num_of_sheep_farms();
	virtual void sell_all();
	virtual void add_cowfarm( Farm* other );
	virtual void add_sheepfarm( Farm* other );
	virtual void add_chickenfarm( Farm* other );
	virtual int buy_milk(Product*,int id);
	virtual int buy_wool(Product*,int id);
	virtual int buy_eggs( Product*,int id);

};

#endif /* SHEEPFARM_H_ */
