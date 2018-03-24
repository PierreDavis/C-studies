// Program written to show the length and width of a room
#include <iostream>

using namespace std;

int main()
{
    float length, width,totalPrice,area;
    const float PRICE = 59.50;

    cout << "Please enter the total length of the room " << endl;
    cin >> length;
    cout << "Please enter the total width of the room " << endl;
    cin >> width;
    area = length * width;
    totalPrice = area * PRICE;
    cout.setf(ios::fixed);
    cout.precision(3);
    cout << "The total Price per square meter of the room is " << totalPrice;
    return 0;
}



