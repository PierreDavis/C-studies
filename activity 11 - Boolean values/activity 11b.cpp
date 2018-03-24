//Range of integers between 10 and 20.  Tests whether number selected is between those numbers
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n, m, testNum;

    cout << "Please enter two numbers: " << endl;
    cin >> n >> m;

    while (n == 0)
    {
        cout << "Cannot divide a number by zero, please enter another value other than zero " << endl;
        cin >> n;
    }
    while (testNum != 0){
        cout << "Sorry, please try again " << endl;
        testNum = m % n;
        cin >> n >> m;

    }
    cout << n << " is a factor of " << m;
    return 0;
}


