#include <iostream>

using namespace std;

int main()
{
    int numbers[5];
    int evenCount = 0;

    //Enter 5 numbers
    for (int x = 0; x < 5; x++)
    {
        cout << "Enter number " << x + 1 << ": ";
        cin >> numbers[x];
    }
    //Count even numbers
    for (int x = 0; x < 5; x++)
    {
        if (numbers[x] % 2 == 0)
        {
            evenCount++;
        }
    }
    cout << "Number of even numbers: " << evenCount << endl;

    //Display all numbers
    cout << "All numbers in the array: ";

    for (int x = 0; x < 5; x++)
    {
        cout << numbers[x] << " ";
    }
    cout << endl;

    return 0;
}
