#include <iostream>

using namespace std;

int getFibonaci(int a)
{

    int t1 = 0, t2 = 1;
    int temp = t1 + t2;
    cout << t1 << " " << t2 << " ";

    for (int i = 3; i <= a; i++)
    {
        cout << temp << " ";
        t1 = t2;
        t2 = temp;
        temp = t1 + t2;
    }
}

int main()
{

    int a;
    cout << "Enter Your No :";
    cin >> a;
    getFibonaci(a);
}