// { Driver Code Starts


#include <bits/stdc++.h>
using namespace std;
void exchangeColumns(vector<vector<int> > &matrix);

 // } Driver Code Ends




void exchangeColumns(vector<vector<int> > &a)
{
    // code here
    int row=a[0].size();
    int col=a.size();
    for(int i=0;i<col;i++) {
        swap(a[i][0],a[i][row-1]);
    }
}

// { Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n1, m1;
    	cin >> n1 >> m1;
    	vector< vector<int>> matrix(n1, vector<int> (m1));
    	for(int i = 0; i < n1; i++){
    		for(int j = 0; j < m1; j++){
    			cin >> matrix[i][j];
    		}
    	}
    	exchangeColumns(matrix);
    	for(int i = 0; i < n1; i++){
    		for(int j = 0; j < m1; j++){
    			cout << matrix[i][j] << ' ';
    		}
    	}
    	cout << endl;
    }
	return 0;
}  // } Driver Code Ends
