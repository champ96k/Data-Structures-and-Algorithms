#include <bits/stdc++.h> 
using namespace std; 

int findValue(int X, int Y, int P) 
{ 
	if (P % 2 == 0) 
		return (max(X, Y) / min(X, Y)); 

	else
		return (max(2 * X, Y) / min(2 * X, Y)); 
} 

// Driver code 
int main() 
{ 
    int t;
    cin>>t;
	while(t--) {
	    int X,Y,P;
	    cin>>X>>Y>>P;
	    cout << findValue(X, Y, P) << endl; 
	}
	
} 

