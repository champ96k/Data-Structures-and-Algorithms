#include<bits/stdc++.h>
using namespace std;

int linearSearch(int a[],int n,int x) {
  
  for(int i=0;i<n;i++) {
    if(a[i]==x)
    return i;
  } 
  return -1;
} 

int main() {
  
  int n;
  cout<<"How many array element you want to insert: ";
  cin>>n;
  int a[n];
  cout<<"\nEnter Array Element: ";
  for(int i=0;i<n;i++) {
    cin>>a[i];
  }
  
  cout<<"\nWhich Element you want to Insert: ";
  int x;
  cin>>x;
  
  cout<<"\nElement present at index : "<<linearSearch(a,n,x)<<endl;
  
  return 0;
}
