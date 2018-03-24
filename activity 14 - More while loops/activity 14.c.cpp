#include <iostream>
#include <string>
using namespace std;

int main()
{
    //variables
    int rainfall;
    int i = 1; //initialise variable
    float totalRainfall = 0.00;
    while (i < 12)
    {
        totalRainfall += rainfall;
        cin >> rainfall;
        i++;
    }
    cout << totalRainfall;
    return 0;
}


