#include<bits/stdc++.h>
using namespace std;


void solve() {

	string str;
	cin>>str;

	int n = str.size();

	if(n>10) {
		cout<<str[0]<<n-2<<str[n-1]<<endl;
	} else {
		cout<<str;
	}

	return;

}











int main() {

#ifndef ONLINE_JUDGE
	//from getting input from input.tex
	freopen("input.txt","r",stdin);
	//from writing out from output.tex
	freopen("output.txt","w",stdout);
#endif

	int t;
	cin>>t;

	while(t--) {
		solve();
	}
	
	return 0;
}

