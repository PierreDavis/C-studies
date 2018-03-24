//Program that calculates the cost of water usage per unit.
#include <iostream>
#include <string>
using namespace std;

int main ()
{
     int inAgeC,inAgeP;
     float inIncome;
     string inMarStat;
     bool ageC, marStat, income, ageP, check;

     cout << "Please enter your child's age: " <<endl;
     cin >> inAgeC;
     cout << "Please enter your age: " <<endl;
     cin >> inAgeP;
     cout << "Please enter your annual income: " <<endl;
     cin >> inIncome;
     cout << "Please enter your marital status " <<endl;
     cin >> inMarStat;
     ageC = inAgeC > 2 && inAgeC < 6;
     ageP = inAgeP <= 30;
     marStat = inMarStat == "single";
     income = inIncome < 60000;
     check = ageC && ageP && marStat && income;

     if(check)
        cout << "Your toddler is accepted!";
     else
        cout << "Unfortunately, your toddler has not been accepted.";

        return 0;
}

