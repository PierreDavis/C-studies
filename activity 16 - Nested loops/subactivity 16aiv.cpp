
//Program that loops for loop count 5 times.
#include <iostream>

using namespace std;

int main()
{
    int number, num, count;


    while (number != 0)
    {
        //prompt the user for a number
        cout << "Enter an integer (0 to end): ";
        cin >> number;
        num = number;
        //Determine the number of digits in the number
        if (num != 0)
        {
            count = 0;
            do
            {
                count++;
                num /= 10;
            }while (num !=0);

            cout << number << "contains " << count << " digit(s)" << endl;
        }
    }

    return 0;
}


