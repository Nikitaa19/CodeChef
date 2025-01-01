#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    int sp=x+(x/10);
	    cout<<sp-(x-y)<<endl;
	}

}
