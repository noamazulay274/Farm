/*
 * Wool.h
 *
 *  Created on: Dec 25, 2021
 *      Author: ise
 */

#ifndef WOOL_H_
#define WOOL_H_

#include "Product.h"

class Wool: public Product {
public:
	Wool();
	virtual ~Wool();
	virtual void print_product()const;
};

#endif /* WOOL_H_ */
