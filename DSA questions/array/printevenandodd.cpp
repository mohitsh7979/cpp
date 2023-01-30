#include <iostream>

using namespace std;

int getEvenOdd(int arr[], int n)
{

    int counter = 0;

    for (int i = 0; i < n; i++)
    {

        if (arr[i] % 2 == 0)
        {
            counter++;
        }
    }

    return counter;
}

int main()
{
    int n;
    cout << "Enter Your array size :";
    cin >> n;

    int arr[n];

    int counter1 = 0;
    int counter2 = 0;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter Your array " << i + 1 << ":";
        cin >> arr[i];
    }

    int ans = getEvenOdd(arr, n);
    cout << "Total Even No :" << ans << endl;
    cout << "Total Odd No :" << (n - ans) << endl;

}
