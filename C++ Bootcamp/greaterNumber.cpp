#include<bits/stdc++.h>
using namespace std;

int main() {
  int n1,n2,n3,n4;
  cin>>n1>>n2>>n3>>n4;
  
  if(n1 > n2 && n1>n3 && n1>n4) {
    cout<<n1<<endl;
  }
  else if(n2 > n1 && n2>n3 && n2>n4) {
    cout<<n2<<endl;
  }
  else if(n3 > n1 && n3>n2 && n3>n4) {
    cout<<n3<<endl;
  }
  else {
    cout<<n4<<endl;
  }
  
  
  return 0;
}
