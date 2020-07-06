//Prime Number

#include<iostream>
using namespace std;

int main() {
  
  int num,m=0,flag=0;
  cout<<"Enter Integer Number: ";
  cin>>num;
  
  m = num/2;
  
  for(int i=2;i<=m;i++) {
    if(num%i==0) {
      cout<<num<<" Is Not Prime Number"<<endl;
      flag=1;
      break;
    } 
  }
  
  if(flag==0) {
      cout<<num<<" Is Prime Number"<<endl;
    }
  
 return 0;
}
