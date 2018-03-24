//Rearrange the title, first name and surname as input
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string title,firstName,surname,fullName;
    char initial;

    //Input the name
    cout << "Enter the title: ";
    cin >> title;

    cout << "Enter the first name: ";
    cin >> initial >> firstName; // when the user puts in the first letter then it is grabbed
    cin.get()
    cout << "enter the surname: " ;
    getline(cin,surname,'\n');

    //Output the rearranged name
    fullName = surname + ", " + title + ", " + initial + ". ";
    cout << "the rearranged name is " << fullName << endl;
    return 0;
}
