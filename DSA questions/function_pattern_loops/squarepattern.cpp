// C program to print square or rectangle star pattern

/*

*****
*****
*****
*****
*****

*/

#include <iostream>

using namespace std;

void getSquarepattern(int rows)
{

    for (int i = 0; i < rows; i++)
    {

        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}

int main()

{
    int rows;
    cout<<"Enter your rows :";
    cin>>rows;

    getSquarepattern(rows);
}