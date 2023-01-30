#include <bits/stdc++.h>

using namespace std;

// int main()
// {
//    static int i = 1;

//     if (i <= 100)
//     {
//         cout << i++ << " ";
//         main();
//     }
//     return 0;
// }

int main()
{
    int i = 0;

mohit:
    if (i <= 100)
    {
        cout << i++ << " ";
        goto mohit;
    }
    return 0;
}