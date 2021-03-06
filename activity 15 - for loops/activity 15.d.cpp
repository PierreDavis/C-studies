// program that calculate floating point numbers
#include <iostream>
#include <string>

using namespace std;

int main()
{
    float a, x;
    const float TOLERANCE = 0.00001;

    cout << "Enter a floating point number greater than 1: ";
    cin >> a;

    for (x = a; x*x -a > TOLERANCE; x = (x + a/x)/2)
        cout << x << endl;

    cout << "The answer is " << x << endl;

    return 0;
}
