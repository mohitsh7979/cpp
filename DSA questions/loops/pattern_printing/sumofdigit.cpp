#include<iostream>

using namespace std;

int main(){
    
    int a;
    cin>>a;
    cout<<"Enter a number :"<<endl;
    int sum=0;
    while (a>0)
    {   int m=a%10;
        sum+=m;
        a =a/10;
    }

    cout<<"sum ="<<sum<<endl;
    
    // int b=a/100;
    // cout<<b;
    // int c=a%100;
    // cout<<c;
    // int d=b/100;
    // cout<<d;
    // int e=b%100;
    // cout<<e;
    // cout<<b<<" "<<c<<" "<<d<<" "<<e<<endl;
    // cout<<c+d+e;
    
}