//program that calculates wages based on hours worked.
#include <iostream>
#include <string>
using namespace std;

int main ()
{

    bool m,b,r,a,f = true;
    char answer;

    cout << "Is the animal warm blooded? " << endl;
    cin >> answer;

    if(answer == 'Y')
    {
        r = false;
        f = false;
    }
    cout << "Does the animal have feathers? "<< endl;
    cin >> answer;

    if(answer == 'Y')
    {
        m = false;
        r = false;
        a = false;
    }
    cout << "Does the animal have fur? " << endl;
    cin >> answer;

    if(answer == 'Y')
    {
        b = false;
    }
    // checks to see which ones are true
    if(r == true)
        cout << "The animal is a reptile ";
    if(m == true)
        cout << "The animal is a mammal ";
    if(b == true)
        cout << "The animal is a bird ";
    if(a == true)
        cout << "the animal is an amphibian ";
    if(f == true)
        cout << "the animal is a fish";

return 0;
}



