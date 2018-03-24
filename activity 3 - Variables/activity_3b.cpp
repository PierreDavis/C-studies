// calculate two numbers
#include <iostream>
using namespace std;
int main()
{
    int f,s;
    cout << "Enter two numbers: ";
    cin >> f >> s;
    cout << "The remainder of " << f << " divided by " << s << " is " << (f/s) * s - f << endl;
    return 0;
}
