//Calculates total value plus VAT for three products.
#include <iostream>

using namespace std;

int main()
{
    int prod1,prod2,prod3;
    float totalProd;
    const float vat = 1.14;
    cin >> prod1;
    cin >> prod2;
    cin >> prod3;

    totalProd = float(prod1 + prod2 + prod3) /vat + float(prod1 + prod2 + prod3);

    cout << "The total price including VAT is R " << totalProd;
}

