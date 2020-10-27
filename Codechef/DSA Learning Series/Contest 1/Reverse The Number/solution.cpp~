#include<bits/stdc++.h>
using namespace std;

int reverseNum(int num) {
    
    int res=0;
    while(num) {
        int last=num%10;
        res = res*10+last;
        num=num/10;
    }
    return res;
}

int main() {
  
  int t;
  cin>>t;
  
  while(t--) {
    int n;
    cin>>n;
    cout<<reverseNum(n)<<endl;
  }
  
  
  return 0;
}
