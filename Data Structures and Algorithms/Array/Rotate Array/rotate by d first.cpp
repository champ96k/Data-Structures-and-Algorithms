#include<bits/stdc++.h>
using namespace std;


void leftRotateByOne(int a[],int n) {
    int temp=a[0];
    for(int i=1;i<n;i++) {
        a[i-1]=a[i];
    }
    a[n-1]=temp;
}

//Function to rotate an array by d elements in counter-clockwise direction. 
void rotateArr(int arr[], int d, int n){
    // code here
    for(int i=0;i<d;i++) {
       leftRotateByOne(arr,n);
    }
    
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