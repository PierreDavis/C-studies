//program for small business that does packaging and posting
#include <iostream>

using namespace std;

int main ()
{
    int fullBox, items, itemsLeft;

    cin >> items;

    fullBox = items / 20;
    itemsLeft = items % 20;

    cout << "The amount of boxes needed are " << fullBox << " and the amount of items left are " << itemsLeft;

    return 0;
}
