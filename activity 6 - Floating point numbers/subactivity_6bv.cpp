//Calculates average of three marks.
#include <iostream>

using namespace std;

int main()
{
    int mark1,mark2,mark3;
    float totalMarks;
    const float AVE_OUT_OF = 3;

    cin >> mark1 >> mark2 >> mark3;
    totalMarks = mark1 + mark2 + mark3 / 3;
    cout << "The average mark is " << totalMarks;
}


