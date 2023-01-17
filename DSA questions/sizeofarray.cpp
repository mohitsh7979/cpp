// if we want to get size of array that time we do should
#include<iostream>
using namespace std;

int main(){
int arr[10];
int size=sizeof(arr)/sizeof(int);
cout<<size<<endl;

int size1=sizeof(arr);
cout<<"only arr size :"<<size1<<endl;
cout<<"only int size :"<<sizeof(int);
}