
#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    const double VAT_RATE = 0.15;

    int productCode = 40712;
    int quantity = 3;
    double unitPrice = 29.99;
    char category = 'G';

    double subtotal = quantity * unitPrice;
    double vat = subtotal * VAT_RATE;
    double total = subtotal + vat;

    cout << fixed << setprecision(2);

    cout << "Product " << productCode
         << " (" << category << ")" << endl;

    cout << "Subtotal: R" << subtotal << endl;
    cout << "VAT: R" << vat << endl;
    cout << "Total: R" << total << endl;

    return 0;
}
