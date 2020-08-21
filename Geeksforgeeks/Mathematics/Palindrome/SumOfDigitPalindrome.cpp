#include<bits/stdc++.h>
using namespace std;


bool palindromeNumber(int n) {
  
  int ld,temp=n,rev=0;
  while(temp!=0) {
    ld=temp%10;
    rev=rev*10+ld;
    temp=temp/10;
  }
  return(n==rev);
  
}



int main() {
  int t;
  cin>>t;
  while(t--) {
    int num,ld=0,sum=0;
    cin>>num;
    while(num>0) {
      ld=num%10;
      sum=sum+ld;
      num=num/10;
    }
    
   if(palindromeNumber(sum)) {
      cout<<"YES"<<endl;
    } else {
      cout<<"NO"<<endl;
    }
  }
  return 0;
}
