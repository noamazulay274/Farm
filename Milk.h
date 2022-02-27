/*
 * Milk.h
 *
 *  Created on: Dec 25, 2021
 *      Author: ise
 */

#ifndef MILK_H_
#define MILK_H_

#include "Product.h"

class Milk: public Product {
public:
	Milk();
	virtual ~Milk();
	virtual void print_product()const;
};

#endif /* MILK_H_ */
