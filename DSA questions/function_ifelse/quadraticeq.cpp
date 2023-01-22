// C program to find all roots of a quadratic equation

#include <iostream>
#include <math.h>

using namespace std;

int getQuadratic(int a, int b, int c)
{
    int x = (b * b) - (4 * a * c);
    if (x > 0)
    {
        float formula = (-b + sqrt((b * b) - 4 * a * c)) / (2 * a);
        cout << formula << endl;

        float formula1 = (-b - sqrt((b * b) - 4 * a * c)) / (2 * a);
        cout << formula1 << endl;
    }

    else if (x == 0)
    {
        float formula = -b / (2 * a);
        cout << formula << endl;

        float formula1 = -b / (2 * a);
        cout << formula1 << endl;
    }

    // What we can do at this time

    // else if (x < 0)
    // {
    //     float formula = (-b + sqrt((b * b) - 4 * a * c)) / (2 * a);
    //     cout << formula << endl;

    //     float formula1 = (-b - sqrt((b * b) - 4 * a * c)) / (2 * a);
    //     cout << formula1 << endl;
    // }
}

int main()
{

    getQuadratic(8, 2, 2);
}