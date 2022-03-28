/*
 * bronze.h
 *
 *  Created on: 28-Mar-2022
 *      Author: swast
 */

#ifndef BRONZE_H_
#define BRONZE_H_
#include "creditcard.h"
#include "offervisitor.h"
#include <iostream>

using namespace std;

class bronze:public creditcard
{
public:
	void getName();
	void accept(offervisitor *v) ;
};

#endif /* BRONZE_H_ */
