#include<bits/stdc++.h>
using namespace std;

int main() {

  string str;
  cin>>str;
  
  
  int xcout=0,ycount=0;
  
  while(str.length()<20) {
    for(int i=0;i<str.size();i++) {
    
    if(str[i]!='o' && str[0]=='z') {
      xcout++;
    }
    else {
      ycount++;
    }
  }
 
  
  if(xcout=2*ycount) {
    cout<<"Yes";
    break;
  }
  else {
    cout<<"No";
    break;
  }
  }
    
 return 0;
}
