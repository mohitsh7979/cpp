// Online C++ compiler to run C++ program online
#include <iostream>

using namespace std;

int main()
{
    // Write C++ code here
    int n;
    int arr[5];

    cin >> n;

    // input

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Before reverse

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    // After reverse

    for (int i = 0; i < n/2; i++)
    {
        int temp = arr[0];
        arr[i] = arr[(n - i) - 1];
        arr[n - 1] = temp;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
