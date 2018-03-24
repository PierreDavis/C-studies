//Range of integers
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int largest,
        smallest,
        inValue,
        range;

    cout << "Enter a series of numbers (0 to stop)" << endl;
        cin >> inValue;
        smallest = inValue;
        largest = inValue;

    //While loop to process all values until user enters 0
    while (inValue > 0 && inValue < 1001)
    {

        if (inValue > largest)
            largest = inValue;

        if(inValue < smallest)
            smallest = inValue;
        cout<< "Enter value: ";
        cin >> inValue;
    }
    range = largest - smallest;
    cout << endl << "Range is " << range << endl;

    return 0;
}
