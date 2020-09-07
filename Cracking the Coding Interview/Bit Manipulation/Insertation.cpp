
#include<bits/stdc++.h>
using namespace std;

long long int solve(long long int n,long long int m,int i,int j) {  
  long long int allones = ~0;
  long long int left = allones <<(j+1);
  long long int right = ((1<i)-1);
  long long int mask = (left | right);
  long long int n_cleared = n&mask;
  long long int m_shifted = m<<i;
  
  return (n_cleared | m_shifted);
  
}

int main() {

 int t;
 cin>>t;
 while(t--) {
   long long int n,m;
   int i,j;
   cin>>n>>m;
   cin>>i>>j;
   cout<<solve(n,m,i,j);
 }
 
  return 0;
}
