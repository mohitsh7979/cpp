#include <iostream>

using namespace std;

int main()
{

    char a;
    cout << "Enter your value :";
    cin >> a;
    if (a >= 'a' && a <= 'z')
    {
        cout << "lower case alphabat";
    }

    else if (a >= 'A' && a <= 'Z')
    {
        cout << "upper case alphabat";
    }
    else
    {
        cout << "Not alphabat";
    }
}