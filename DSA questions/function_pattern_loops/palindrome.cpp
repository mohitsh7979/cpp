#include<iostream>

using namespace std;

int main(){

   int a=5632;
    while(a>0){
        int x=a%10;
        a=a/10;
        cout<<x;
    }
}