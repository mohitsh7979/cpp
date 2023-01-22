#include<iostream>

using namespace std;

int main(){

    int sum;
    cin>>sum;
    int var=sum;
    int temp=0;
    int reverse=0;


    while(sum>0){

        int a=sum/10;
        int b=sum%10;
        reverse=reverse*10+b;
        sum=a;
        cout<<b<<endl;
        temp+=b;
    }
        // cout<<temp<<endl;
        // cout<<"before reverse="<<var<<endl;
        // cout<<"reverse="<<reverse<<endl;

        if(var==reverse){
            cout<<"Palindrome";
        }

        else{
            cout<<"Not Palindrome";
        }
}