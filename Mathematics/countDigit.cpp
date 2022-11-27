#include <bits/stdc++.h> 
using namespace std; 


int countDigit(int x) {

	int res = 0;

	while(x>0) {

		x = x/10;
		res++;
	}

	return res;

}

int main() 
{ 
	
#ifndef ONLINE_JUDGE 
	freopen("input.txt", "r", stdin); 
	freopen("output.txt", "w", stdout); 
#endif 

	int t; 
	cin>>t;

	while (t--) {

	int n;
	cin>>n; 

	cout<<"Total count of "<<n<<" is: "<<countDigit(n)<<endl;

	} 

	cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl; 
	return 0; 
} 
