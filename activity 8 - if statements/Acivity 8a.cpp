//asks for income tax and displays result on screen
#include <iostream>
#include <string>
using namespace std;

int main()
{

float salary, totalSalary;
const float THRESHOLD = 70000;


cout << "Please enter your yearly salary: ";
cin >> salary;
if (salary <= THRESHOLD)
{
    totalSalary = salary * 0.3;
}
else
{
    totalSalary = salary * 0.4;
}
cout << "Your total salary is: " << totalSalary;

return 0;
}
