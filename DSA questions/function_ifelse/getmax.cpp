#include<iostream>

using namespace std;

int32_t getMax(int a,int b){

    if(a>b){
        return a;
    }

    else if(a<b){

        return b;
    }

    else{
        return a;
    }
}

int main(){

    int n,m;
    cin>>n>>m;

    int ans=getMax(n,m);
    cout<<ans;

    return 0;



}