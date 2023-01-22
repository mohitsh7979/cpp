
// prime and not prime number

#include <iostream>

using namespace std;

int main()
{
    int flag = 0;
    int a, i;
    cin >> a;

    for (i = 2; i < a; i++)
    {
        if (a % i == 0)
        {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
    {
        cout << "Not prime";
    }

    else
    {
        cout << "Prime";
    }
}