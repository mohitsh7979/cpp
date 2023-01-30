
#include <bits/stdc++.h>

using namespace std;

int getMax(int arr[], int n)
{

    int max = INT_MIN;

    for (int i = 0; i < n; i++)
    {

        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    return max;
}

int getMin(int arr[], int n)
{

    int min = INT_MAX;

    for (int i = 0; i < n; i++)
    {

        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    return min;
}

int getSecondlargest(int arr[], int n)
{

    int max = INT_MIN;
    int max1 = 0;
    int a = 0;

    for (int i = 0; i < n; i++)
    {

        if (arr[i] > max)
        {
            max = arr[i];
        }

        if (max > max1)
        {
            a = max1;
            max1 = max;
        }
    }

    return a;
}

int main()
{
    int n;
    cout << "Enter Your array size :";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Entre your array " << i + 1 << ":";
        cin >> arr[i];
    }

    int max = getMax(arr, n);
    cout << "Max :" << max << endl;

    int min = getMin(arr, n);
    cout << "Min :" << min << endl;

    int secondlargest = getSecondlargest(arr, n);
    cout << "Second largest :" << secondlargest << endl;
}
