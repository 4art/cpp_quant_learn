//
// Created by Artem Firsov on 11.04.22.
//

#include "zero_coupon_bonds.h"
#include<cmath>

ZeroCouponBonds::ZeroCouponBonds(double principal, double maturity, double interestRate) {
    this->principal = principal;
    this->maturity = maturity;
    this->interestRate = interestRate / 100;
}

const double ZeroCouponBonds::presentValue(double x, double n) {
    return pow(x / (1 + this->interestRate), n) / 1000;
}

const double ZeroCouponBonds::calculatePrice() {
    return this->presentValue(this->principal, this->maturity);
}
