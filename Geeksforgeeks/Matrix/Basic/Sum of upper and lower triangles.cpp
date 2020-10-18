/*
Given a square matrix of size N*N, print the sum of upper and lower triangular elements. Upper Triangle consists of elements on the diagonal and above it. The lower triangle consists of elements on the diagonal and below it. 

Example 1:

Input:
N = 3 
mat[][] = {{6, 5, 4},
           {1, 2, 5}
           {7, 9, 7}}
Output: 29 32
Explanation:
The given matrix is
6 5 4
1 2 5
7 9 7
The elements of upper triangle are
6 5 4
  2 5
    7
Sum of these elements is 6+5+4+2+5+7=29
The elements of lower triangle are
6
1 2
7 9 7
Sum of these elements is 6+1+2+7+9+7= 32.
Example 2:

Input:
N = 2
mat[][] = {{1, 2},
           {3, 4}}
Output: 7 8
Explanation:
Upper triangular matrix:
1 2
  4
Sum of these elements are 7.
Lower triangular matrix:
1
3 4
Sum of these elements are 8.

Your Task:
You don't need to read input or print anything. Complete the function sumTriangles() that takes matrix and its size N as input parameters and returns the list of integers containing the sum of upper and lower triangle.

Expected Time Complexity: O(N * N)
Expected Auxiliary Space: O(1)
*/

#include <bits/stdc++.h> 
using namespace std; 

class Solution
{   
public:
    vector<int> sumTriangles(const vector<vector<int> >& mat, int n)
    {
        // code here
        vector<int>v;
        
        //upper trangle sum
        
      /*  if (i <= j) { 
                upper_sum += mat[i][j]; 
            } */
        
        int top=0;
        int sum1=0;
        for(int i=0;i<n;i++) {
            for(int j=top;j<n;j++) {
                sum1=sum1+mat[i][j];
            }
            top++;
        }
        v.push_back(sum1);
        
        //lower trangle sum
        /*  if (j <= i) { 
                lower_sum += mat[i][j]; 
            } */
        int left=0;
        int sum2=0;
        for(int i=0;i<n;i++) {
            for(int j=0;j<=left;j++) {
                sum2=sum2+mat[i][j];
            }
            left++;
        }
        
        
        v.push_back(sum2);
        return v;
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
        vector<int> result = ob.sumTriangles(matrix,n);
        for (int i = 0; i < result.size(); ++i)
            cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}
