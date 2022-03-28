/*
 * silver.cpp
 *
 *  Created on: 28-Mar-2022
 *      Author: swast
 */

#include "silver.h"
#include <iostream>
#include "creditcard.h"
#include "offervisitor.h"
using namespace std;

void silver::getName()
{
	cout << "Silver Credit Card" << endl;
}


void silver::accept(offervisitor *v)
{
	v->visitSilverCreditCard(this);
}
