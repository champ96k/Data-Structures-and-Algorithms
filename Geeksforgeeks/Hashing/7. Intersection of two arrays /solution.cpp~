// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;
int NumberofElementsInIntersection (int a[], int b[], int n, int m );


 // } Driver Code Ends


//User function template for C++

// Given two arrays A and B and their sizes N and M respectively 
int NumberofElementsInIntersection (int a[], int b[], int n, int m )
{
    // Your code goes here
    unordered_set<int> s;
    
    for(int i = 0 ; i < n ; i++)
        s.insert(a[i]);
        
    int ans = 0;
    for(int i = 0 ; i < m ; i++) {
        
        if(s.find(b[i]) != s.end()) {
            ans++;
            s.erase(b[i]);
      }
    
    }
 return ans;
    
    
}

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		int a[n], b[m];
		for(int i=0; i<n; i++)
			cin>>a[i];

		for(int i=0; i<m; i++)
			cin>>b[i];
			
		cout << NumberofElementsInIntersection(a,b,n,m) << endl;
	}
	return 0;
}  // } Driver Code Ends
