#include <bits/stdc++.h>

using namespace std;

int copyarray(int arr1[], int n)
{
    int temp = 0;

    for (int i = 0; i < n/2; i++)
    {
        temp = arr1[i];
        arr1[i] = arr1[(n - i) - 1];
        arr1[(n - i) - 1] = temp;
    }

    for (int i = 0; i < n; i++)
    {

        cout << arr1[i] << " ";
    }
}

int main()
{
    int n;
    cout << "Enter your array size :";
    cin >> n;

    int arr1[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter your array " << i + 1 << ":";
        cin >> arr1[i];
    }

    copyarray(arr1, n);
}