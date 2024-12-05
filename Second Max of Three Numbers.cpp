#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	while(n--){
	    int a,b,c;
	    cin>>a>>b>>c;
	    if(a>=b && b>=c || a<=b && b<=c){
	        cout<<b<<endl;
	    }
	    else if(a>=c && c>=b || a<=c && c<=b){
	        cout<<c<<endl;
	    }
	    else{
	        cout<<a<<endl;
	    }
	}

}
