#include <iostream>

using namespace std;

int main()
{

    int a;
    cout << "Enter your year :";
    cin >> a;

    if (a % 100 == 0)
    {

        if (a % 400 == 0)
        {

            cout << "This is leap year";
        }
        else
        {
            cout << "Not a leap year";
        }
    }

    else
    {

        if (a % 4 == 0)
        {

            cout << "This is year is leap year ";
        }
        else
        {
            cout << "Not a leap year ";
        }
    }
}