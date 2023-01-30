#include <iostream>

using namespace std;

int copyarray(int arr1[], int arr2[], int n)
{

    for (int i = 0; i < n; i++)
    {
        arr2[i] = arr1[i];
    }

    for (int i = 0; i < n; i++)
    {

        cout << arr2[i] << " ";
    }
}

int main()
{
    int n;
    cout << "Enter your array size :";
    cin >> n;

    int arr1[n];
    int arr2[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter your array " << i + 1 << ":";
        cin >> arr1[i];
    }

    copyarray(arr1, arr2, n);
}