// { Driver Code Starts

#include <bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends



class Solution
{   
public:     
    void rotateby90(vector<vector<int> >& a, int n) 
    { 
        //transpose matrix
        int row=n;
        int col=n;
        
        vector<vector<int>> v(n);

        for(int i = 0 ; i < n ; i++) {
            v[i].assign(n, 0);
            
        for(int j = 0 ; j < n ; j++) {
            v[i][j] = a[j][i];
      }
    }
    
        a = v;
        
        //reverse column
        for(int i=0;i<row;i++) {
        int low=0, high=row-1;
        while(low<high){
            swap(a[low][i],a[high][i]);
            low++;
            high--;
         }
        }
    } 
};

// { Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int n;
        cin>>n;
        vector<vector<int> > matrix(n); 

        for(int i=0; i<n; i++)
        {
            matrix[i].assign(n, 0);
            for( int j=0; j<n; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        ob.rotateby90(matrix, n);
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < n; ++j)
                cout<<matrix[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends
