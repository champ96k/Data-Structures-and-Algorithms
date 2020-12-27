#include<bits/stdc++.h>
using namespace std;

int countMethod(string s,int n){
  int count=0;
  for(int i=0;i<n;i++) {
    if(s[i]=='0')
      count++;
  }
  return count;
}


int main() {
  int t;
  cin>>t;
  
  while(t--) {
     int n;
     cin>>n;
     
     string str;
     
     cin>>str;
     
    int zero=countMethod(str,n);
    
    int one=(120-zero);
    cout<<"Zero: "<<zero<<endl;
    cout<<"one: "<<one<<endl;
    
    float res=((one/120.0)*100.0);
    cout<<"res: "<<res<<endl;
    
    if(res>=75.0) {
      cout<<"YES"<<endl;
    }else {
      cout<<"NO"<<endl;
    }
     
  } 
  
  return 0;
}
