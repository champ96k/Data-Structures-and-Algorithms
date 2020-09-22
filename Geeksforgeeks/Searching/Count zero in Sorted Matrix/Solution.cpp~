// { Driver Code Starts
#include <iostream>
using namespace std;
#define MAX 1001
int countZeros(int A[MAX][MAX],int N);

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int A[MAX][MAX];
		for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
		cin>>A[i][j];
		cout<<countZeros(A,n)<<endl;
	}
	return 0;
}// } Driver Code Ends


/*you are required to complete this method*/
int countZeros(int A[MAX][MAX],int N)
{
    int row = N - 1, col = 0;
    int count = 0;
    while (col < N)
    {
        while (A[row][col])
            if (--row < 0)
                return count;
        count += (row + 1);
        col++;
    }
    return count;
}

