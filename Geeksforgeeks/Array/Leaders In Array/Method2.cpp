// { Driver Code Starts
// C++ program to remove recurring digits from
// a given number
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends





// Function to find the leaders in an array of size n
vector<int> leaders(int a[], int n){
    
    // Your code here
    
    /******************
     * You just need to complete this
     * function and return the vector
     * containing the leaders.
     
        Expected Time Complexity: O(N).
        Expected Auxiliary Space: O(N).


     * ***************/
     vector<int>v;
     int current = a[n-1];
     v.push_back(current);
     for(int i=n-2;i>=0;i--) {
         if(current<=a[i]) {
             current = a[i];
             v.push_back(current);
         }
     }
     reverse(v.begin(),v.end());
     return v;
     
    
}


// { Driver Code Starts.

int main()
{
   long long t;
   cin >> t;
   while (t--)
   {
       long long n;
       cin >> n;
        
        int a[n];
        
        for(long long i =0;i<n;i++){
            cin >> a[i];
        }
        
        vector<int> v = leaders(a, n);
        
        for(auto it = v.begin();it!=v.end();it++){
            cout << *it << " ";
        }
        
        cout << endl;

   }
}
  // } Driver Code Ends
