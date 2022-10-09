#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter your array size no : ";
    cin>>n;
    int sum=0;
    int arr[10];
    for(int i=0;i<=n;i++){
           cout<<"Enter Your Array :",i+1;
           cin>>arr[i];
           sum=sum+arr[i];
    }
    cout<<sum;

}