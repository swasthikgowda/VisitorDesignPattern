/*
 * gold.cpp
 *
 *  Created on: 28-Mar-2022
 *      Author: swast
 */

#include "gold.h"
#include "creditcard.h"
#include "offervisitor.h"
#include <iostream>

using namespace std;

void gold::getName()
{
	cout << "Gold Credit Card" << endl;
}
void gold::accept(offervisitor *v)
{
	v->visitGoldCreditCard(this);
}
