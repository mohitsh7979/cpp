// #include<iostream>

// using namespace std;

// int getValidTriangle(int a,int b,int c){

//        int total=a+b+c;
//        return total;
// }

// int main()

// {
//     int a,b,c;
//     cin>>a>>b>>c;
//     int ans=getValidTriangle(a,b,c);
//     cout<<ans;
//     if(ans==180){
//         cout<<"your Triangle is valid";
//     }
//     else{
//         cout<<"your triangle is not valid";
//     }

// }

#include <iostream>

using namespace std;

int getValidTriangle(int a, int b, int c)
{

    if (a < (b + c) && b < (a + c) && c < (a + b))
    {

        return 1;
    }
    else
    {
        return 0;
    }
}

int main()

{
    int a, b, c;
    cin >> a >> b >> c;
    int ans = getValidTriangle(a, b, c);
    // cout << ans;
    if (ans == 1)
    {
        cout << "your Triangle is valid";
    }
    else if(ans==0)
    {
        cout << "your triangle is not valid";
    }
}