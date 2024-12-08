#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,c;
	    cin>>a>>b>>c;
	    int more=max(a,max(b,c));
	    int less=min(a,min(b,c));
	    cout<<more-less<<endl;
	}

}
