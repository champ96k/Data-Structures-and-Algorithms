#include <bits/stdc++.h> 
using namespace std; 



int solve(string S) {

	int count = 0;
	int n = S.size();

	for(int i=0;i<n-2;i++) {
		
		if(S[i]=='b' && S[i+1]=='o' && S[i+2]=='b') {
			count++;
		}
	}

	return count;
}



int main() {

#ifndef ONLINE_JUDGE 
	freopen("input.txt", "r", stdin); 
	freopen("output.txt", "w", stdout); 
#endif 

	int t; 
	cin>>t;

	while (t--) {

		string s;
		cin>>s;

		cout<<solve(s)<<endl;



	}

   cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl; 
	return 0;

}











