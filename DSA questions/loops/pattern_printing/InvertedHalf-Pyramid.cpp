/*

Example 4: Inverted Half-Pyramid Using *

* * * * *
* * * *
* * *
* *
*


1 2 3 4
1 2 3
1 2
1

5 4 3 2 1
5 4 3 2
5 4 3
5 4
5

*/

// #include <iostream>

// using namespace std;

// int main()
// {

//     int a;
//     cout << "Enter your patterns lines :";
//     cin >> a;

//     for (int i = a; i >= 0; i--)
//     {

//         for (int j = 0; j <= i; j++)
//         {
//             cout << j;
//         }
//         cout << "\n";
//     }
// }


#include <iostream>

using namespace std;

int main()
{

    int a;
    cout << "Enter your patterns lines :";
    cin >> a;

    for (int i = 1; i <= a; i++)
    {

        for (int j = a; j >= i; j--)
        {
            cout << j;
        }
        cout << "\n";
    }
}