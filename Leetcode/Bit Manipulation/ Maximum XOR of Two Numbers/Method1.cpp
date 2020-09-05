// Time complexity = 0(n^2)

#include<bits/stdc++.h>
using namespace std;

int MaxXor(int a[],int n) {
  
  int maxXOR=0;
  for(int i=0;i<n;i++) {
    for(int j=i+1;j<n;j++) {
      maxXOR = max(maxXOR,(a[i]^a[j]));
    }
  }
  return maxXOR;
  
}

int main() {
  int t;
  cin>>t;
  
  while(t--) {
     //Enter number of array
     int n;
     cin>>n;
     int a[n];
     
     for(int i=0;i<n;i++) {
       cin>>a[i];
     }
     
     cout<<MaxXor(a,n)<<endl;
  }
}
