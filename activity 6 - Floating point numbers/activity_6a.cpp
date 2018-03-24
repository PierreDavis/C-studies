//Calculates total value plus VAT for three products.
#include <iostream>

using namespace std;

int main()
{
    float prod1,prod2,prod3,totalProdIncl,totalProdExcl;
    const float VAT = 0.14;
    cout << "Please put in the value of the first product " << endl;
    cin >> prod1;
    cout << "Please put in the value of the second product " << endl;
    cin >> prod2;
    cout << "Please put in the value of the third product " << endl;
    cin >> prod3;
    totalProdExcl = prod1 + prod2 + prod3;
    totalProdIncl = totalProdExcl * VAT + totalProdExcl ;
    cout << "The total price including VAT is " << totalProdIncl;
}

