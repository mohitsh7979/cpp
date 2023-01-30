#include <bits/stdc++.h>

using namespace std;

int printallnagative(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {

        if (arr[i] < 0)
        {
            return arr[i];
        }
    }
}

int main()
{

    int n;
    cout << "Enter Your Size :";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {

        cout << "Enter your array " << i << ":";
        cin >> arr[i];
    }

    int ans = printallnagative(arr, n);
    cout << ans << " ";
}