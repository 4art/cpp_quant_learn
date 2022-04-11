#include <iostream>
#include "time_value.h"
#include "zero_coupon_bonds.h"

void timeValue();

int main() {
    timeValue();
    ZeroCouponBonds *pBonds = new ZeroCouponBonds(1000, 2, 4);
    std::cout << "Zero bond present price: " << pBonds->calculatePrice() << std::endl;
    return 0;
}

void timeValue() {
    double x = 100;
    double r = 0.05;
    double n = 5;
    std::cout << "Future value (discrete model): " << TimeValue::futureDiscreteValue(x, r, n) << std::endl;
    std::cout << "Present value (discrete model): " << TimeValue::presentDiscreteValue(x, r, n) << std::endl;
    std::cout << "Future value (continuous model): " << TimeValue::futureContinuousValue(x, r, n) << std::endl;
    std::cout << "Present value (continuous model): " << TimeValue::presentContinuousValue(x, r, n) << std::endl;
}
