//Program that works out the total price of a few items
#include <iostream>
#include <string>
using namespace std;

int main()
{
const float VAT_RATE = 0.14;
float price,total,vat,vatIncl;
float DONE = 0.00;
// one must initialise a variable before using it in a while loop!
while (DONE != price)
{
    cout << "Enter the prices of the items: " << endl;
    cin >> price;
    total += price;
}
vat = total * VAT_RATE;
vatIncl = total + vat;
cout<< endl;
cin.setf(ios::fixed);
cin.precision(2); //does not work, need to figure out why.
cout << "The total price is " << vatIncl << endl;

return 0;
}


