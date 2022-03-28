/*
 * offervisitor.h
 *
 *  Created on: 28-Mar-2022
 *      Author: swast
 */

#ifndef OFFERVISITOR_H_
#define OFFERVISITOR_H_
//#include "bronze.h"
#include "creditcard.h"

class bronze;
class silver;
class gold;

class offervisitor {
public:
	virtual void visitBronzeCreditCard(bronze *bronzeCreditCard) = 0;
	virtual void visitSilverCreditCard(silver *silverCreditCard) = 0;
	virtual void visitGoldCreditCard(gold *goldCreditCard) = 0;

};
class GasOfferVisitor: public offervisitor {
public:
	void visitBronzeCreditCard(bronze *bronzeCreditCard);
	void visitSilverCreditCard(silver *silverCreditCard);
	void visitGoldCreditCard(gold *goldCreditCard);

};
class FoodOfferVisitor: public offervisitor {
public:
	void visitBronzeCreditCard(bronze *bronzeCreditCard);
	void visitSilverCreditCard(silver *silverCreditCard);
	void visitGoldCreditCard(gold *goldCreditCard);

};
class MovieOfferVisitor: public offervisitor {
public:
	void visitBronzeCreditCard(bronze *bronzeCreditCard);
	void visitSilverCreditCard(silver *silverCreditCard);
	void visitGoldCreditCard(gold *goldCreditCard);

};

#endif /* OFFERVISITOR_H_ */
