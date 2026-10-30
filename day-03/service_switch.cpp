#include <iostream>

using namespace std;

int main()
{
    int choice;

    cout << "=== MENU ==== " << endl;
    cout << "1. Buy airtime" << endl;
    cout << "2. Buy data bundle" << endl;
    cout << "3. Buy electricity" << endl;
    cout << "4. Goodbye" << endl;

    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
        case 1:
            cout << "Buy airtime";
            break;
        case 2:
            cout << "Buy data bundle";
            break;
        case 3:
            cout << "Buy electricity";
            break;
        case 4:
            cout << "Goodbye";
            break;
        default:
            cout << "Invalid choice";

    }
    return 0;

}
