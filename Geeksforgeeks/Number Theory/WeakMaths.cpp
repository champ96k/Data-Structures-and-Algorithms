
#include <bits/stdc++.h>
using namespace std;


long long unsigned int lcm (long long unsigned int a, long long unsigned int b);
long long unsigned int gcd (long long unsigned int a, long long unsigned int b);

int main() {
	int T, N, M, i, j;
	cin >> T;

	while(T--) {
	    cin >> N ;
	    
	    long long unsigned int maxA = 0, ans=0;
	    long long unsigned int minA = 100001;
	    
	    int a[N];
	    for(i=0; i<N; i++) {
	    	cin >> a[i];
	    	if(a[i] < minA) {
	    		minA = a[i];
			}
			if(a[i] > maxA) {
				maxA = a[i];
			}
		}
		ans = lcm(minA, maxA);
		cout << ans << endl;
	}
	return 0;
}

long long unsigned int lcm (long long unsigned int a, long long unsigned int b) {
	return ((a*b)/gcd(a, b));
}

long long unsigned int gcd (long long unsigned int x, long long unsigned int y) {
	long long unsigned int maxA = (x>y) ? x : y;
	long long unsigned int other = (maxA==x) ? y : x;
	
	if(other == 0) {
		return maxA;
	}
	gcd (maxA%other, other);
}


//private test case not run

/*
#include <bits/stdc++.h>
using namespace std;

int WeakMath(vector<int> &v) {
  int& x = v.back();
  int& y = v.front();

  return x*y;
}

int main() {
	//code
	int t;
	cin>>t;
	while(t--) {
	  vector<int> v;
	  int n,element;
	  cin>>n;
	  for(int i=0;i<n;i++) {
	     cin>>element;
	     v.push_back(element);
	  }
	  sort(a.begin(), a.end()); 
	  
	  cout<<WeakMath(v)<<endl;
	}
	return 0;
}

*/
