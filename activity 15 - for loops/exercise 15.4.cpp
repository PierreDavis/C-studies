#include <iostream>
#include <string>
using namespace std;
int main()
{
    int i;
    for(i = 10; i > 0; i--)
    {

        if (i == 1)
        {
            cout << "There was " << i << " in the bed" << endl;
            cout << "And the little one said:" << endl;
            cout << "Good night!";
        }
        else
        {
            cout << "There were " << i << " in the bed" << endl;
            cout << "And the little one said: " << endl;
            cout << "Roll over, roll over!" << endl;
            cout << "so they all rolled over, " << endl;
            cout << "And one fell out, " << endl;
        }
    }
}

