#include<iostream>

using namespace std;

int main(){

int a,b,c;

cout<<"Enter your three side";
cin>>a>>b>>c;

if(a==b && b==c &&a==c){
    cout<<"Equalater triangle";
}

else if(a==b || b==c || a==c){
    cout<<"isosales triangle";
}

else if(a!=b && b!=c && a!=c){
    cout<<"scalance triangle";

}

}
