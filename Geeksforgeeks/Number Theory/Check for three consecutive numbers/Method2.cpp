//Method 2: (Efficient Approach)

// CPP Program to check if a number can be  
// written as sum of three consecutive integer. 

/*
Method 2: (Efficient Approach)
The idea is to check if n is multiple of 3 or not.
Let n is sum of three consecutive integer of k – 1, k, k + 1. Therefore,
k – 1 + k + k + 1 = n
3*k = n
The three number will be n/3 – 1, n/3, n/3 + 1.

*/


#include <bits/stdc++.h> 
using namespace std; 
  
// function to check if a number can be 
// written as sum of three consecutive  
// integers. 
void consecutiveNumber(int n) 
{ 
    // if n is multiple of 3 
    if (n % 3 == 0) 
        cout << n / 3 - 1 << " " 
             << n / 3 << " " << n / 3 + 1; 
  
    // else print "-1". 
    else
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
