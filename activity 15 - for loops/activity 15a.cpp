#include <iostream>
#include <string>
using namespace std;

int main()
{

    float rand, interest;
    int years;
    int i;
    cout << "Enter an amount of Rands: " << endl;
    cin >> rand;
    cout << "Enter the interest rate: " << endl;
    cin >> interest;
    cout << "Enter the number of years: " << endl;
    cin >> years;
    interest = interest /100 +1;
    for(i = 1; i <= years; i++)
    {
        rand *= interest;
        cout.setf(ios::fixed);
        cout.precision(2);
        cout << "After " << i << " years the amount will be " << rand << endl;
    }

}

