//discount program
#include <iostream>
#include <string>
using namespace std;

int main()
{
float disc, price, totalPrice;
const float DISC = 0.1;
const int THRES = 200;
cout << "Please enter a price for the product: ";
cin >> price;
if (price <= THRES)
{
    totalPrice = price * DISC;
    cout << "============"<< endl;
    cout << "Was: R:\t " << price << endl;
    cout << "Discount: 10%\t"<< endl;
    cout << "Now: R:\t " << totalPrice << endl;
    cout << "============"<< endl;
}
else
{
    cout << "Please enter a discount: ";
    cin >> disc;
    disc = disc / 100;
    totalPrice = price * disc;
    cout << "============"<< endl;
    cout << "Was: R:\t " << price << endl;
    cout << "Discount:" << disc * 100 << "%" << endl;
    cout << "Now: R:\t " << totalPrice << endl;
    cout << "============"<< endl;
}
return 0;
}
