#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int str[10];
    int str1[10];
    int str2[10];
    int str3[10];
    for(int i=0;i<n;i++){
        cin>>str[i];
        cin>>str1[i];
        cin>>str2[i];
        cin>>str3[i];

    }
    for(int i=0;i<n;i++){
        float a=1/str2[i];
        float b=1/str3[i];
        if(a==b){
            cout<<"both"<<"\n";
        }
        else if(a<b){
            cout<<"chef"<<"\n";
        }
        else if(a>b){
            cout<<"chefana"<<"\n";
        }

   
    
        

    }



}