#include<iostream>
using namespace std;
class mohit{
    public:
    int age;
    string myfname;
    string mylname;
    int c;
};
int main(){
    mohit m;
    cin>>m.age;
    cin>>m.myfname;
    cin>>m.mylname;
    cin>>m.c;
    cout<<m.age<<endl;
    cout<<m.mylname<<","<<" "<<m.myfname<<endl;
    cout<<m.c;
    cout<<endl;
    cout<<endl;
    cout<<m.age<<","<<m.myfname<<","<<m.mylname<<","<<m.c;
    


}