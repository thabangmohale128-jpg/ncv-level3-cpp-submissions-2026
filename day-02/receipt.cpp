
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int qtyBread = 2;
    int qtyMilk = 1;
    int qtyMaize = 1;

    double bread = 18.99;
    double milk = 32.50;
    double maize = 79.99;

    double amountBread, amountMilk, amountMaize;
    double total, vat;

    amountBread = qtyBread * bread;
    amountMilk = qtyMilk * milk;
    amountMaize = qtyMaize * maize;

    total = amountBread + amountMilk + amountMaize;
    vat = total * 0.15 / 1.15;

    cout << fixed << setprecision(2);

    cout << "\tMAMA THANDI'S SPAZA\n\n";

    cout << left << setw(18) << "Item"
         << right << setw(5) << "Qty"
         << setw(10) << "Price"
         << setw(10) << "Amount" << endl;

    cout << left << setw(18) << "Bread"
         << right << setw(5) << qtyBread
         << setw(10) << bread
         << setw(10) << amountBread << endl;

    cout << left << setw(18) << "Milk 2 L"
         << right << setw(5) << qtyMilk
         << setw(10) << milk
         << setw(10) << amountMilk << endl;

    cout << left << setw(18) << "Maize meal 5 kg"
         << right << setw(5) << qtyMaize
         << setw(10) << maize
         << setw(10) << amountMaize << endl;

    cout << "\nTOTAL (VAT incl.): R" << total << endl;
    cout << "VAT included: R" << vat << endl;

    return 0;
}
