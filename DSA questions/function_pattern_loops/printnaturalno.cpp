// C program to print all natural numbers from 1 to n

#include <iostream>

using namespace std;

void PrintNaturalNo(int no)
{

    int i = 1;
    while (i <= no)
    {
        cout << i << ",";
        i = i + 1;
    }
}

void PrintNaturalNoreverse(int no)
{

    int i = no;
    while (i >= 1)
    {
        cout << i << ",";
        i = i - 1;
    }
}

// C program to print alphabets from a to z

void PrintAtoZ()
{
    int i = 65;
    while (i <= 90)
    {
        cout << char(i) << "\t";
        i = i + 1;
    }
}

// que: C program to print all even numbers from 1 to n

void getevenno(int no)
{

    int i = 1;
    while (i <= no)
    {
        if (i % 2 == 0)
        {
            cout << i << " ";
        }
        i = i + 1;
    }
}

// que: C program to print all odd numbers from 1 to n

void getoddno(int no)
{

    int i = 1;
    while (i <= no)
    {
        if (i % 2 != 0)
        {
            cout << i << " ";
        }
        i = i + 1;
    }
}

// que: C program to sum of all natural no

void sumofallno(int no)
{

    int i = 1;
    int sum = 0;
    while (i <= no)
    {
        cout << i << endl;
        sum = sum + i;
        i = i + 1;
    }
    cout << "Total :" << sum;
}

// que: C program to sum of all even no

void sumofallevenno(int no)
{

    int i = 1;
    int sum = 0;
    while (i <= no)
    {
        if (i % 2 == 0)
        {
            cout << i << endl;
            sum = sum + i;
        }
        i = i + 1;
    }
    cout << "Total :" << sum;
}

// que: C program sum of all odd no

void sumofalloddno(int no)
{

    int i = 1;
    int sum = 0;
    while (i <= no)
    {
        if (i % 2 != 0)
        {
            cout << i << " ";
            sum = sum + i;
        }
        i = i + 1;
    }

    cout << "Total :" << sum;
}

// que : C program to print multiplication table of a given number

void Multipilcationofno(int no)
{

    int i = 1;
    int mul = 1;
    while (i <= 10)
    {
        mul = no * i;
        cout << no << "*" << i << "=" << mul << endl;
        i = i + 1;
    }
}

// que : C program to count number of digits in an integer

void getnoofdigit(int no)
{
    int i = 0;
    while (no > 0)
    {
        int a = no % 10;
        no = no / 10;
        cout << a << endl;
        i = i + 1;
    }
    cout << i;
}

// que : C program to find first and last digit of any number

void getfirstandlastdigit(int no)
{

    int temp = 0;
    int last_digit = no % 10;
    while (no > 0)
    {
        int a = no % 10;
        no = no / 10;
        temp = a;
    }
    cout << "First digit :" << temp<<endl;
    cout << "Last digit :" << last_digit;
}


// que : C program to find first and last digit of any number and do sum no

void getfirstandlastdigitandsum(int no)
{

    int temp = 0;
    int last_digit = no % 10;
    while (no > 0)
    {
        int a = no % 10;
        no = no / 10;
        temp = a;
    }
    cout << "First digit :" << temp<<endl;
    cout << "Last digit :" << last_digit<<endl;
    cout<<"Sum :"<<temp+last_digit;
}


int main()
{

    int no;
    cout << "Enter your no :";
    cin >> no;
    getfirstandlastdigitandsum(no);
}