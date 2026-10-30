#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
    const double VAT_RATE = 0.15;
    int learners = 32;
    double fee = 450.00;
    double total = learners * fee;

    cout << fixed << setprecision(2);
    cout << "Total fees: R" << total << endl;

    return 0;
}
