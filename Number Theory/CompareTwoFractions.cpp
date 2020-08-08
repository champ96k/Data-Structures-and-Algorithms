#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t-- > 0) {
	    int a; cin >> a;
	    char _; cin >> _;
	    int b; cin >> b;
	    cin >> _;
	    int c; cin >> c;
	    cin >> _;
	    int d; cin >> d;
	    
	    if (a*d > b*c) {
	        cout << a << '/' << b;
	    } else if (a*d < b*c) {
	        cout << c << '/' << d;
	    } else {
	        cout << "equal";
	    }
	    cout << '\n';
	}
	return 0;
}
