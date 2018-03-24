//Program that determines which years will be leap years.
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int inputYears,leapYear, leapYearCount, startYear, leapYearCheck;
    string output;
    cout << "How many years? " << endl;
    cin >> inputYears;
    cout << "Start year? " << endl;
    cin >> startYear;

    for(leapYearCount = 1; leapYearCount <= inputYears; leapYearCount++)
    {
        leapYearCheck = startYear % 4;

        if(leapYearCheck == 0)
        {
            output = " it is a leap year!";
            cout << startYear << "," << output << endl;
        }
        else
        {
            output = " it is not a leap year!";
            cout << startYear << "," <<  output << endl;
        }
        startYear++;
    }
    return 0;
}
