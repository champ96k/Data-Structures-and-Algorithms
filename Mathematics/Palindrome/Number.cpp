#include<bits/stdc++.h>
using namespace std;


//Time Compexity O(d) where d is number of digit
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
    int num;
    cin>>num;
    if(palindromeNumber(num)) {
      cout<<"Yes"<<endl;
    } else {
      cout<<"No"<<endl;
    }
  }
  return 0;
}
