//Range of integers between 10 and 20.  Tests whether number selected is between those numbers
#include <iostream>
#include <string>

using namespace std;

int main()
{
 int x, y;
 bool factorFound = false;
 cout << "Enter a positive integer: ";
 cin >> y;
 x = 2;
 while (x != y)
 {
     //test if x is a factor of y
     if(y % x == 0 && !factorFound)

        factorFound = true;
        x++;
 }
 if (x==y)
    cout << y << " is prime!" <<endl;
 else
    cout << y << " is not prime" << endl;
    return 0;
}



