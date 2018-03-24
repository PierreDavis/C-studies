//program that calculates wages based on hours worked.
#include <iostream>
#include <string>
using namespace std;

int main ()
{
   float i,j;
   char input;
   float result;

   cout << "Please enter two number: " << endl;
   cin >> i >> j;
   cout << "Thank you, which operation would you like to perform, namely A S M or D?" << endl;
   cin >> input;

   switch (input)
   {
        case 'A' :
            result = i + j;
        break;
        case 'S' :
            result = i - j;
        break;
        case 'M' :
            result = i * j;
        break;
        case 'D' :
            if( j != 0)
                result = i / j;
        break;
        default:
            j = 0;
   }
    if(j == 0)
    cout << "Cannot divide by zero! or illegal operation ";
    else
    cout << "Your answer is: " << result;

    return 0;
}
