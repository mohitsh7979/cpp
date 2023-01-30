#include <bits/stdc++.h>

using namespace std;

void deletevalue(int arr[], int n, int index)
{
    for (int i = index; i < n; i++)
    {

        arr[i] = arr[i + 1];
    }

    for (int i = 0; i < n-1; i++)
    {

        cout << arr[i] << " ";
    }
}

int main()
{
    int n;
    cout << "Enter Your array size :";
    cin >> n;

    int arr[10];

    for (int i = 0; i < n; i++)
    {

        cout << "Enter your array :" << i << ":";
        cin >> arr[i];
    }

    int index;
    cout << "Enter Your index :";
    cin >> index;

    deletevalue(arr, n, index);
}