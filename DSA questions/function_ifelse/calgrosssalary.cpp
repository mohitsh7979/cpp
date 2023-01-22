// C program to enter basic salary and calculate gross salary of an employee

// HRA menas House Rent Allowance comapany gives to employes 10% of salary

// DA Dearness Allowance it means

#include <iostream>

using namespace std;

int getGrosssalary(int basic_salary)
{

    if (basic_salary <= 10000)
    {

        float HRA, DA;
        HRA = (basic_salary * 20) / 100.0;
        DA = (basic_salary * 80) / 100.0;

        cout << "Gross Salary : " << basic_salary + HRA + DA;
    }

    else if (basic_salary >= 10001 && basic_salary <= 20000)
    {

        int HRA, DA;
        HRA = (basic_salary * 25) / 100.0;
        DA = (basic_salary * 90) / 100.0;

        cout << "Gross Salary : " << basic_salary + HRA + DA;
    }

    else if (basic_salary >= 20001)
    {

        int HRA, DA;
        HRA = (basic_salary * 30) / 100.0;
        DA = (basic_salary * 95) / 100.0;

        cout << "Gross Salary : " << basic_salary + HRA + DA;
    }
}

int main()
{

    int basic_salary;
    cout << "Enter your Basic Salary :";
    cin >> basic_salary;

    getGrosssalary(basic_salary);
}