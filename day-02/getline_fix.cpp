#include <iostream>
#include <string>

using namespace std;

int main()
{
    int age;
    string fullName, town;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your full name: ";
    getline(cin >> ws, fullName);

    cout << "Enter your town: ";
    getline(cin >> ws, town);

    cout << "\n" << fullName << " (" << age
         << ") from " << town << endl;

    return 0;
}
