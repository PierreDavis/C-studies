//write program that accepts name strings and outputs result
#include <iostream>
#include <string>
using namespace std;

int main()
{
   string firstName,lastName,title;

   cout << "Please enter first name and last name: ";
   cin >> firstName;

   cin >> lastName;
   cin.get();
   cout << "Please enter title ";
   cin >> title;
   getline(cin,lastName,'\n');
   cout << lastName << ", " << title << ", " << firstName;

   return 0;
}
