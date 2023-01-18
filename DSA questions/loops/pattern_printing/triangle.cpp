
// write a program to pattern print

/*

*
* *
* * *
* * * *
* * * * *

*/



#include<iostream>

using namespace std;

int main(){

    int a;
    cout<<"Enter your patterns lines :";
    cin>>a;

    for(int i=0;i<=a;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
}