/*
Find the Duplicate Number

Time Complexity : O(n)
Auxiliary Space : O(n)

*/

#include<bits/stdc++.h>
using namespace std;

void findDublicateNumber(int a[],int n) 
  {
    int temp[n];
    temp[0]=a[0];
    int res=1;
    
  for(int i=1;i<n;i++) {
      if(temp[res-1]!=a[i]) {
        temp[res]=a[i];
        res++;
      }
    }
  
  for(int j=0;j<res;j++) {
    cout<<temp[j]<<" ";
  }
  
  
}

int main() {
  
  int t;
  cin>>t;
  while(t--) {
    int num;
    cin>>num;
    int a[num];
    
    for(int i=0;i<num;i++) {
      cin>>a[i];
    }
    
    findDublicateNumber(a,num);
  }
  
  return 0;
}
