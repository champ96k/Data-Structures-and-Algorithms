#include <bits/stdc++.h>
using namespace std;

int sumOfDivisor(int n) {
    int sum=1;
    
    for(int divisor=2;divisor<= (n/2);divisor++) {
        if(n%divisor==0) {
            sum=sum+divisor;
        }
    }
    return sum;
}
int main() {
	//code
	int t;
	cin>>t;
	while(t--) {
	    int n;
	    cin>>n;
	    cout<<sumOfDivisor(n)<<endl;
	}
	return 0;
}
