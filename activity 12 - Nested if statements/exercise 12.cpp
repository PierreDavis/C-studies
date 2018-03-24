//program that calculates wages based on hours worked.
#include <iostream>
#include <string>
using namespace std;

int main ()
{
    int startTime, endTime,storeBegin,storeEnd;
    const float AFT_RATE = 32.50;
    const float EVN_RATE = 44;
    float salary, totalSalary;
    bool afternoonStart, eveningStart,afternoonEnd, eveningEnd;
    // startTime for the waitron or waitress:


    cout << "Please enter a start time: " <<endl;
    cin >> startTime;
    cout << "Please enter a finishing time: " << endl;
    cin >> endTime;
    storeBegin = startTime;
    storeEnd = endTime;

    afternoonStart = startTime >= 1 && startTime <= 6;
    afternoonEnd = endTime >= 1 && endTime < 6;
    // end Time for the waitron or waitress:
    eveningStart = startTime >= 6 && startTime < 12;
    eveningEnd = endTime > 6 && endTime < 12;
    // note I could just use 6 for both eventualities as the segment are divided in 6 hour shifts.
    if (endTime > startTime)
    {
        if(afternoonStart || afternoonEnd)
        {
            if(eveningEnd)
            {
                salary = (6 - startTime) * AFT_RATE;
            }
            else
            {
                salary = (endTime - startTime) * AFT_RATE;
            }
        }
        if(eveningStart || eveningEnd)
        {
            startTime -= 6;
            endTime -= 6;
            if(afternoonStart)
            {
                startTime = 0;
                salary += (endTime) * EVN_RATE;
            }
        else
            salary += (endTime - startTime) * EVN_RATE;
        }
        cout << "wage calculation" << endl;
        cout << "================" << endl;
        cout << "Starting time: " << storeBegin << endl;
        cout << "Finishing time: " << storeEnd<< endl << endl;
        cout.setf(ios::fixed);
        cout.precision(2);
        cout << "The payment is R" << salary;
    }
    else
    {
        cout << "You cannot have a end time less than a start time";
    }
}


