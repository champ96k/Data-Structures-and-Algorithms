// CPP Program to check if a number can 
// be written as sum of three consecutive 
// integers. 

//Method 1: (Brute Force):
//The idea is to run a loop from i = 0 to n – 2, check if (i + i+1 + i+2) is equal to n. Also, check if n is positive or negative and accordingly increment or decrement i by 1.

//Below is the implementation of this approach:

#include <bits/stdc++.h> 
using namespace std; 
  
// function to check if a number can be written as sum of 
// three consecutive integer. 
void consecutiveNumber(int n) 
{ 
    // if n is 0 
    if (n == 0) { 
        cout << "-1 0 1" << endl; 
        return; 
    } 
  
    int inc; 
  
    // if n is positive, increment loop by 1. 
    if (n > 0) 
        inc = 1; 
  
    // if n is negative, decrement loop by 1. 
    else
        inc = -1; 
  
    // Running loop from 0 to n - 2 
    for (int i = 0; i <= n - 2; i += inc) { 
  
        // check if sum of three consecutive 
        // integer is equal to n. 
        if (i + i + 1 + i + 2 == n) { 
            cout << i << " " << i + 1 
                 << " " << i + 2; 
            return; 
        } 
    } 
  
    cout << "-1"; 
} 
  
int main() {
	//code
	int t;
	cin>>t;
	while(t--) {
	    int n;
	    cin>>n;
	    consecutiveNumber(n);
	}
	return 0;
}
