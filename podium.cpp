#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int str[10];
    int str1[10];
    for(int i=0;i<n;i++){
        cin>>str[i];
        cin>>str1[i];

    }
    for(int i=0;i<n;i++){
        cout<<str[i]+str1[i]<<"\n";
        

    }



}