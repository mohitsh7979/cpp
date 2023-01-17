#include <iostream>

using namespace std;

int main()
{

    char a;
    cout << "Enter your value :";
    cin >> a;
    if (a >= 'a' && a <= 'z')
    {
        cout << "is alphabat";
    }

    else if (a >= 'A' && a <= 'Z')
    {
        cout << "is alphabat";
    }
    else
    {
        cout << "Not alphabat";
    }
}