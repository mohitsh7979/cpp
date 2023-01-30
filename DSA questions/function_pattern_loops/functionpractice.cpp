#include <iostream>

using namespace std;

int addTwonum(int a, int b)
{

    return a + b;
}

int mulTwonum(int a, int b)
{

    return a * b;
}

float circumfances(float r)
{
    float ans = 2 * 3.14 * r;
    return ans;
}

float area(float r)
{
    float area = 3.14 * r * r;
    return area;
}

int findmaxthreeno(int a, int b, int c)
{
    if (a > b)
    {
        if (a > c)
        {
            return a;
        }
        else
        {
            return c;
        }
    }
    else
    {
        if (b > c)
        {
            return b;
        }
        else
        {
            return c;
        }
    }
}

int findminthreeno(int a, int b, int c)
{
    if (a < b)
    {
        if (a < c)
        {
            return a;
        }
        else
        {
            return c;
        }
    }
    else
    {
        if (b < c)
        {
            return b;
        }
        else
        {
            return c;
        }
    }
}

int findevneorodd(int a)
{
    if (a % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int findfactorial(int a)
{
    int fact = 1;
    for (int i = a; i >= 1; i--)
    {
        fact = fact * i;
    }
    return fact;
}

int getpalindrom(int a)
{
    int temp = a;
    int rev = 0;
    while (a > 0)
    {
        int x = a % 10;
        rev = (rev * 10) + x;
        a = a / 10;
    }

    if (temp == rev)
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

    // int a,b;
    // cout<<"Enter Your No :";
    // cin>>a>>b;
    // int sum=addTwonum(a,b);
    // cout<<"Sum :"<<sum<<endl;
    // int mul=mulTwonum(a,b);
    // cout<<"Mul :"<<mul<<endl;

    // float circum=circumfances(2);
    // cout<<"Circumfances :"<<circum<<endl;

    // float areaans=area(2);
    // cout<<"area :"<<areaans<<endl;

    // int Max = findmaxthreeno(10, 200, 100);
    // cout << "Max is :" << Max << endl;

    // int Min = findminthreeno(10, 200, 100);
    // cout << "Min is :" << Min << endl;

    // int check = findevneorodd(8);
    // if (check == 1)
    // {
    //     cout << "given no is even";
    // }

    // else if (check == 0)
    // {
    //     cout << "given no is odd";
    // }

    // int fact=findfactorial(5);
    // cout<<"Factorial :"<<fact;

    int pali = getpalindrom(1212);
    // cout << pali;

    if (pali == 1)
    {
        cout << "Palindrome" << endl;
    }
    else
    {
        cout << "Not Palindrome";
    }
}