// Illustrates the getline function
#include <iostream>
#include <string>
using namespace std;

int main()
{
int n;
string s;
cout << "Enter a number: ";
cin >> n;
cin.get();
cout << "Enter a sentence: ";
getline(cin,s,'\n');

cout << "The number is " << n << endl;
cout << "The sentence is " << s << endl;
return 0;
}


