#include <bits/stdc++.h>
using namespace std;

class Solution
{   
public:
    void interchangeRows(vector<vector<int> > &arr1)
    {
        // code here 
        int n1=arr1.size();
        int m1=arr1[0].size();
        for(int i =0 ;i<=m1-1; i++ ){
            int  low =0 , high =n1-1;
            while (low < high ){
                arr1[low][i] = arr1[low][i]^arr1[high][i];
                arr1[high][i] = arr1[low][i]^arr1[high][i];
                arr1[low] [i]  = arr1[low][i]^arr1[high][i];
                
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
        int row, col;
        cin>> row>> col;
        vector<vector<int> > matrix(row); 
        for(int i=0; i<row; i++)
        {
            matrix[i].assign(col, 0);
            for( int j=0; j<col; j++)
            {
                cin>>matrix[i][j];
            }
        }
        
        Solution ob;
        ob.interchangeRows(matrix);

        for (int i = 0; i < row; ++i)
        {
            for (int j = 0; j < col; ++j)
            {
                cout<<matrix[i][j]<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends
