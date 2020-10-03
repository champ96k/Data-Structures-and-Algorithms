#include<bits/stdc++.h>
using namespace std;

int solve(int n, int k,int x,int y)
{

   if(n==y) 
   return 0;
   else 
   return (solve(n-1,k,x,y)+k)%n;
}


int main() {
  
  int t;
  cin>>t;
  
  while(t--) {
     int n,k,x,y;
     cin>>n>>k>>x>>y;
     
     if(solve(n,k,x,y)) {
       cout<<"NO"<<endl;
     } else {
       cout<<"YES"<<endl;
     }
  }
  
  
  return 0;
}
