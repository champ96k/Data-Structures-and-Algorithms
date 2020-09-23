#include <bits/stdc++.h>
using namespace std;

long long floorSearch(vector<long long> arr, long long low, long long high, long long x) 
{ 
    if (low > high) 
        return -1; 
  
    if (x >= arr[high]) 
        return high; 
  
    long long mid = (low + high) / 2; 
  
    if (arr[mid] == x) 
        return mid; 
  
    if (mid > 0 && arr[mid - 1] <= x 
        && x < arr[mid]) 
        return mid - 1; 
  
    if (x < arr[mid]) 
        return floorSearch( 
            arr, low, mid - 1, x); 
  
    return floorSearch(arr, mid + 1, high, x); 
} 


int findFloor(vector<long long> v, long long n, long long x){
    
    return floorSearch(v,0,n-1,x);
    
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
