/*
 * bronze.cpp
 *
 *  Created on: 28-Mar-2022
 *      Author: swast
 */

#include "bronze.h"
#include <iostream>
#include "offervisitor.h"
#include "creditcard.h"

using namespace std;

void bronze::getName()
{
	cout << "Bronze Credit Card" << endl;
}

void bronze::accept(offervisitor *v)
{
	v->visitBronzeCreditCard(this);
}
