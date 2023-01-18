//Example 2: Program to Print a Half-Pyramid Using Numbers

/*
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
*/

#include<iostream>

using namespace std;

int main(){

    int a;
    cout<<"Enter your patterns lines :";
    cin>>a;

    for(int i=1;i<=a;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<"\n";
    }

    return 0;
}