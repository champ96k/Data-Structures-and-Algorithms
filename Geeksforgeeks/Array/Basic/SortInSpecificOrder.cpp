// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends





class Solution
{
  public:
    void sortIt(long long a[], long long n)
    {
        //code here.
        int m=0,k=0;
        int odd[100000],even[100000];
        
        for(int i=0;i<n;i++) {
            if(a[i]%2==0) {
                even[k++] = a[i];
            } else {
                odd[m++]=a[i];
            }
        }
        
        sort(odd,odd+m,greater<int>());
        sort(even,even+k);
        
        for(int i=0;i<m;i++) {
            a[i] = odd[i];
        }
        
         for(int i=0;i<k;i++) {
            a[m++] = even[i];
        }
        
    }
};


// { Driver Code Starts.
int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long arr[n];

        for (int i = 0; i < n; i++) 
            cin >> arr[i];
        
        Solution ob;
        ob.sortIt(arr, n);

        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends
