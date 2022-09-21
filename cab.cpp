#include <iostream>
using namespace std;

int main() {
	int a,b,i;
	int n;
	cin>>n;
	for(i=0;i<n;i++)
	{
	    cin>>a>>b;
	    if(a>b){
	        cout<<"second\n";
	    }
	    else if(a==b){
	        cout<<"Any\n";
	    }
	    else{
	        cout<<"First\n";
	    }
        cout<<"\n";
	}

}
    