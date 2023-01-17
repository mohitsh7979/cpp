#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
    cout<<"Enter no of test cases :";
    cin>>n;
    int arr1[5],arr2[5];
	for(int i=0;i<n;i++){
	     
         cin>>arr1[i]>>arr2[i];
        
	}

    for(int i=0;i<n;i++){
        cout<<arr1[i]*5+arr2[i]*7;
        cout<<"\n";
        

    }
	return 0;
}
