#include <bits/stdc++.h> 
using namespace std; 

int solve(int a[],int n,int k) {
	int res=0;
	int totalSum=0;
	for(int i=0;i<n;i++) {
		totalSum+=a[i];
	}
	while(totalSum%k!=0){
		totalSum++;
		res++;
	}
	return res;
}

int main() 
{ 
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL); 
	#ifndef ONLINE_JUDGE 
	freopen("input.txt", "r", stdin); 
	freopen("error.txt", "w", stderr); 
	freopen("output.txt", "w", stdout); 
	#endif 

	int t; 
	cin >> t; 
	while (t--) {
		int n;
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		cout<<solve(a,n,k)<<endl;
	} 
	return 0; 
} 