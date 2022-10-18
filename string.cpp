#include<iostream>

#include <string.h>
using namespace std;
int main(){
    string str,str1,counter;
    cin>>str>>str1;
    cout<<str.size()<<" ";
    cout<<str1.size()<<endl;
    cout<<str+str1<<endl;
    counter=str[0];
    str[0]=str1[0];
    str1[0]=counter[0];
    cout<<str+" "+str1;
    
}