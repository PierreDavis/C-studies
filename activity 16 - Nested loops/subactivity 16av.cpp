
//Program that loops for loop count 5 times.
#include <iostream>

using namespace std;

int main()
{

 int entryNum,score;

 cout << "Please enter an entry number? " << endl;
 cin >> entryNum;

 while(entryNum != 0)
 {
     int totalScore = 0;
     for( int i = 1; i <=10; i++ )
     {
         cout << "Please enter a score judge number " << i << endl;
         cin >> score;
         cout << "==================" <<endl;
         cout <<"The " << i << " score is " << score << endl;
         totalScore +=score;
     }
     cout << "Dog with entry number " << entryNum << " total score is " << totalScore << " out of a hundred" << endl;
     cin >> entryNum;
 }

    return 0;
}



