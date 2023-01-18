#include <iostream>

using namespace std;

int main()
{

    // int a, n;
    // cin >> a >> n;

    // while (a<=n)
    // {

    //     if(a%2==0){
    //        cout<<a<<"\n";
    //     }
    //     a++;
    // }

    // while (a >= n)
    // {

    //     cout << a << "\n";

    //     a--;
    // }

    // int i=0,j;
    // while (i<=5)
    // {
    //     j=0;
    //     while (j<=5)
    //     {
    //         cout<<"*";
    //         j++;
    //     }

    //     i++;
    //     cout<<"\n";

    // }

    int i = 1, j;
    while (i <= 5)
    {
        j = 1;
        while (j <= 5)
        {
            cout<<"|"<<j<<"|"<<"*"<<"|";
            j++;
        }

        i++;
        cout << "\n";
    }

    // break statement
    //continue statement

} // int a, n;
  // cin >> a >> n;