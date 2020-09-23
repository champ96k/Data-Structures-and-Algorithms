#include <bits/stdc++.h>
using namespace std;


int findFloor(vector<long long> v, long long n, long long x){
    
  
    { 
    // If last element is smaller than x 
    if (x >= v[n - 1]) 
        return n - 1; 
  
    // If first element is greater than x 
    if (x < v[0]) 
        return -1; 
  
    // Linearly search for the first element 
    // greater than x 
    for (int i = 1; i < n; i++) 
        if (v[i] > x) 
            return (i - 1); 
  
    return -1; 
} 
    
}

int main() {
	
	long long t;
	cin >> t;
	
	while(t--){
	    long long n;
	    cin >> n;
	    long long x;
	    cin >> x;
	    
	    vector<long long> v;
	    
	    for(long long i = 0;i<n;i++){
	        long long temp;
	        cin >> temp;
	        v.push_back(temp);
	    }
	    
	    cout << findFloor(v, n, x) << endl;
	   
	}
	
	return 0;
}  
