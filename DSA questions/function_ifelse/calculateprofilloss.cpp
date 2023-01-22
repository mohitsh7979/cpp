
// C program to calculate profit or loss

#include <iostream>

using namespace std;

int getProfitLoss(int cost, int selling_price)
{

    if (cost < selling_price)
    {
        cout << "profit :" << selling_price - cost << endl;
    }

    else if (cost > selling_price)
    {
        cout << "Loss :" << cost - selling_price;
    }

    else
    {
        cout << "Never loss and never profit beacause cost and loss price is same";
    }
}

int main()
{

    int cost, selling_price;
    cout << "Enter Your Cost : ";
    cin >> cost;
    cout << "Enter Your Selling_Price : ";
    cin >> selling_price;

    getProfitLoss(cost, selling_price);
}