#include<iostream>
using namespace std;

int function(int a, int b,int c,int d){
    int max=a;
    if(b>max)
    max=b;
    if(c>max)
    max=c;
    if(d>max)
    max=d;

    return max;

    


}

int main(){
    int a,b,c,d;
   
    cin>>a>>b>>c>>d;
   int n=function(a,b,c,d);
   cout<<n;



}