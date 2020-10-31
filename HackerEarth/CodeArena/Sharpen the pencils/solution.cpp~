#include<bits/stdc++.h>
using namespace std;

int solve(int arr[],int n) {
	int Xsum=0,Ysum=0;
	int low=0,high=n-1;
	int xcount=0;
	int ycount=0;

	while(low<high) {
		if(Xsum>Ysum) {
			ycount++;
			Ysum=Ysum+(2*arr[high]);
			high--;	
		} else if(Ysum>Xsum) {
			xcount++;
			Xsum+=arr[low];
			low++;
		} else {
			Ysum=Ysum+(2*arr[high]);
			ycount++;
			high--;
			
			Xsum+=arr[low];
			xcount++;
			low++;
		}
	}
	if(low==high && Xsum<=Ysum)
		xcount++;

	if(low==high && Xsum>Ysum)
		ycount++;
	
	cout<<xcount<<" "<<ycount<<endl;
}

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++) {
			cin>>a[i];
		}
		solve(a,n);
	}
	return 0;
}
