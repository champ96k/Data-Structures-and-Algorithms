#include <bits/stdc++.h>
using namespace std;

int toggleBits(int n,int l,int r) {
    int num = ((1 << r) - 1) ^ ((1 << (l - 1)) - 1); 
  
    
    return (n ^ num); 
}

int main() {
    
    
	//code
	int t;
	cin>>t;
	while(t--) {
	    int n,m,k;
	    cin>>n>>m>>k;
	    
	    cout<<toggleBits(n,m,k)<<endl;
	}
	
	
	return 0;
}
