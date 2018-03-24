#include <iostream>
using namespace std;
int main()
{
    int mnum1, snum1, mnum2, snum2;

    cout << "Please enter the two times: " << endl;
    cin >> mnum1 >> snum1 >> mnum2 >> snum2;
    cout << "The total time is: " << mnum1 + mnum2 + ( (snum1 + snum2) / 60 ) << "and " << (snum1 + snum2) % 60 ;
}
