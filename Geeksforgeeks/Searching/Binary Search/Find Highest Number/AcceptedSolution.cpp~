// { Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends





class Solution {
public:
    int findPeakElement(vector<int>& a) 
    {
        int n=a.size();
        int r=n-1;
        int l=0;
        int maxi=-1;
        
        while(l<r) {
            maxi=max(maxi,max(a[l],a[r]));
                if(a[l]>a[r])
                    {
                        l++;
                    }
                    else if(a[r]>a[l])
                    {
                         r--;
                    }
                    else
                    {
                         l++;
                         //r--;
                    }
             }
        return maxi;
    }
};



// { Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n;
    	cin >> n;
    	vector<int>a(n);
    	for(int i = 0; i < n; i++)
    		cin>>a[i];
    	Solution ob;
    	int ans = ob.findPeakElement(a);
    	cout << ans << "\n";
    }
	return 0;
}

  // } Driver Code Ends
