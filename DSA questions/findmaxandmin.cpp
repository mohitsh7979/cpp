#include<iostream>
using namespace std;

// void printarr(int arr[],int size){

//     for(int i=0;i<size;i++){
//         cout<<arr[i];
//     }
// }

int getmax(int arr[],int size){

    int a=0;
    for(int i=0;i<size;i++){
           if(arr[i]>a){
              a=arr[i];
           }
    }

    return a;
}

// int getmin(int arr[],int size){
    
// }

int main(){

    // int arr[5]={1,2,3,4,5};
    int arr[10]={100,200,300,12,15,5,1555,220,6666};
    int c=getmax(arr,5);
    int p;
    cout<<c<<endl;

    for(int i=5;i>-1;i--){
        if(c>arr[i]){
            p=arr[i];
        }
    }
    cout<<p;

   
 

    

}