#include <iostream>

using namespace std;

int getEqualiteralIsoscelesScalene(int a, int b, int c)
{

    if (a == b && a == c && b == c)
    {
    //     cout << "Equaliteral";
        return 1;
    }
    else if (a == b || a == c || b == c)
    {
        // cout << "Isosceles.";
        return 2;
    }

    else if (a != b && a != c && b != c)
    {
        // cout << "scalene";
        return 3;
    }
}

int main()
{

    int a, b, c;
    cin >> a >> b >> c;

    int ans=getEqualiteralIsoscelesScalene(a, b, c);
    if(ans==1){
        cout<<"Equaliteral";
    }
    else if(ans ==2){
        cout<<"Isosceles";
    }
    else if(ans==3){
        cout<<"Scalene";
    }

    return 0;

    
}