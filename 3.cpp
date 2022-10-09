#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int n,i,a,b;

    cin>>n;
    for(i=0;i<=n;i++){
        if(i>9 && n%2==0){
            cout<<n;
            cout<<"even";
        }
        else if(i>9 && n%2!=0){
            cout<<n;
            cout<<"odd";
        }
    }
    return 0;
}