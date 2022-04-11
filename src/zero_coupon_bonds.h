//
// Created by Artem Firsov on 11.04.22.
//

#ifndef QUANT_LEARN_ZERO_COUPON_BONDS_H
#define QUANT_LEARN_ZERO_COUPON_BONDS_H


class ZeroCouponBonds {
private:
    double principal;
    double maturity;
    double interestRate;

    const double presentValue(double x, double n);

public:
    ZeroCouponBonds(double principal, double maturity, double interestRate);

    const double calculatePrice();

};


#endif //QUANT_LEARN_ZERO_COUPON_BONDS_H
