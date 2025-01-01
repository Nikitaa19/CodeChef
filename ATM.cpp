#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int x;
	float y;
	cin>>x>>y;
	if(x%5==0 && x<=y-0.50){
	    cout<<fixed<<setprecision(2)<<y-x-0.50<<endl;
	}
	else{
	    cout<<fixed<<setprecision(2)<<y<<endl;
	}

}
