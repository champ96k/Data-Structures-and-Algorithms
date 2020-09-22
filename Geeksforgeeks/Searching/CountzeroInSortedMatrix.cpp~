/*
Given a Binary Square Matrix where each row and column of the matrix is sorted in ascending order. Find the total number of Zeros present in the matrix.

Input:
The first line of input will be the no of test cases then T test cases will follow. The second line of each test case contains an integer N denoting the dimension of the matrix. Then in the next line are the space separated values of the matrix A[ ] [ ]. 

Output:
Print in a single line, the total number of zeros present in the given Binary Matrix.

User Task:
You don't need to read input or print anything. Your task is to complete the function countZeros() which takes the Binary Matrix A[][] and its size N as inputs and returns an integer denoting the total number of Zeros present in the matrix.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(1).

Constraints:
1<=T<=50
1<=M,N<=1000
0<=A[][]<=1

Example:
Input
2
3
0 0 0 0 0 1 0 1 1
2
1 1 1 1 
Output
6
4
*/

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
int countZeros(int A[MAX][MAX],int n)
{
//Your code here
    int count=0;
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            if(A[i][j]==0) {
                count++;
            }
        }
    }
    return count;
}

