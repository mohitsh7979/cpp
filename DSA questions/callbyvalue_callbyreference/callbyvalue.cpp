// Call by value

#include<iostream>

using namespace std;

int callbyvalue(int a, int b){
    cout<<a+10<<" "<<b+10<<endl;
}

int main(){
 int a=100;
 int b=200;
 callbyvalue(a,b);
 cout<<a<<" "<<b;


}