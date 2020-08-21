#include <bits/stdc++.h>
using namespace std;

void sumOfDigit(int n) {
  int sum=0;
    while(n!=0) {
    sum = sum+n%10;
    n=n/10;
 }
  cout<<sum<<endl;
}

int main() {
	//code
	
	int t;
	cin>>t;
	while(t--) {
	  int num;
	  cin>>num;
	  sumOfDigit(num);
	}
	
	return 0;
}
