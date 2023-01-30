#include <iostream>

using namespace std;

int linearsearch(int n, int key, int arr[])
{

    int flag = 0;
    int index = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
    }

    return -1;
}

int main()
{

    int n;
    cout << "Enter size :";
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int key;
    cout << "Enter Your Key value :";
    cin >> key;

    int a = linearsearch(n, key, arr);

    if (a == 1)
    {

        cout << "Item found :";
    }

    else
    {

        cout << "Item not found";
    }
}