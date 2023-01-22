#include<iostream>

using namespace std;

int main(){

    char str[10];
    int i;
    cin>>str;
    for(i=0;i<5;i++){
    if (str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){

        str[i]='x';
    }
    }
    cout<<str;
}