#include <bits/stdc++.h> 
using namespace std; 

class Solution
{   
public:     
    vector<int> boundaryTraversal(vector<vector<int> > a, int r, int c) 
    {
        // code here
        vector<int>v;
        if(r==1) {
            for(int i=0;i<c;i++) 
                v.push_back(a[0][i]);
            
        } else if(c==1) {
            for(int i=0;i<r;i++) 
                v.push_back(a[i][0]);
        }
        
        else{
            
            for(int i=0;i<c;i++) 
                v.push_back(a[0][i]);
                
            for(int i=1;i<r;i++)
                 v.push_back(a[i][c-1]);
            
            for(int i=c-2;i>=0;i--) 
                v.push_back(a[r-1][i]);
                
            for(int i=r-2;i>=1;i--) 
                v.push_back(a[i][0]);
        }
        return v;
        
    }
};


int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int n,m;
        cin>>n>>m;
        vector<vector<int> > matrix(n); 

        for(int i=0; i<n; i++)
        {
            matrix[i].assign(m, 0);
            for( int j=0; j<m; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.boundaryTraversal(matrix, n, m);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends
