//Program that shows the position of a character in the alphabet.
#include <iostream>
using namespace std;

int main()
{
    int conv = 64;
    char char1;
    char char2;
    cout << "Enter an upper case letter: ";
    cin >> char1;
    char2 = char1;
    conv = char1 - conv;
    cout << char2 << " is in position " << conv << " in the alphabet";
    return 0;
}
