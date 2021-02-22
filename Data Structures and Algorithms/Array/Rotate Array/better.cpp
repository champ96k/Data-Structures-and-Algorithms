#include<bits/stdc++.h>
using namespace std;

void reverse(int low,int high,int arr[]) {
    while(low<high) {
        swap(arr[low],arr[high]);
        low++;
        high--;
    }
}

//Function to rotate an array by d elements in counter-clockwise direction. 
void rotateArr(int arr[], int d, int n){
    // code here
   reverse(0,d-1,arr);
   reverse(d,n-1,arr);
   reverse(0,n-1,arr);
}

int main() {
	int t;
	//taking testcases
	cin >> t;
	
	while(t--){
	    int n, d;
	    
	    //input n and d
	    cin >> n >> d;
	    
	    int arr[n];
	    
	    //inserting elements in the array
	    for(int i = 0; i < n; i++){
	        cin >> arr[i];
	    }
	    
	    //calling rotateArr() function
	    rotateArr(arr, d,n);
	    
	    //printing the elements of the array
	    for(int i =0;i<n;i++){
	        cout << arr[i] << " ";
	    }
	    cout << endl;
	}
	return 0;
} 