// calculates the number of years it will take the population to reach 1 million.
#include <iostream>
#include <string>
using namespace std;

int main()
{

    float x,y;
    y = 0;
    while(x != 0)
    {
        cout << "Please enter a value for x: " << endl;
        cin >> x;
        y = (x * x * x) - (3*x) + 1;
        cout << " Y = " << y << endl;
        cout << "============"<< endl;
    }
}




