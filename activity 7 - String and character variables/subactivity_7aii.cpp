// Asks name and displays name
#include <iostream>
#include <string>
using namespace std;

int main()
{
   string name;

   cout << "Please enter your name: ";
   getline(cin, name,'\n');
   cout <<"Hi " << name << ", pleased to meet you!";
   return 0;
}

