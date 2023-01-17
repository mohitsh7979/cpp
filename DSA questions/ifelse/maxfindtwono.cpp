#include<iostream>

using namespace std;


int main(){

    int a,b;
    cout<<"Enter No :";
    cin>>a>>b;

    if(a>b){
        cout<<"a is max :"<<a;
    }

    else if(a<b){
        cout<<"b is max :"<<b;
    }

    else{
        cout<<"both are equal";
    }

}