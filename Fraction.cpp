#include "Fraction.h"
#include <iostream>
#include <cstring>
#include <string.h>
#include <fstream>
using namespace std;

Fraction::Fraction()
{
    iNum1 = 0;
    iNum2 = 1;
}
Fraction::Fraction(int iNum1 , int iNum2)
{
    this->iNum1 = iNum1;
    try
    {
        if(iNum2==0)
            throw "Bad Input";
        this->iNum2 = iNum2;
    }
    catch(const char *str)
    {
        cerr<<"Invalid Input "<<str<<endl;
    }
}
Fraction Fraction::operator+(Fraction obj)
{
    if(this->iNum2==obj.iNum2)
    {
        Fraction Result;
    Result.iNum1 = this->iNum1 + obj.iNum1;
    Result.iNum2 = this->iNum2;
    return Result;
    }
    else
    {
        Fraction Result;
        Result.iNum2 = this->iNum2 * obj.iNum2;
        Result.iNum1 = (obj.iNum1*this->iNum2) + (this->iNum1*obj.iNum2);
        return Result;
    }
}
Fraction Fraction::operator-(Fraction obj)
{
    Fraction Result;
   if(this->iNum2==obj.iNum2)
   {
        Result.iNum1 = this->iNum1 - obj.iNum1;
    Result.iNum2 = this->iNum2 - obj.iNum2;
   }
   else
   {
       Result.iNum2 = this->iNum2 * obj.iNum2;
       Result.iNum1 = (obj.iNum1*this->iNum2) - (this->iNum1*obj.iNum2);
   }
    try
        {
            if(Result.getInum2()==0)
                throw "Cannot Subtract";
            else
            {
                if(Result.iNum1<0&&Result.iNum2<0)
                {
                    Result.iNum1 = Result.iNum1 * (-1);
                    Result.iNum2 = Result.iNum2 * (-1);
                }
                return Result;
            }
        }
        catch(const char *str)
        {
            cout<<"Invalid: "<<str<<endl;
        }
}
bool Fraction::operator<(Fraction obj)
{
    return this->iNum1<obj.iNum1||this->iNum2<obj.iNum2;
}

bool Fraction::operator<=(Fraction obj)
{
    return this->iNum1<=obj.iNum1||this->iNum2<=obj.iNum2;
}

bool Fraction::operator>(Fraction obj)
{
    return this->iNum1>obj.iNum1||this->iNum2>obj.iNum2;
}
bool Fraction::operator>=(Fraction obj)
{
    return this->iNum1>=obj.iNum1||this->iNum2>=obj.iNum2;
}
Fraction Fraction::operator/(Fraction obj)
{
    Fraction Result;
    Fraction obj2 ;
    obj2.SetNumber1(obj.getInum2());
    obj2.SetNumber2(obj.getInum1());
    Result.iNum1 = this->iNum1 * obj2.iNum1;
    Result.iNum2 = this->iNum2 * obj2.iNum2;
    return Result;
}

Fraction Fraction::operator*(Fraction obj)
{
    Fraction Result;
    Result.iNum1 = this->iNum1 * obj.iNum1;
    Result.iNum2 = this->iNum2 * obj.iNum2;
    return Result;
}

Fraction Fraction::ReducingFraction(Fraction obj)
{
    for(int i = obj.iNum1 * obj.iNum2 ; i>1 ; i--)
    {
        if((obj.iNum1%i==0)&&obj.iNum2%i==0)
        {
            obj.iNum1 = obj.iNum1 / i;
            obj.iNum2 = obj.iNum2 / i;
        }
        else if((obj.iNum1%i!=0)&&obj.iNum2%i!=0&&i==1)
        {
            return obj;
        }
    }
    return obj;
}

void Fraction::SetNumber1(int iNum1)
{
    this->iNum1 = iNum1;
}
void Fraction::SetNumber2(int iNum2)
{
    this->iNum2 = iNum2;
}

int Fraction::getInum1()
{
    return this->iNum1;
}
int Fraction::getInum2()
{
    return this->iNum2;
}

ostream& operator<< (ostream& out, const Fraction& obj)
{
    out<<obj.iNum1<<"/"<<obj.iNum2<<endl;
    return out;
}
istream& operator >> (istream& in , Fraction& obj)
{
    cout<<"Enter Number1: ";
    in>>obj.iNum1;
    cout<<"Enter Number2: ";
    in>>obj.iNum2;
    try
    {
    if(obj.iNum2==0)
        throw "Cannot divide by zero";
     return in;
    }
    catch(const char* str)
    {
        cout<<str<<endl;
    }
}



