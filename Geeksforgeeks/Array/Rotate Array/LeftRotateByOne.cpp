/*
  Left rotate array by one element 
  
  i/p   - 10,20,30,40,50
  o/p   - 20,30,40,50,10


*/

#include<bits/stdc++.h>
using namespace std;

void rotateLeft(int a[],int n) {
  
  int temp=a[0];
  
  for(int i=1;i<n;i++) {
    a[i-1]=a[i];
  }  
  a[n-1]=temp;  
  for(int j=0;j<n;j++) {
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
   rotateLeft(a,n);
  
  }
}
