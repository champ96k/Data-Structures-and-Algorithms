// C++ program to count  
// trailing 0s in n! 
#include <iostream> 
using namespace std; 


//Time complexity : 0(n) but overflow problem
int findTrailingZeros(int n) 
{ 
    int fact=1;
    for(int i=2;i<=n;i++) {
      fact=fact*i;
    }
    
    int count=0;
    
    while(fact%10==0) {
      count++;
      fact=count/10;
    }
  
    return count; 
} 
  
int main() 
{ 
    int t;
    cin>>t;
    while(t--) {
      int n;
      cin>>n;
      cout <<findTrailingZeros(n)<<endl; 
    }
    return 0; 
} 
