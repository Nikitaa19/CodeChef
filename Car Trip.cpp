#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x;
	    cin>>x;
	    if(x<300){
	        cout<<300*10<<endl;
	    }
	    else if(x>=300){
	        cout<<x*10<<endl;
	    }
	}

}
