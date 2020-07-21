#include<bits/stdc++.h>
using namespace std;

//Find the sum of n natural Number

//fun1 => c1
int fun1(int n) {
  return n*(n+1)/2;
}

//fun2 =>c2n+c3
int fun2(int n) {
  int sum=0;
  for(int i=1;i<=n;i++) {
    sum=sum+i;
  }
  return sum;
}


//fun3 =>c4n^2+c5+c6
int fun3(int n) {
  int sum=0;
  for(int i=1;i<=n;i++) {
    for(int j=1;j<=i;j++) {
    sum++;
    }
  }
  return sum;
}


int main() {
  
  int n;
  cout<<"Enter any Integer Number: ";
  cin>>n;
  cout<<"The Sum of "<<n<<" Natural Number is :"<<fun1(n)<<endl;
  cout<<"The Sum of "<<n<<" Natural Number is :"<<fun2(n)<<endl;
  cout<<"The Sum of "<<n<<" Natural Number is :"<<fun3(n)<<endl;
  
  return 0;  
}
