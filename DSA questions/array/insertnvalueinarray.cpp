#include <bits/stdc++.h>

using namespace std;

void insertvalue(int arr[], int n, int index, int newvalue)
{

    for (int i = n; i >= index; i--)
    {

        arr[i] = arr[i - 1];
    }
    arr[index] = newvalue;

    for (int i = 0; i <= n; i++)
    {

        cout << arr[i] << " ";
    }
}

void deletevalue(int arr[], int n, int index)
{
    for (int i = index; i < n; i++)
    {

        arr[i] = arr[i + 1];
    }

    for (int i = 0; i <= n; i++)
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

    int value;
    cout << "Enter Your new value :";
    cin >> value;

    insertvalue(arr, n, index, value);

    int index1;
    cout << "Enter Your index where you want to delete value:";
    cin >> index1;

    deletevalue(arr, n, index1);
}