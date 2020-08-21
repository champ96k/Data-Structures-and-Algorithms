#include <bits/stdc++.h>
using namespace std;

int countDigit(int n) {
  return floor(log10(n)+1);
}

bool NarcissisticNumber(int n) {

  int cnt=countDigit(n);
  int temp = n;
  int sum = 0;
  
    while(temp) {
      sum += pow(temp%10,cnt);
      temp/=10;     
  } 
  return (n==sum);
}

int main() {
	int t;
	cin>>t;
	while(t--) {
	  int num;
	  cin>>num;
              if(NarcissisticNumber(num)) {
                cout<<"Yes"<<endl;
              } else {
                cout<<"No"<<endl;
              }
	  
	}
	return 0;
}
