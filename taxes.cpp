#include<iostream>
using namespace std;
int main(){
    int a[5];
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
	    cin>>a[i];
	}
	for(int i=0;i<n;i++){
	if(a[i]>100){
	    cout<<a[i]-10<<"\n";
	}
	else{
	    cout<<a[i]<<"\n";
	}
	    
	}

	return 0;
}