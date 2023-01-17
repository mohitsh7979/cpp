#include<iostream>

using namespace std;

int main(){

    char a;
    cout<<"Enter value :";
    cin>>a;

    if(a=='a' or a=='e' or a=='i' or a=='o' or a=='u'){
        cout<<"This alphabat is vowel";
    }

    else if(a=='A' or a=='E' or a=='I' or a=='O' or a=='U'){
        cout<<"This alphabat is vowel";
    }
    else{
        cout<<"This alphabat is constant";
    }
}