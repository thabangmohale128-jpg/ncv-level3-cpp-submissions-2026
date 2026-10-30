
#include <iostream>

using namespace std;

int main()
{
    // Declare variables
    double mark;
    double attendance;
    char poeDone;

    // Define minimum requirements
    const double PASS_MARK = 50;
    const double MIN_ATTENDANCE = 75;

    // Get student information
    cout << "Enter your year mark: ";
    cin >> mark;

    cout << "Enter your attendance percentage: ";
    cin >> attendance;

    cout << "Have you completed your PoE? (Y/N): ";
    cin >> poeDone;

    // Check admission requirements
    if (mark >= PASS_MARK)
    {
        if (attendance >= MIN_ATTENDANCE)
        {
            if (poeDone == 'Y' || poeDone == 'y')
            {
                cout << "Admitted" << endl;
            }
            else
            {
                cout << "PoE incomplete" << endl;
            }
        }
        else
        {
            cout << "Attendance too low" << endl;
        }
    }
    else
    {
        cout << "Year mark too low" << endl;
    }

    return 0;
}
