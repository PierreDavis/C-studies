//program that calculates wages based on hours worked.
#include <iostream>
#include <string>
using namespace std;

int main ()
{
    int length, width, thickness;
    const float RATE1= 2.50;
    const float RATE2= 5;
    const float RATE3= 6.25;
    float totalCost;
    int w1,l1,t1,w2,l2,t2,w3,l3,t3;
    bool check = false;
    w1 = 120;
    w2 = 176;
    w3 = 250;
    l1 = 235;
    l2 = 250;
    l3 = 353;
    t1 = 5;
    t2 = 10;
    t3 = 6.25;
    cout << "Please enter length" << endl;
    cin >> length;
    cout << "Please enter width" << endl;
    cin >> width;
    cout << "Please enter thickness" << endl;
    cin >> thickness;

    if(width < w1)
        totalCost = RATE1;
    else if(width > w1 && width <w2)
        totalCost = RATE2;
    else if(width > w2 && width < w3)
        totalCost = RATE3;
    else if(length < l1)
        totalCost = RATE1;
    else if(length > l1 && length < w2)
        totalCost = RATE2;
    else if(length > l2 && length < l3)
        totalCost = RATE3;
    else if(thickness < t1)
        totalCost = RATE1;
    else if(thickness > t1 && thickness <t2)
        totalCost = RATE2;
    else if(thickness > t2 && thickness < t3)
        totalCost = RATE3;
    else
        check = true;

    if(check == true)
        cout << "message must be regarded as a parcel";
    else
        cout << "Thank you, you letter costs: R" << totalCost;
    return 0;
}




