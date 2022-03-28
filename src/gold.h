/*
 * gold.h
 *
 *  Created on: 28-Mar-2022
 *      Author: swast
 */

#ifndef GOLD_H_
#define GOLD_H_
#include "creditcard.h"
#include "offervisitor.h"
#include <iostream>

using namespace std;

class gold: public creditcard {
public:

	void getName();
	void accept(offervisitor *v) ;
};

#endif /* GOLD_H_ */
