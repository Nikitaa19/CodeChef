#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y;
	    cin>>x>>y;
	    int dis=x*100;
	    int clo=y*10;
	    if(dis<clo){
	        cout<<"Disposable"<<endl;
	    }
	    else if(clo<=dis){
	        cout<<"Cloth"<<endl;
	    }
	}

}
