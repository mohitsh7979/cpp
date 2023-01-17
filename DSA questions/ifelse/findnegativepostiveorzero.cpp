#include<iostream>

using namespace std;

int main(){

    int a;
    cout<<"Enter your no :";
    cin>>a;
    if(a<0){
        cout<<"This no is neagative no :"<<a;
    }

    else if(a>0){
        cout<<"This no is positive no :"<<a;
    }

    else{
        cout<<"This no is zero :"<<a;
    }
}