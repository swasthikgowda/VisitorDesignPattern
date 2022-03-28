/*
 * creditcard.h
 *
 *  Created on: 28-Mar-2022
 *      Author: swast
 */

#ifndef CREDITCARD_H_
#define CREDITCARD_H_
#include <iostream>
//#include "offervisitor.h"
class offervisitor;

using namespace std;

class creditcard {
public:
	virtual void getName()=0;
	virtual void accept(offervisitor *v) = 0;
	virtual ~ creditcard(){}

};

#endif /* CREDITCARD_H_ */
