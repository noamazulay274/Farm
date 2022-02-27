/*
 * chicken.h
 *
 *  Created on: Dec 25, 2021
 *      Author: ise
 */

#ifndef CHICKEN_H_
#define CHICKEN_H_

#include "Animal.h"

class chicken: public Animal {
	static int cost;
	virtual void show()const;
public:
	chicken();
	virtual ~chicken();
	static int get_cost();

};

#endif /* CHICKEN_H_ */
