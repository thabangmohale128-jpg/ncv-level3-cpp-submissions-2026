#include<iostream>
using namespace std;

int main()
{
    //declare variables
    char genderCode;
    string description;

    //prompt and get values
    cout << "Enter gender Code(M= Male / F = Female): ";
    cin >> genderCode;

    //make and decision
    if (genderCode == 'F' || genderCode == 'f')
    {
        description = "Female";
    }
    else
     if (genderCode == 'M' || genderCode == 'm')
    {
         description = "Male";
    }

        else
    {
            description = "Invalid gender Code";
    }
    cout << description;

    return 0;
}
