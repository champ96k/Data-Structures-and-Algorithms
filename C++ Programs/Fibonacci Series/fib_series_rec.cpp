//Fibonacci Series with recurrsion


#include<iostream>
using namespace std;

int fib(int num) {
  if(num==0) {
    return 0;
  } else if(num==1 || num==2) {
    return 1;
  } else {
    return (fib(num-1) + fib(num-2));
  }
}
int main() {
  
  int n;
  cout<<"How Many Number you Want: ";
  cin>>n;
  for(int i=0;i<n;i++) {
    cout<<" "<<fib(i)<<" ";
  }
  
  cout<<endl;
  
  return 0;
}
