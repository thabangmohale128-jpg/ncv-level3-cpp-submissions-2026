
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Function prototypes
void getNumbers(double &num1, double &num2);
double add(double num1, double num2);
double subtract(double num1, double num2);
double multiply(double num1, double num2);
double divide(double num1, double num2);

int main()
{
    // Part 2: Get two numbers from the user
    double num1, num2;

    getNumbers(num1, num2);

    // Call all the mathematical functions
    cout << "\nPart 2 Results:" << endl;
    cout << "Sum: " << add(num1, num2) << endl;
    cout << "Difference: " << subtract(num1, num2) << endl;
    cout << "Product: " << multiply(num1, num2) << endl;

    if (num2 != 0)
        cout << "Quotient: " << divide(num1, num2) << endl;
    else
        cout << "Quotient: Cannot divide by zero!" << endl;

    // Part 3: Generate two random numbers from 1 to 50
    srand(time(0));

    int random1 = rand() % 50 + 1;
    int random2 = rand() % 50 + 1;

    char operation;

    cout << "\nPart 3: Random Numbers" << endl;
    cout << "First number: " << random1 << endl;
    cout << "Second number: " << random2 << endl;

    cout << "Choose an operation (+, -, *, /): ";
    cin >> operation;

    // Determine the correct operation
    switch (operation)
    {
        case '+':
            cout << "Answer: "
                 << add(random1, random2) << endl;
            break;

        case '-':
            cout << "Answer: "
                 << subtract(random1, random2) << endl;
            break;

        case '*':
            cout << "Answer: "
                 << multiply(random1, random2) << endl;
            break;

        case '/':
            cout << "Answer: "
                 << divide(random1, random2) << endl;
            break;

        default:
            cout << "Invalid math operation!" << endl;
    }

    return 0;
}

// Function definitions

void getNumbers(double &num1, double &num2)
{
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;
}

double add(double num1, double num2)
{
    return num1 + num2;
}

double subtract(double num1, double num2)
{
    return num1 - num2;
}

double multiply(double num1, double num2)
{
    return num1 * num2;
}

double divide(double num1, double num2)
{
    return num1 / num2;
}
