/*
 * error.h
 *
 *  Created on: Jan 5, 2022
 *      Author: ise
 */

#ifndef ERROR_H_
#define ERROR_H_
#include <iostream>
using namespace std;
class error {
public:
	error();
	virtual ~error();
	virtual void handle ()const=0;
};

#endif /* ERROR_H_ */
class cow_error :public error
{
public:
	virtual void handle ()const;
};
class sheep_error :public error
{
public:
	virtual void handle ()const;
};
class chicken_error :public error
{
public:
	virtual void handle ()const;
};
