// C program to print hollow mirrored right triangle star pattern

/*

 *
 * *
 *   * 
 *     *   
 * * * * *

*/



#include <iostream>

using namespace std;

void rightstarttriangle(int rows)
{

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows; j++)
        {
            if(j==1 || i==rows || i-j==0){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<"\n";
    }
}



/*

    *
   **
  * *
 *  *
*****


*/

void rightmirroredstarttriangle(int rows)
{

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows; j++)
        {
            if(j==rows || i==rows || i+j==rows+1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<"\n";
    }
}

// C program to print hollow inverted right triangle star pattern

/*

*****
*  *
* *
**
*

*/


void rightinvertedstarttriangle(int rows)
{

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows; j++)
        {
            if(i==1 || j==1 || i+j==rows+1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<"\n";
    }
}

/*

*****
 *  *
  * *
   **
    *



*/

void rightmirroredinvertedstarttriangle(int rows)   
{

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows; j++)
        {
            if(i==1 || i+j==rows+1 || i-j==0 || i==rows){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<"\n";
    }
}


void A(int rows){
    for(int i=1;i<=rows;i++){
        for(int k=1;k<=rows-i;k++){
            cout<<" ";
        }
        for(int j=1;j<=rows;j++){
            if(j==1 || i==rows){

            cout<<"*";
            }

        }
        cout<<"\n";
    }
}
int main()
{
    int rows;
    cout<<"Enter Your rows :";
    cin>>rows;
    rightmirroredinvertedstarttriangle(rows);
}