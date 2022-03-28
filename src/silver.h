/*
 * silver.h
 *
 *  Created on: 28-Mar-2022
 *      Author: swast
 */

#ifndef SILVER_H_
#define SILVER_H_
#include "creditcard.h"
#include "offervisitor.h"
#include <iostream>

using namespace std;

class silver: public creditcard {
public:
	void getName();
	void accept(offervisitor *v) ;
};

#endif /* SILVER_H_ */
