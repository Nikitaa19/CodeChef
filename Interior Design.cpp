#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x1,y1,x2,y2;
	    cin>>x1>>y1>>x2>>y2;
	    int s1=x1+y1;
	    int s2=x2+y2;
	    int final=min(s1,s2);
	    cout<<final<<endl;
	}

}
