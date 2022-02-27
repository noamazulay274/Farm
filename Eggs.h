/*
 * Eggs.h
 *
 *  Created on: Dec 25, 2021
 *      Author: ise
 */

#ifndef EGGS_H_
#define EGGS_H_
#include "Product.h"

class Eggs : public Product{
public:
	Eggs();
	virtual ~Eggs();
	virtual void print_product()const;

};

#endif /* EGGS_H_ */
