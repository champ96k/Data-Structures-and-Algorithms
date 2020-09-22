/*
Given a sorted array of positive integers (elements may be repeated) and a number x. The task is to find the leftmost index of x in the given array.

Example 1:

Input:
N = 10
arr[] = {1,1,2,2,3,4,5,5,6,7}
X = 1
Output: 0
Explanation: 1 is present two times
in the array and its leftmost index 
is 0.
Example 2:

Input:
N = 7
arr[] = {10,20,20,20,20,20,20}
X = 20
Output: 1
Explanation: 20 is present 5 time, 
but its leftmost index is 1.
Your Task:
The task is to complete the function leftIndex() which takes the array arr[], its size N and an integer X as inputs and returns the index of leftmost occurrence of X in given input array. It returns -1 if element is not present in the array.

Expected Time Complexity: O(LogN).
Expected Auxiliary Space: O(1).


*/

#include <iostream>
using namespace std;

// Function to find element in sorted array

int leftIndex(int N, int arr[], int X){
    
    // Your code here
    for(int i=0;i<N;i++) {
        if(arr[i]==X)
        return i;
    }
    return -1;
    
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
	    
	    int elemntToSearch;
	    cin >> elemntToSearch;
	    
	    cout << leftIndex(sizeOfArray, arr, elemntToSearch) << endl;
	}
	
	return 0;
}  
