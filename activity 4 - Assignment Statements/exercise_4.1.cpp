
// Program that converts degrees in fahreinheit to celsius
#include <iostream>

using namespace std;

int main ()
{
    int F, C;
    cout << "Please enter the degrees in fahrenheit";
    cin >> F ;

    F = F - 32;

    C = (5*F) /9;

    cout << C;

    return 0;

}
