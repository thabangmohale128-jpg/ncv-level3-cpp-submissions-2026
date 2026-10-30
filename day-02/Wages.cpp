#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const double OVERTIME_FACTOR = 1.5;
    const double UIF_RATE = 0.01;

    double hourlyRate, ordinaryHours, overtimeHours;
    double ordinaryPay, overtimePay, grossPay;
    double uif, payAfterUIF;

    cout << "Enter hourly rate: R";
    cin >> hourlyRate;

    cout << "Enter ordinary hours worked: ";
    cin >> ordinaryHours;

    cout << "Enter overtime hours worked: ";
    cin >> overtimeHours;

    ordinaryPay = ordinaryHours * hourlyRate;

    overtimePay = overtimeHours * hourlyRate * OVERTIME_FACTOR;

    grossPay = ordinaryHours + overtimePay;

    uif = grossPay * UIF_RATE;

    payAfterUIF = grossPay - uif;

    cout << fixed << setprecision(2);

    cout << "\nOrdinary pay: R" << ordinaryPay << endl;
    cout << "Overtime pay: R" << overtimePay << endl;
    cout << "Gross pay: R" << grossPay << endl;
    cout << "UIF deduction: R" << uif << endl;
    cout << "Pay after UIF: R" << payAfterUIF << endl;

    return 0;

}
