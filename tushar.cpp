#include <bits/stdc++.h> 
using namespace std; 


int solve(vector<int> &A, int B) {

    int n = A.size();

    int sum=0;
    for(int i=0;i<B;i++){
        sum += A[i];
    }

    int index=0;
    int ans=sum;
    for(int i=1;i<n-B+1;i++){
        sum += A[i+B-1]-A[i-1];
        if(sum<ans){
            ans = sum;
            index=i;
        }
    }
    return index;
}


int main() {

#ifndef ONLINE_JUDGE 
	freopen("input.txt", "r", stdin); 
	freopen("output.txt", "w", stdout); 
#endif 

	int t; 
	cin>>t;

	while (t--) {

		vector<int> A = {3, 7, 90, 20, 10, 50, 40};
		int B = 3;

		cout<<solve(A,B)<<endl;

	}

   cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl; 
	return 0;

}











