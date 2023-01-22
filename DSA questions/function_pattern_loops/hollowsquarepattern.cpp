// C program to print hollow square or rectangle star pattern

/*
*****
*   *
*   *
*   *
*****
*/

#include <iostream>

using namespace std;

void getHollowpattern(int rows)
{

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows; j++)
        {
            if (i == 1 || i == rows || j == 1 || j == rows || i+j==rows+1 || i-j==0)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << "\n";
    }
}

int main()
{
    int rows;
    cout << "Enter your rows :";
    cin >> rows;
    getHollowpattern(rows);
}