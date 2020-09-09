#include<bits/stdc++.h>
using namespace std;

void reverseArry(int a[],int n) {
  
  int j;

  for(j=n-1;j>=0;j--) {
    cout<<a[j]<<" ";
  }
  
}

int main() {
  int t;
  cin>>t;
  while(t--) {
    int n,i;
    cin>>n;
    int a[n];
    
    for(i=0;i<n;i++) {
      cin>>a[i];
    }
   reverseArry(a,n);
  
  }
}
