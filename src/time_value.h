//
// Created by Artem Firsov on 11.04.22.
//

#ifndef YAHOO_FINANCE_TIME_VALUE_H
#define YAHOO_FINANCE_TIME_VALUE_H


class TimeValue {
public:
    static double futureDiscreteValue(double x, double r, double n);
    static double presentDiscreteValue(double x, double r, double n);
    static double futureContinuousValue(double x, double r, double t);
    static double presentContinuousValue(double x, double r, double t);
};


#endif //YAHOO_FINANCE_TIME_VALUE_H
