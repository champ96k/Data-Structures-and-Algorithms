// { Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


int countBit(int n) {
    int count=0;
    while(n) {
        count+=n&1;
        n=n>>1;
    }
    return count;
}

int countSetBits(int n) {
    
    int ans=0;
    for(int i=1;i<=n;i++) {
        ans+=countBit(i);
    }
    return ans;
}




// { Driver Code Starts.

// Driver code
int main()
{
	 int t;
	 cin>>t;// input testcases
	 while(t--) //while testcases exist
	 {
	       int n;
	       cin>>n; //input n
	       
	       cout << countSetBits(n) << endl;// print the answer
	  }
	  return 0;
}
  // } Driver Code Ends
