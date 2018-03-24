#include <iostream>
#include <string>
using namespace std;

int main()
{
    int max, value;

    max = 0;
    do
    {
        cout << "Enter a positive integer: ";
        cin >> value;
        if(value > max)
            max = value;

    } while(value > 0 );


}

