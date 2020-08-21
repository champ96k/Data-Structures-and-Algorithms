//Fibonacci Series without Recursion


#include<iostream>
using namespace std;

int main() {

  int n,n1=0,n2=1,n3;
  cout<<"How Many Fibonacci Series you Want: ";
  cin>>n;
  cout<<n1<<" "<<n2<<" ";
  for(int i=2;i<n;i++) {
    n3 = n1+n2;
    cout<<n3<<" ";
    n1 = n2;
    n2 = n3;
    
    /*
    if(n3<n) {
      cout<<n3<<" ";
    } else {
      break;
    }
    */
  }
  cout<<endl;
  
  return 0;
}


