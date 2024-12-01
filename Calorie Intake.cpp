#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int x,y,z;
	cin>>x>>y>>z;
	if(y*z<=x){
	    cout<<x-(y*z)<<endl;
	}
	else{
	    cout<<"-1"<<endl;
	}

}
