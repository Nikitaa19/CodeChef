#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    int more=max(x,y);
	    int less=min(x,y);
	    int vol=more-less;
	    cout<<vol<<endl;
	}

}
