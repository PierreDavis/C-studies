
//Program that loops for loop count 5 times.
#include <iostream>

using namespace std;

int main()
{

    int plays;
    char toss;
    float r2,total,countt;
    float cal = 1;

    cout << "How many times must the game be played? " << endl;
    cin >> plays;
    for(int i = 1; i <= plays; i++)
    {
        cout << "Please toss a coin " << endl;
        cin >> toss;
        cal *= 2 ;
        if(toss == 'H')
        {
            cout << "The payoff is " << cal <<endl;
            total +=cal;
            cal = 1;
            countt++;
        }
    }
    total /= countt;
    cout << "The average for the payoffs is: " << total;
    return 0;
}



