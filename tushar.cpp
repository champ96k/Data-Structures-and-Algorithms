#include <bits/stdc++.h> 
using namespace std; 


 void fun(int a[]) {
       a[3] = 98;
    return;
}

int main() {

#ifndef ONLINE_JUDGE 
	freopen("input.txt", "r", stdin); 
	freopen("output.txt", "w", stdout); 
#endif 

	int t; 
	cin>>t;

	while (t--) {


		int arr[5] = {1, 2, 3, 4, 5};

		fun(arr);


		cout<<arr[3]<<endl;




   }

   	cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << endl; 
	return 0;

}












