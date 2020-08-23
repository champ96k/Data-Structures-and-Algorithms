/*
  Left rotate array by d times 
  
  i/p   - A = {10,20,30,40,50}
          d = 2
          
  o/p   - 30,40,50,10,20
  
  time: 0(nd)
  A space: 0(1)

*/

#include<bits/stdc++.h>
using namespace std;

void rotateleftbyDTimes(int a[],int n,int d) {
  for(int i=0;i<d;i++) {
    rotateLeft(a,n);
  }
}

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
    
    //How many times you want to rotate
    int d;
    cin>>d;
    
   rotateleftbyDTimes(a,n,d);
  
  }
}
