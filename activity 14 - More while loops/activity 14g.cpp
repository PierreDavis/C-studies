// calculate the average of a list of integers
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int value, sum, many;
    float average;
    sum = 0;
    many = 0;
    int x = 0;
    cin >> value;
    while (value != x)
    {
        many++;
        sum += value;
        cout << "The sum so far is " << sum << endl;
        cin >> value;

    }

    average = float(sum) / many;
    cout << "The average is " << average << endl;

    return 0;

}





