//Program that works out the total price of a few items
#include <iostream>
#include <string>
using namespace std;

int main()
{

float savings, deposit, interestCal;
const float interest = 4.5;
int i = 0;
const int age18 = 18;
savings = 1000;
deposit = 500;
interestCal = (savings + deposit) * (interest/100);
while(i < age18)
{
    savings += deposit + interestCal;
    interestCal = (savings + deposit) * (interest/100);
    i++;
}
cout << "The amount saved up on bongis' 18th birthday is: " << savings;
return 0;
}
