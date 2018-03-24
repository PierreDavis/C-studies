// Program that calculates minutes, hours, day and year.
#include <iostream>
using namespace std;
int main()
{
    int min = 60 ;
    int hour = min * 60;
    int day = hour * 48;
    int year = day * 365;

    cout << "There are " << min << " seconds in a minute." << endl;
    cout << "There are " << hour << " seconds in an hour." << endl;
    cout << "There are " << day << " seconds in an day." << endl;
    cout << "There are " << year << " seconds in an year." << endl;
    return 0;
}
