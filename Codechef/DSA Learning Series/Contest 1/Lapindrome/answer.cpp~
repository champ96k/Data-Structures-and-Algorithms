#include<bits/stdc++.h>
using namespace std;

bool tushar(string str) {
  
  int left[26],right[26];
  for(int i=0;i<26;i++) {
    left[i]=0;
    right[i]=0;
  }
  
  for(int i=0;i<str.size()/2;i++) {
    char x=str[i];
    left[x-'a']++;
  }
  
  for(int i=(str.size()+1)/2;i<str.size();i++) {
    char y=str[i];
    right[y-'a']++;
  }

  for(int i=0;i<str.size();i++) {
    if(left[i]!=right[i]) {
        return false;
     }
  } 
 return true; 
}

int main() {
  int t;
  cin>>t;
  while(t--) {
    string str;
    cin>>str;
    if(tushar(str)) {
      cout<<"YES"<<endl;
    } else {
      cout<<"NO"<<endl;
    }
  }
}
