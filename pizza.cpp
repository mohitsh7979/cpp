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
        int x=str[i]*str1[i];
        int a=x/4;
        if(x<=a){
            cout<<"1"<<"\n";
        }
        // else if(x<=8){
        //    cout<<"2"<<"\n";
        // }
        // else if(x<=12){
        //    cout<<"3"<<"\n";
        // }
        // else if(x<=16){
        //    cout<<"4"<<"\n";
        // }
        
        
        

    }

    return 0;

}