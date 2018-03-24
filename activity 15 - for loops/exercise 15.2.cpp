#include <iostream>
#include <string>
using namespace std;
int main()
{
    int i;
    char j;
    for(i = 32; i <= 255; i++)
    {
        j = i;
        cout << "" << endl;
        cout << "This is a asci charater " <<  j << " " << i << endl;
    }
}
