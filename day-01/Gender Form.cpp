#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name;
    string gender;

    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter your gender (Male or Female): ";
    cin >> gender;

    cout << "\nYour name is: " << name << endl;
    cout << "Your gender is: " << gender << endl;

    if (gender == "Male" || gender == "male")
    {
        cout << "Hello,Sir! You are a Clever Man." << endl;
    }
    else if (gender == "Female" || gender == "female")
    {
        cout << "Hello, Madm! You are a Lovely Lady." << endl;
    }
    else
    {
        cout << "Please enter Male or Female." << endl;
    }

    return 0;
}
