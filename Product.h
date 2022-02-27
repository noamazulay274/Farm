/*
 * Product.h
 *
 *  Created on: Dec 25, 2021
 *      Author: ise
 */

#ifndef PRODUCT_H_
#define PRODUCT_H_
#include <iostream>
using namespace std;
class Product {
protected:
	int price;
	int num;
public:
	Product();
	virtual ~Product();
	int get_price()const;
	int get_num()const;
	virtual void print_product() const =0;//each product have his print func
	bool set_num(int);


};

#endif /* PRODUCT_H_ */
