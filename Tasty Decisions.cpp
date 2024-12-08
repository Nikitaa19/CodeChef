#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    int choco=2*x;
	    int candy=5*y;
	    if(choco>candy){
	        cout<<"Chocolate"<<endl;
	    }
	    else if(choco<candy){
	        cout<<"Candy"<<endl;
	    }
	    else if(choco==candy){
	        cout<<"Either"<<endl;
	    }
	}

}
