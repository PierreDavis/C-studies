// calculates the number of years it will take the population to reach 1 million.
#include <iostream>
#include <string>
using namespace std;

int main()
{
    const float popIncrease = 0.10;
    float input;
    float yearlyIncrease = 0;
    int years = 0;
    int exceeds = 1000000;
    cout << "Please input the population amount: " << endl;
    cin >> input;
    yearlyIncrease = input;
    while (yearlyIncrease <= exceeds)
    {
        yearlyIncrease += yearlyIncrease * popIncrease;
        years++;
    }

    cout << "It will take " << years << " year for the population to reach " << exceeds;
}



