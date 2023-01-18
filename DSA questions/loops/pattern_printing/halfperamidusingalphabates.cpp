// Example 3: Program to Print Half-Pyramid Using Alphabets



// A
// B B
// C C C
// D D D D
// E E E E E

/*

65
66 66
67 67 67
68 68 68 68
69 69 69 69 69

*/

#include<iostream>

using namespace std;

int main(){

    int a;
    cout<<"Enter your patterns lines :";
    cin>>a;

    for(int i=65;i<=a+65;i++){
        for(int j=65;j<=i;j++){
            cout<<char(i)<<" ";
        }
        cout<<"\n";
    }

    return 0;
}