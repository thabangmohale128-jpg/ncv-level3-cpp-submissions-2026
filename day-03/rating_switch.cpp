#include <iostream>

using namespace std;

int main()
{
    int mark;

    cout << "Enter your mark (0 - 100): ";
    cin >> mark;

    //validate the mark
    if (mark < 0 || mark > 100)
    {
        cout << "Invalid mark";
    }
    else
    {
        switch (mark / 10)
        {
        case 8:
        case 9:
        case 10:
            cout << "5: Outstanding";
            break;

        case 7:
            cout << "4: Highly competent";
            break;

        case 6:
        case 5:
            cout << "3: Competent";
            break;

        default:
            cout << "1: Not achieved";
        }
    }
    return 0;
}
