// Age calculates the age your mother was when you were born
#include <iostream>
using namespace std;

int yage, mage;
int main()
{

    cout << "Enter your mom's age and your age: ";
    cin >> mage >> yage;
    cout << "Your mom was " << mage - yage << " years old when you were born." << endl;
    return 0;

}
