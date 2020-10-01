// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends





//arr1,arr2 : the arrays
// n, m: size of arrays
vector<int> findUnion(int arr1[], int arr2[], int n, int m)
{
    //Your code here
    //return vector with correct order of elements
    set<int>s;
    s.insert(arr1,arr1+n);
    s.insert(arr2,arr2+m);
    
    vector<int>v;
    for(auto &x:s)
    v.push_back(x);

    return v;
}


// { Driver Code Starts.

int main() {
	
	int T;
	cin >> T;
	
	while(T--){
	    
	    
	    
	    int N, M;
	    cin >>N >> M;
	    
	    int arr1[N];
	    int arr2[M];
	    
	    for(int i = 0;i<N;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<M;i++){
	        cin >> arr2[i];
	    }
	    
	    vector<int> ans = findUnion(arr1,arr2, N, M);
	    for(int i: ans)cout<<i<<' ';
	    cout << endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends
