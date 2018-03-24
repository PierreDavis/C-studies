// test out a few assignment operators
#include <iostream>
using namespace std;
int main()
{
 int inc, dec, div, multi , inc2 ,dec2;

 cin >> inc >> dec >> div >> multi >> inc2 >> dec2;
 inc += 2;
 dec -=3;
 div /= 5;
 multi *= 5;
 inc2++;
 dec2--;

 cout << inc << " " << dec << " " << div << " " << multi << " " << inc2 << " " << dec2;
}
