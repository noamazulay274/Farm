/*
 * Animal.h
 *
 *  Created on: Dec 24, 2021
 *      Author: ise
 */

#ifndef ANIMAL_H_
#define ANIMAL_H_


class Animal {
protected:
	int age;
	int price;
	int death;
	virtual void show()const=0;// pure abstract-only for make Animal to abstract class
public:
	Animal();
	virtual ~Animal();
	int getage()const;
	void nextyear();
	int getprice()const;
	int getDeath()const;


};

#endif /* ANIMAL_H_ */
