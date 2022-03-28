/*
 * bankMain.cpp
 *
 *  Created on: 28-Mar-2022
 *      Author: swast
 */

#include "creditcard.h"
#include "gold.h"
#include "silver.h"
#include "bronze.h"
#include <iostream>
#include "offervisitor.h"

using namespace std;

int main() {

	creditcard *cd = new bronze;
	offervisitor *vGas = new GasOfferVisitor();
	offervisitor *vFood = new FoodOfferVisitor();
	offervisitor *movie = new MovieOfferVisitor();

	cd->accept(vGas);
	cd->accept(vFood);
	cd->accept(movie);

	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;

	creditcard *cd1 = new silver;
	offervisitor *Vg = new GasOfferVisitor();
	offervisitor *vF = new FoodOfferVisitor();
	offervisitor *mv = new MovieOfferVisitor();

	cd1->accept(Vg);
	cd1->accept(vF);
	cd1->accept(mv);

	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;

	creditcard *cd2 = new silver;
	offervisitor *Vg1 = new GasOfferVisitor();
	offervisitor *vF1 = new FoodOfferVisitor();
	offervisitor *mv1 = new MovieOfferVisitor();

	cd1->accept(Vg1);
	cd1->accept(vF1);
	cd1->accept(mv1);

	return 0;
}

