#include <bits/stdc++.h>
using namespace std;

int getSum(int n) 
{  
int sum = 0; 
while (n != 0) 
{ 
    sum = sum + n % 10; 
    n = n/10; 
} 
return sum; 
} 
  
// returns maximum sum 
int largestDigitSumdivisior(int n) 
{ 
    int res = 0; 
    for (int i = 1; i <= n; i++)  
  
        // if i is factor of n  
        // then push the divisor  
        // in the stack. 
        if (n % i == 0)  
        res = max(res, getSum(i)); 
  
    return res; 
} 

int main() {
	//code
	int t;
	cin>>t;
	while(t--) {
	    int n;
	    cin>>n;
	    cout<<largestDigitSumdivisior(n)<<endl;
	}
	return 0;
}
