/*
Maximum in Struct Array 

Given a struct array of type Height, having two elements feet and inches. Find the maximum height, where height is calculated sum of feet and inches after converting feet into inches.

Input:
First line of input contains number of testcases. For each testcase, first line of input contains N, number of given heights. Next line contains 2*N number of elements (feet and inches for each N).

Output:
Output maximum height from array.

Your Task: Your task is to only complete the function of find maximum height from given array.

Constraints:
1<=T<=100
1<=N<=105
0<=Feet, Inches<=105

Example:
Input:
2
2
1 2 2 1
4
3 5 7 9 5 6 5 5
Output:
25
93

Explanation:
Testcase 1: (1, 2) and (2, 1) are respective given heights. After converting both heigths in to inches, we get 14 and 25 as respective heights. So, 25 is the maximum height.


*/
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Height {
	int feet;
	int inches;
};

int findMax(Height arr[], int n);

// driver program
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n, tmp1, tmp2;
	    cin>>n;
	    Height arr[n];
	    for(int i=0; i<n; i++)
	    {
	        cin>>tmp1>>tmp2;
	        arr[i]={tmp1, tmp2};
	    }
	    int res = findMax(arr, n);
	    cout<<res<<endl;
	}
	return 0;
}// } Driver Code Ends


/*
Structure of the element of the array is as
struct Height {
	int feet;
	int inches;
};
*/
// function must return the maximum Height
// return the height in inches
int findMax(Height arr[], int n)
{
    // Code here
    int res=0;
    
    for(int i=0;i<n;i++) {
        res = max(res, arr[i].feet*12+arr[i].inches);
    }
    return res;
}
