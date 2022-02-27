/*
 * cow.h
 *
 *  Created on: Dec 25, 2021
 *      Author: ise
 */

#ifndef COW_H_
#define COW_H_

#include "Animal.h"

class cow: public Animal {
	static int cost;
	virtual void show()const;
public:
	cow();
	virtual ~cow();
	static int get_cost();

};

#endif /* COW_H_ */
