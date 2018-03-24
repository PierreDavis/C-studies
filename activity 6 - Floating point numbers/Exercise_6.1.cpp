// Program written to show the length and width of a room
#include <iostream>

using namespace std;

int main()
{
    float length, width;
    float area;

    cout << "Please enter the total length of the room " << endl;
    cin >> length;
    cout << "Please enter the total width of the room " << endl;
    cin >> width;
    area = length * width;
    cout.setf(ios::fixed);
    cout.precision(3);
    cout << "The total area of the room is " << area;
    return 0;
}


