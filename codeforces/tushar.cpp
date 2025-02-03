#include<bits/stdc++.h>
using namespace std;


void solve() {

	int mat[5][5];

	for(int i=0;i<5;i++) {
		for(int j=0;j<5;j++) {
			int x ;
			cin>>x;
			mat[i][j]=x;
		}
	} 

	for(int i=0;i<5;i++) {
		for(int j=0;j<5;j++) {
			if(mat[i][j]>0) {
				cout<<abs(i-j)<<endl;
				break;
			}
		}
	} 
}


int main() {

#ifndef ONLINE_JUDGE
	//from getting input from input.tex
	freopen("input.txt","r",stdin);
	//from writing out from output.tex
	freopen("output.txt","w",stdout);
#endif

	// int t;
	// cin>>t;

	// while(t--) {
		solve();
	// }
	
	return 0;
}



