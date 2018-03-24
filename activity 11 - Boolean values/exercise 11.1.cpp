//Program that calculates the cost of water usage per unit.
#include <iostream>
#include <string>
using namespace std;

int main ()
{
    string name;
    float input;
    float result, i, j;
    bool fixed, more40 , more100,stop, start,check20;

    cout << "Please enter your name " << endl;
    cin >> name;
    getline(cin,name,'\n');
    cout << "Please enter the amount of units used: " <<endl;
    cin >> input;
    check20 = input == 20;
    input -= 20;
    start = input > 0;
    stop = input != 0;
    fixed = input > 0 && input < 20;
    more40 = input > 20 && input < 80;
    more100 = input > 80;
    i = 10 * 1.5;
    j = 10 * 2;
    if (start)
    {
        while (stop && check20)
        {
            if(fixed)
            {
                // takes the units that cost R10.00 and multiplies it with R10.00
                result = input * 10;
            }
            if(more40)
            {
                // subtracts the 20 units from input that cost R10.00, multiplies the remainder with 1.5, multiplies the subtracted units with R10.00 and sums the results
                input -= 20;
                result =  input * i + (20 * 10);
            }
            if (more100)
            {
                // subtracts 100 from input, multiplies input with the moreFixedRate,
                input -= 80;
                result =  input * j  + 20 * 10 + 60 * i;
            }
            cout << name << " your outstanding account amounts to: " << result << endl;
            cout << "Please enter next customer name " << endl;
            cin >> name;
            getline(cin,name,'\n');
            cout << "Please enter the amount of units used: " <<endl;
            cin >> input;
            stop = input != 0;
            check20 = input == 20;
        }
    }
    if (check20 = input == 20;)
        result = input * -1;
        while(stop && check20)
        {
            cout << name <<" you have not used " << result << " of your free units or you have no outstanding debits" << endl;
            cout << "Please enter your name " << endl;
            cin >> name;
            getline(cin,name,'\n');
            cout << "Please enter the amount of units used: " <<endl;
            cin >> input;
            stop = input != 0;
        }
        return 0;
}
