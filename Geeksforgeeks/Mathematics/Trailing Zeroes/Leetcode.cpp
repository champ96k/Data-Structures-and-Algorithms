#include <bits/stdc++.h>
using namespace std;

// Time complexity: 0(logn)

int countTrailngZero(int n) {
    int res=0;
    for(int i=5;i<=n;i=i*5) {
        res=res+n/i;
    }
    return res;
}

int main() {
	
	    int num;
	    cin>>num;
	    cout<<countTrailngZero(num);
	
	return 0;
}
