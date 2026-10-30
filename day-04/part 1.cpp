#include <iostream>
using namespace std;

//function
void getNumbers(double &num1, double &num2);
void sum(double num1, double num2);
void difference(double num1,double num2);
void product(double num1, double num2);
void quotient(double num1, double num2);

int main()
{
    double num1, num2;

    //call function to enter number
    getNumbers(num1, num2);

    // call calculation function
    sum(num1, num2);
    difference(num1, num2);
    product(num1, num2);
    quotient(num1, num2);

    return 0;
}

    //function: get two numbers
    void getNumbers(double &num1, double &num2)
    {
        cout << "Enter the First number: ";
        cin >> num1;
        cout << "Enter the Second number: ";
        cin >> num2;
    }
    //function: Calculate the sum
    void sum(double num1, double num2)
    {
        cout << "Sum = " << num1 + num2 << endl;
    }
    //function: Calculate the difference
    void difference(double num1, double num2)
    {
        cout << "Difference = " << num1 - num2 << endl;
    }
    //function: calculate the product
    void product(double num1, double num2)
    {
        cout << "Product = " << num1 * num2 << endl;
    }
    //function: Calculate the quotient
    void quotient(double num1, double num2)
    {
        if (num2 != 0)
        {
            cout << "Quotient = " << num1 / num2 << endl;
        }
        else
        {
            cout << "Cannot divide by zero." << endl;
        }
    }
