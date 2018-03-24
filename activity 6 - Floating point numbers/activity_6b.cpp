//Calculates average of three marks.
#include <iostream>

using namespace std;

int main()
{
    int mark1,mark2,mark3,totalMarks;
    const float AVE_OUT_OF = 3;
    float totalAvg;

    cin >> mark1 >> mark2 >> mark3;
    totalMarks = mark1 + mark2 + mark3;
    totalAvg = totalMarks / AVE_OUT_OF ;
    cout << "The average mark is " << totalAvg;
}

