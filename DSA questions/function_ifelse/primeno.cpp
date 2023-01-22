#include <iostream>

using namespace std;

int getPrimeno(int a)
{

    int flag = 0;

    for (int i = 2; i < a; i++)
    {
        if (a % i == 0)
        {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
    {
        return 1;
    }

    else
    {
        return 0;
    }
}

int main()
{

    int n;
    cin >> n;
    int a = getPrimeno(n);
    if (a == 1)
    {
        cout << "Prime No";
    }

    else
    {
        cout << "not Prime";
    }
}
