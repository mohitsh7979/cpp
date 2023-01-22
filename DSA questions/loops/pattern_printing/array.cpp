#include<iostream>

using namespace std;

int main(){

    int arr1[5]={1,2,3,4,5};
    char arr2[5]={'a','b','c','d'};

    for(int i=0;i<5;i++){
        for(int j=i;j<arr1[i];j++){
            cout<<arr2[i];
        }
    }

    return 0;


}