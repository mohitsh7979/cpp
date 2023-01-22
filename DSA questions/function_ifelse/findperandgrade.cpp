// C program to enter student marks and find percentage and grade

#include <iostream>

using namespace std;

int getPerandgrade(int physics, int Chemistry, int Biology, int Maths, int Computer)
{

    float Percentage = ((physics + Chemistry + Biology + Maths + Computer) * 100) / 500.0;

    if (Percentage >= 90)
    {
        cout << "Percentage =" << Percentage << endl;
        cout << "Grade A";
    }

    else if (Percentage >= 80)
    {

        cout << "Percentage =" << Percentage << endl;
        cout << "Grade B";
    }

    else if (Percentage >= 70)
    {

        cout << "Percentage =" << Percentage << endl;
        cout << "Grade C";
    }

    else if (Percentage >= 60)
    {

        cout << "Percentage =" << Percentage << endl;
        cout << "Grade D";
    }

    else if (Percentage >= 40)
    {

        cout << "Percentage =" << Percentage << endl;
        cout << "Grade E";
    }

    else if (Percentage < 40)
    {

        cout << "Percentage =" << Percentage << endl;
        cout << "Grade F";
    }

    else if (Percentage >= 80)
    {

        cout << "Percentage =" << Percentage << endl;
        cout << "Grade B";
    }
}

int main()
{
    int Physics, Chemistry, Biology, Maths, Computer;
    cout << "Enter Your  Physics Marks :";
    cin >> Physics;
    cout << "Enter Your  Chemistry Marks :";
    cin >> Chemistry;
    cout << "Enter Your  Biology Marks :";
    cin >> Biology;
    cout << "Enter Your  Maths Marks :";
    cin >> Maths;
    cout << "Enter Your  Computer Marks :";
    cin >> Computer;
    getPerandgrade(Physics, Chemistry, Biology, Maths, Computer);
}