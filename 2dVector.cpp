// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<vector<int>> arr;
//     int n;
//     for(int i=0;i<n;i++){
        
//     }
//     return 0;
// }
#include<iostream>
using namespace std;
int main(){
    string str, str1;
    str="hello";
    str1="world";
    int a=str.size();
    int b=str1.size();
    if(a==b){
        string counter;
         for(int i=0;i<=b;i++){
         counter=str[0]+str1;
         cout<<counter;
         }
        // cout<<str+str1;
    }
    else{
        cout<<"error";
    }

}