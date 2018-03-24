//Calculates the number of km per liter km and liters per 100km
#include <iostream>
#include <string>

using namespace std;

int main()
{
 //sets float values
 float km, lt,totalKmPerLiter, totalLtPer100Km;

 cout << "Please input the number of km: ";
 cin >> km;
 cout << "Please input the number of lt: ";
 cin >> lt;
 totalKmPerLiter = km /lt;
 totalLtPer100Km = lt / ( km / 100);
 cout << "km" << '\t' << "litres" << '\t' << "km/L" << '\t' << "1/100km" << endl;
 cout << km << '\t' << lt << '\t' << totalKmPerLiter << '\t' << totalLtPer100Km;
 return 0;

}

