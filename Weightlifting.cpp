#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int a1,a2,b1,b2,c1,c2;
	cin>>a1>>a2>>b1>>b2>>c1>>c2;
	int r1=max(a1,a2);
	int r2=max(b1,b2);
	int r3=max(c1,c2);
	int final=r1+r2+r3;
	cout<<final<<endl;

}
