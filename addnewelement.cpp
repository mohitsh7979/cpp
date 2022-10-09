#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter your array size no : ";
    cin>>n;
    int index=0;
    int value=0;
    int arr[10];
    for(int i=0;i<n;i++){
           cout<<"Enter Your Array :",i+1;
           cin>>arr[i];
        
    }
    // add new element
    
    cout<<"Enter your index : ";
    cin>>index;
    cout<<"Enter your value : ";
    cin>>value;
    if(index>=1 && index<=n+1){
    for(int i=n;i>=index;i--){
    

           arr[i]=arr[i-1];
           arr[i]=value;
           n++;
   
    }
    }

    for(int i=0;i<n;i++){
           cout<<arr[i];
         
        
    }
  
    return 0;

}