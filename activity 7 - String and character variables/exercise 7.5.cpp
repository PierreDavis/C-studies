//Program that changes words in an English sentence depending on user input.
#include <iostream>
#include <string>
using namespace std;

int main()
{
string sentence;
int rep;
int i = 0;
cout << "Repetitions? ";
cin >> rep;
cout << "Message? ";
cin >> sentence;
cin.get();
getline(cin,sentence,'\n');
while (i < rep)
{
    cout << sentence << endl;
    i++;
}

return 0;
}


