
#include <bits/stdc++.h> 
using namespace std; 

class Solution
{   
public:
    vector<int> snakePattern(vector<vector<int> >v)
    {
        
        int n=v[0].size();
        vector<int>res;
        
        for(int i=0;i<n;i++) {
            if(i%2==0) {
                for(int j=0;j<n;j++) {
                    res.push_back(v[i][j]);
                }
            } else {
                for(int j=n-1;j>=0;j--) {
                    res.push_back(v[i][j]);
                }
            }
        }
        
        return res;
    }
};

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
        vector<int> result = ob.snakePattern(matrix);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
} 
