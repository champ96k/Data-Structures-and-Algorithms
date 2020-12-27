// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
  
  long long int getCumulateSum(long long int n) 
    { 
        return (n * (n + 1)) / 2; 
    } 
  
// Method returns minimum number of days after  
// which tank will become empty 
int minDaysToEmpty(long long int C, long long int l) 
{ 
    // if water filling is more than capacity then 
    // after C days only tank will become empty 
    if (C <= l)  
        return C;     
  
    // initialize binary search variable 
    long long int lo = 0; 
    long long int hi = 1e4; 
    long long int mid; 
  
    // loop until low is less than high 
    while (lo < hi) { 
        mid = (lo + hi) / 2; 
  
        // if cumulate sum is greater than (C - l)  
        // then search on left side 
        if (getCumulateSum(mid) >= (C - l))  
            hi = mid; 
          
        // if (C - l) is more then search on 
        // right side 
        else 
            lo = mid + 1;         
    } 
  
    // final answer will be obtained by adding 
    // l to binary search result 
    return (l + lo); 
} 

     
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int c, l;
        cin >> c;
        cin >> l;
        Solution ob;
        cout << ob.minDaysToEmpty(c, l) << endl;
    }
    return 0;
}
