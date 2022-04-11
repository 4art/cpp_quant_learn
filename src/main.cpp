#include <iostream>
#include "time_value.h"

void timeValue();

int main() {
    timeValue();
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
