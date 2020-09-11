
#include <iostream>
#include <climits>
using namespace std;

void maximumAdjacent(int, int[]);

// Function to find maximum of all subarray of size two
void maximumAdjacent(int n, int a[]){
    
    int res=0;
     for(int i=1;i<n;i++) {
         cout<<max(a[i],a[i-1])<<" ";
     }
}


int main() {
	
	// Testcase input
	int testcases;
	cin >> testcases;
    
    // Looping through all testcases
	while(testcases--){
	    int sizeOfArray;
	    cin >> sizeOfArray;
	    
	    int arr[sizeOfArray];
	    
	    // Array input
	    for(int index = 0; index < sizeOfArray; index++){
	        cin >> arr[index];
	    }
	    
	    maximumAdjacent(sizeOfArray, arr);
	    cout << endl;
	}
	
	return 0;
}  
