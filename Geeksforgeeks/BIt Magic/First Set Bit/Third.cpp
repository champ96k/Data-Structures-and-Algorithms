
#include<bits/stdc++.h>
using namespace std;


unsigned int getFirstSetBit(int n){
    
     int n1= (n&(n-1)); // this give all alternate digit form rightmost one 
      n1=~n1; // this flip all the digit//
      int n2= (n1&n);
       return log2(n2)+1;// find the postion of one//
    
    
}

int main()
{
    int t;
    cin>>t; // testcases
    while(t--)
    {
        int n;
        cin>>n; //input n
        printf("%u\n", getFirstSetBit(n)); // function to get answer
    }
	return 0;
}
  // } Driver Code Ends
