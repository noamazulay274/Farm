/*
 * error.cpp
 *
 *  Created on: Jan 5, 2022
 *      Author: ise
 */

#include "error.h"

error::error() {
	// TODO Auto-generated constructor stub

}

error::~error() {
	// TODO Auto-generated destructor stub
}

void cow_error::handle()const
{
	cout<<"Insert valid number of cow farms"<<endl;
}
void sheep_error::handle()const
{
	cout<<"Insert valid number of sheep farms"<<endl;
}
void chicken_error::handle()const
{
	cout<<"Insert valid number of chicken farms"<<endl;
}
