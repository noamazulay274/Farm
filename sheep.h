/*
 * sheep.h
 *
 *  Created on: Dec 25, 2021
 *      Author: ise
 */

#ifndef SHEEP_H_
#define SHEEP_H_

#include "Animal.h"

class sheep: public Animal {
	static int cost;
	virtual void show()const;

public:

	sheep();
	virtual ~sheep();
	static int get_cost();

};

#endif /* SHEEP_H_ */
