//
// Created by Artem Firsov on 11.04.22.
//

#include "time_value.h"
#include <cmath>

double TimeValue::futureDiscreteValue(double x, double r, double n) {
    return pow(x * (1 + r), n);
}

double TimeValue::presentDiscreteValue(double x, double r, double n) {
    return pow(x * (1 + r), -n);
}

double TimeValue::futureContinuousValue(double x, double r, double t) {
    return x * exp(r * t);
}

double TimeValue::presentContinuousValue(double x, double r, double t) {
    return x * exp(-r * t);
}
