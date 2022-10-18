#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;



   
int main() {
      struct {
    int myage;
    string myname;
    string mylastname;
    int c;
  } myStructure;
  cin>>myStructure.myage;
  cin>>myStructure.myname;
  cin>>myStructure.mylastname;
  cin>>myStructure.c;
  cout<<myStructure.myage<<" "<<myStructure.myname<<" "<<myStructure.mylastname<<" "<<myStructure.c;
  

    
    return 0;
}