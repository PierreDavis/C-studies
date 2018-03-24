#include <iostream>
using namespace std;
int main()
{
    int F;

    cout << "Please enter temperature? " << endl;
    cin >> F ;
    cout << "The temperature in Celsius is: "
    << (5 * (F - 32)) / 9 ;
    return 0;
}
