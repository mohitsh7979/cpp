/*

Example 6: Program to Print a Full Pyramid Using *

        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *

*/

// #include<iostream>

// using namespace std;

// int main(){

//     int a;
//     cout<<"Enter your patterns lines :";
//     cin>>a;

//     for(int i=1;i<=a;i++){
        
//         for(int k=0;k<=(a-1)-i;k++){
//             cout<<" ";
//         }

//         for(int j=1;j<=i;j++){
//             cout<<j;
//         }
//         cout<<"\n";
//     }
// }


#include<iostream>

using namespace std;

int main(){

    int a;
    cout<<"Enter your patterns lines :";
    cin>>a;

    for(int i=1;i<=a;i++){
        
        for(int k=0;k<=(a-1)-i;k++){
            cout<<" ";
        }

        for(int j=1;j<=i;j++){
            cout<<j;
        }

        for(int l=i+1;l<=i+2;l++){
            if(i==1){
                continue;
            }
           cout<<l;
        }
        cout<<"\n";
    }

 
}