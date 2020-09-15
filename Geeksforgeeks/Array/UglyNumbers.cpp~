/*

*/

#include <bits/stdc++.h>
using namespace std;

#define ull unsigned long long


 // } Driver Code Ends





//User function template for C++
class Solution{
public:	
	// #define ull unsigned long long
	/* Function to get the nth ugly number*/
	
	int maxDivide(int a, int b) 
    { 
        while (a%b == 0) 
        a = a/b;  
    return a; 
    }     
    
    /* Function to check if a number is ugly or not */
    int isUgly(int no) 
    { 
        no = maxDivide(no, 2); 
        no = maxDivide(no, 3); 
        no = maxDivide(no, 5); 
    
    return (no == 1)? 1 : 0; 
    }   
	
	ull getNthUglyNo(int n) {
	    // code here
	    int i = 1;  
        int count = 1;   /* ugly number count */ 
        
        /*Check for all integers untill ugly count  
        becomes n*/ 
        while (n > count) 
        { 
        i++;       
        if (isUgly(i)) 
          count++;  
        } 
        return i;
	}
	
	
};


// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.getNthUglyNo(n);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends
