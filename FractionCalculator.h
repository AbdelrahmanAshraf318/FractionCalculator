#ifndef FRACTIONCALCULATOR_H_INCLUDED
#define FRACTIONCALCULATOR_H_INCLUDED
#include <iostream>
#include "Fraction.h"
using namespace std;

class FractionCalculator
{
    Fraction Result;
public:

    Fraction PerformAddition(Fraction Obj1 , Fraction obj2)
    {
        Result = Obj1 + obj2;
        return Obj1 + obj2;
    }
    Fraction PerformSubtarction(Fraction Obj1 , Fraction Obj2)
    {
         Result = Obj1 - Obj2;
        return Obj1 - Obj2;
    }
    Fraction PerformMultipliction(Fraction Obj1 , Fraction Obj2)
    {
         Result = Obj1 * Obj2;
        return Obj1 * Obj2;
    }
    Fraction PerformDivision(Fraction Obj1 , Fraction Obj2)
    {
         Result = Obj1 / Obj2;
        return Obj1 / Obj2;
    }
    Fraction Reduce(Fraction NewObj)
    {
        return NewObj.ReducingFraction(NewObj);
    }
    Fraction getResult()
    {
        return Result;
    }
};


#endif // FRACTIONCALCULATOR_H_INCLUDED
