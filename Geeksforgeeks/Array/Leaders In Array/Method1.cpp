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
     * ***************/
     
    
     vector<int>v;
     for(int i=0;i<n;i++) {
       bool flag = false;
       for(int j=i+1;j<n;j++) {
         if(a[i]<a[j]) {
           flag = true;
           break;
         }
       }
       if(flag==false) {
        int x = a[i];
         v.push_back(x);
       }
     }
     
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
        
        cout<<"\n\nLeader are : ";
        vector<int> v = leaders(a, n);
        vector<int>::iterator it; 
        
        
        for(it = v.begin();it!=v.end();it++){
            cout << *it << " ";
        }
        
        cout << endl;

   }
}
  // } Driver Code Ends
