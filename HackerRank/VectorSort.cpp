#include<iostream>
#include <bits/stdc++.h> 
using namespace std;

int main() {
  
  vector<int> v;
  int n,i,element;
  cin>>n;
  
  for(i=0;i<n;i++) {
    cin>>element;
    v.push_back(element);
  }
  
  sort(v.begin(),v.end());
  
  for(i=0;i<n;i++) {
    cout<<v[i]<<" ";
  }
  
  return 0;
}
