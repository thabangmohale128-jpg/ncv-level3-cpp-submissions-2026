#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    //Constants
    const double PRICE = 25.50;
    const double VAT =0.15;

    //Variables
    double litres;
    double kilolitres;
    double cost;
    double vatAmount;
    double total;

    //input
    cout << "Enter water usage in litres: ";
    cin >> litres;

    //Calculations
    kilolitres = litres / 1000.0;
    cost = kilolitres * PRICE;
    vatAmount = cost * VAT;
    total = cost + vatAmount;

    //Output
    cout << fixed <<setprecision(2);
    cout << "Water used: " << kilolitres << "KL" << endl;
    cout << "Water cost: R" << cost << endl;
    cout << "VAT: R" << vatAmount << endl;
    cout << "Total bill: R" << total << endl;

    return 0;

}
