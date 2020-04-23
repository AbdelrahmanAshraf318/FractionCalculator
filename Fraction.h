#ifndef FRACTION_H_INCLUDED
#define FRACTION_H_INCLUDED
using namespace std;
class Fraction
{
private:
    int iNum1 , iNum2;
public:
    Fraction();
    Fraction(int iNum1 , int iNum2);
    Fraction operator+(Fraction obj);
    Fraction operator-(Fraction obj);
    void SetNumber1(int iNum1);
    void SetNumber2(int iNum2);
    int getInum1();
    int getInum2();
    bool operator<(Fraction obj);
    bool operator>(Fraction obj);
    bool operator==(Fraction obj);
    bool operator<=(Fraction obj);
    bool operator>=(Fraction obj);
    Fraction operator/(Fraction obj);
    Fraction operator*(Fraction obj);
    Fraction ReducingFraction(Fraction obj);
    friend ostream& operator << (ostream& out, const Fraction& obj);
    friend istream& operator >> (istream& in , Fraction& obj);
};


#endif // FRACTION_H_INCLUDED
