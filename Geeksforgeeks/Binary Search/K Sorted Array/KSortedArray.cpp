// { Driver Code Starts



#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends




class Solution
{
  public:
    string isKSortedArray(int arr[], int n, int k)
    {
        //code here
        int ar[n];
        for(int i=0;i<n;++i) ar[i] = arr[i];
        sort(ar,ar+n);
        map<int,int> mp;
        for(int i=0;i<n;++i) mp[ar[i]] = i;
        for(int i=0;i<n;++i)
        {
            if(abs(mp[arr[i]] - i) > k) return "No";
        }
        return "Yes";
    }
};

// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    cin>>k;
	    Solution ob;
	cout <<ob.isKSortedArray(arr, n, k)<<endl;
	}
	return 0;	 
}  // } Driver Code Ends
