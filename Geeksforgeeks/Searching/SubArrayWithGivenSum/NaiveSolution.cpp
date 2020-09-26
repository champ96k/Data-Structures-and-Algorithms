#include <bits/stdc++.h>
using namespace std;


// Function to find the subarray with given sum k
// arr: input array
// n: size of array
vector<int> subarraySum(int arr[], int n, int s){
    
    // Your code here
    vector<int>v;
    for(int i=0;i<n;i++) {
        int res = arr[i];
        for(int j=i+1;j<n;j++) {
            res=res+arr[j];
            if(res==s) {
                v.push_back(i+1);
                v.push_back(j+1);
                return v;
            }
        }
    }
    v.push_back(-1);
    return v;
}

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        int arr[n];
        
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        vector<int>res;
        res = subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}
