#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int a,b,x,y;
	cin>>a>>b>>x>>y;
	if((a*2)+b == (x*2)+y){
	    cout<<"Equal"<<endl;
	}
	else if((a*2)+b > (x*2)+y){
	    cout<<"Messi"<<endl;
	}
	else if((a*2)+b < (x*2)+y){
	    cout<<"Ronaldo"<<endl;
	}

}
