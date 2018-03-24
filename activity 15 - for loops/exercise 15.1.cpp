// program that displays all the odd numbers
#include <iostream>
#include <string>

using namespace std;

int main()
{
    float i,j,input,sum;

    cout << "Enter the end number: ";
    cin >> input;
    input = input - input/2;
    for (i = 1 ; i < input ; i++  )
    {

            j = i * 2 + 1 ;
            cout << j << endl;
            sum += j;
    }
        cout << "This is the sum " << sum;

    return 0;
}

