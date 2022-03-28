/*
 * offervisitor.cpp
 *
 *  Created on: 28-Mar-2022
 *      Author: swast
 */

#include "offervisitor.h"
#include <iostream>

using namespace std;

void GasOfferVisitor::visitBronzeCreditCard(bronze *bronzeCreditCard) {
	cout << "Gas offer using Bronze Card" << endl;
}

void GasOfferVisitor::visitSilverCreditCard(silver *silverCreditCard) {
	cout << "Gas offer using silver Card" << endl;
}

void GasOfferVisitor::visitGoldCreditCard(gold *goldCreditCard) {
	cout << "Gas offer using Goldr Card" << endl;

}

//--------------------------------------------------------------------------------//

void FoodOfferVisitor::visitBronzeCreditCard(bronze *bronzeCreditCard) {
	cout << "Food offer using Bronze Card" << endl;
}
void FoodOfferVisitor::visitSilverCreditCard(silver *silverCreditCard) {
	cout << "Food offer using Silver Card" << endl;
}
void FoodOfferVisitor::visitGoldCreditCard(gold *goldCreditCard) {
	cout << "Food offer using Gold Card" << endl;
}

//--------------------------------------------------------------------------------//
void MovieOfferVisitor::visitBronzeCreditCard(bronze *bronzeCreditCard)
{
	cout << "Movie offer using Bronze Card" << endl;
}
void MovieOfferVisitor::visitSilverCreditCard(silver *silverCreditCard)
{
	cout << "Movie offer using silver Card" << endl;
}
void MovieOfferVisitor::visitGoldCreditCard(gold *goldCreditCard)
{
	cout << "Movie offer using Gold Card" << endl;
}
