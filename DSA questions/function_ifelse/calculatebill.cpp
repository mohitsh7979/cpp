//  C program to calculate electricity bill

/*
Write a C program to input electricity unit charge and calculate the total electricity bill according to the given condition:
For first 50 units Rs. 0.50/unit
For next 100 units Rs. 0.75/unit
For next 100 units Rs. 1.20/unit
For unit above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill.

*/

#include <iostream>

using namespace std;

int getBill(int unit)
{

    if (unit <= 50)
    {
        cout << (unit * 0.5) + 20;
    }

    else if (unit >= 51 && unit <= 100)
    {
        cout << (unit * 0.75) + (((unit * 0.75) * 20) / 100.0);
    }

    else if (unit >= 101 && unit <= 250)
    {
        cout << (unit * 1.20) + 20;
    }

    else if (unit >= 251)
    {
        cout << (unit * 1.50) + 20;
    }
}

int main()

{
    int unit;
    cout << "Enter your unit :";
    cin >> unit;

    getBill(unit);
}