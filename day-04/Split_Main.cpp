#include <iostream>

using namespace std;

const int SIZE = 5;

//function prototypes
void populateArray(int numbers[]);
int countEven(int numbers[]);
void displayOdd(int numbers[]);
void sortArray(int numbers[]);
void displayArray(int numbers[]);

int main()
{
    int numbers[SIZE];

    populateArray(numbers);

    cout << "\nNumber of even numbers: " << countEven(numbers) << endl;

    cout << "Odd numbers: ";
    displayOdd(numbers);

    sortArray(numbers);

    cout << "Sorted numbers: ";
    displayArray(numbers);

    return 0;
}
//function to enter 5 numbers
void populateArray(int numbers[])
{
    for (int x = 0; x < SIZE; x++)
    {
        cout << "Enter number " << x + 1 << ": ";
        cin >> numbers[x];
    }
}
//function to count even numbers
int countEven(int numbers[])
{
    int count = 0;

    for (int x = 0; x < SIZE; x++)
    {
        if (numbers[x] % 2 == 0)
        {
            count++;
        }
    }
    return count;
}
//function to display odd numbers
void displayOdd(int numbers[])
{
    for (int x = 0; x < SIZE; x++)
    {
        if (numbers[x] % 2 != 0)
        {
            cout << numbers[x] << " ";
        }
    }
    cout << endl;
}
//function to sort numbers in ascending order
void sortArray(int numbers[])
{
    int temp;
    for (int x = 0; x < SIZE - 1; x++)
    {
        for (int  j = 0; j < SIZE - 1 - x; j++)
        {
            if (numbers[j] > numbers[j + 1])
            {
                temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }
}
//function to display the arrayvoid displayArray(int numbers[])
void displayArray(int numbers[])
{
    for (int x = 0; x < SIZE; x++)
    {
        cout << numbers[x] << " ";
    }
    cout << endl;
}
