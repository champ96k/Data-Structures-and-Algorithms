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

void rotatebyD(int a[],int n,int d) {
  int temp[d];
  
  for(int i=0;i<d;i++) 
    temp[i]=a[i];
   
  for(int i=d;i<n;i++) {
    a[i-d]=a[i];
  } 
  
  for(int i=1;i<n;i++) {
    a[n-d+i]=temp;
  }   
  
   for(int i=0;i<n;i++) {
    cout<<a[i]<<" ";
  } 
  
}

int main() {
  int t;
  cin>>t;
  while(t--) {
    int n,i;
    cin>>n;
    int a[n];
    int d;
    cin>>d;
    
    for(i=0;i<n;i++) {
      cin>>a[i];
    }
   rotatebyD(a,n,d);
   cout<<endl;
  
  }
}
