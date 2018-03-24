//Range of integers between 10 and 20.  Tests whether number selected is between those numbers
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int num;
    bool check = false;
    cout << "Please provide a number between 10 and 20: " << endl;
    cin >> num;
    while (check != true)
    {

        cout << num << " is not between 10 and 20!" << endl;
        cin >> num;
        if( num > 10 && num < 20)
            check = true;
    }
    cout << "Thank you, your number is: " << num;
    return 0;
}

