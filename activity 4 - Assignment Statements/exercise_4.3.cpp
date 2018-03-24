//value of n after series of statements.
#include <iostream>

using namespace std;

int main()
{
    int n = 10;
    cout << n << endl;
    n += 3;
    cout << n << endl;
    n /= 2;
    cout << n << endl;
    n++;
    cout << n << endl;
    n %= 4;
    cout << n << endl;
    n -= 5;
    cout << n << endl;
    return 0;
}
