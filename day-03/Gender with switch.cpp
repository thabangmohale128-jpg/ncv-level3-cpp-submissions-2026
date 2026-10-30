#include<iostream>
using namespace std;

int main()
{
    //declare variables
    char genderCode;

    //prompt and get values
    cout << "Enter gender Code(M= Male / F = Female): ";
    cin >> genderCode;

    //make and decision
    switch(genderCode){
    case 'M':
    case 'm':

     cout << "You are a Clever Man: ." << endl;
    break;

    case 'F':
    case 'f':

     cout << "You are a Lovely Lady: ." << endl;
    break;

    default:
    cout << "Invalid Gender Code ." << endl;

    return 0;
    }

}
