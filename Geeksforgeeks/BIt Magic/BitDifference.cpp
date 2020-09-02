// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;



int countBit(int n) {
    int count=0;
    while(n) {
        count=count+(n&1);
        n=n>>1;
    }
    return count;
}
int countBitsFlip(int a, int b){
    return countBit(a^b);
}




// { Driver Code Starts.

// Driver Code
int main()
{
	int t;
	cin>>t;// input the testcases
	while(t--) //while testcases exist
	{
		int a,b;
		cin>>a>>b; //input a and b

		cout<<countBitsFlip(a, b)<<endl;
	}
	return 0;
}  // } Driver Code Ends
