//Program that calculates mass
#include <iostream>
#include <string>
using namespace std;

int main()
{
const float MAX_MASS = 10000.00;
float weight;
weight = 0;
// one must initialise a variable before using it in a while loop!
while (weight < MAX_MASS)
{
    cout << "Enter the weight of the item: " << endl;
    cin >> weight;
    weight += weight;
}
cout << "Maximum weight of the aeroplane has been reached: ";
cin.setf(ios::fixed);
cin.precision(2); //does not work, need to figure out why.
return 0;
}


