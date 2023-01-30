#include <iostream>

using namespace std;

int sumofallelementarray(int arr[], int n)
{

    int sum = 0;

    for (int i = 0; i < n; i++)
    {

        sum = sum + arr[i];
    }

    return sum;
}

int main()
{
    int n;
    cout << "Enter Your Size :";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int ans = sumofallelementarray(arr, n);

    cout << "Total :" << ans;
}