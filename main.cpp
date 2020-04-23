#include <iostream>
#include "Fraction.h"
#include "Fraction.cpp"
#include "FractionCalculator.h"
using namespace std;

int main()
{
    Fraction obj1 , obj2 , TempResult;
    FractionCalculator Result;

    int choose;
    string Answer;
    do
    {
        cout<<"Enter Object1: \n";
    cin>>obj1;
    cout<<"Enter Object2: \n";
    cin>>obj2;
    if(obj2.getInum2()==0)
        throw "Error";
        cout<<"1)Do Addition\n";
    cout<<"2)Do Subtraction\n";
    cout<<"3)Do Division\n";
    cout<<"4)Do Multiplication\n";
    cout<<"5)Reduce Fraction\n";
    cout<<"Choose one operation from the previous: ";
    cin>>choose;
        if(choose==1)
        {
            TempResult = obj1 + obj2;
            cout<<"The Addition = "<<Result.PerformAddition(obj1 , obj2)<<endl;
        }
        else if(choose==2)
        {
            TempResult = obj1 - obj2;
            cout<<"The Subtraction = "<<Result.PerformSubtarction(obj1 , obj2)<<endl;
        }
        else if(choose==3)
        {
            TempResult = obj1 / obj2;
            cout<<"The Division = "<<Result.PerformDivision(obj1 , obj2)<<endl;
        }
        else if(choose==4)
        {
            TempResult = obj1 * obj2;
            cout<<"The Multiplication = "<<Result.PerformMultipliction(obj1 , obj2)<<endl;
        }
        else if(choose==5)
        {
           if(TempResult.getInum2()==0)
           {
               cout<<"There is no operation\n";
           }
           else
           {
                cout<<"The NewNumber = "<<Result.Reduce(TempResult)<<endl;
           }
        }
        cout<<"Do you want to do enter another numbers?"<<endl;
        cin>>Answer;


    }while(Answer=="Yes"||Answer=="yes");
    return 0;
}
