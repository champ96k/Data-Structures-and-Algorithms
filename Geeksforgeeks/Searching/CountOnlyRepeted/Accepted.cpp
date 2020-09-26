// { Driver Code Starts
//Initial function template for C++

#include <bits/stdc++.h>
using namespace std;

pair<int, int> findRepeating(int *, int);

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    int n;
	    cin >> n;
	    int arr[n];
	    
	    for(int i = 0;i<n;i++){
	        cin >> arr[i];
	    }
	    
	    pair<int, int> ans = findRepeating(arr,n);
	    
	    cout << ans.first << " " << ans.second << endl;
	    
	}
	
}// } Driver Code Ends


pair<int, int> findRepeating(int *a, int n){
    //code here
    if (n == 0) 
        return {0, 0}; 
  
    int s = 0; 
    int e = n - 1; 
    while (s < e) 
    { 
        int m = (s + e) / 2; 
  
        if (a[m] >= m + a[0]) 
            s = m + 1; 
  
        else
            e = m; 
    } 
    return {a[s], n - (a[n - 1] - a[0])};
}
