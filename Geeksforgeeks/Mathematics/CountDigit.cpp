#include<bits/stdc++.h>
using namespace std;

int countDigit(int n) {
  int digitSum=0;
  
  while(n>0) {
      n=n/10;
      digitSum++;
   }
  return digitSum;
}

int main() {

  int t;
  cin>>t;
  while(t--) {
    int n;
    cin>>n;
    cout<<countDigit(n)<<endl;
  }
 
  return 0;
}
