/*
Sum of N
Write a program to print the sum of all the elements of an array of size N where N can be any integer between 1 and 100. 

Instructions:

We have defined an integer variable N for you.
We have provided the code to get the input for variable N.
We have defined an integer array .
We have provided the code to get the input for the array elements.
You have to write the logic to add the array elements.
Print the sum.
Sample Input:
N = 3
Array = 6 3 8

Sample Output:
17

*/


#include <iostream>
using namespace std;
 
int main(void) {
    
	int N, i;
	cin >> N;
 
	int numArray[N]; // Define an array of four integers
    
	// Get inputs for the array elements
	for (i=0;i<N; i++) {
    	cin >> numArray[i];
	}
	
	int sum = 0;
	// Write here the logic to add these integers:

	for (i=0;i<N; i++) {
    	sum = sum + numArray[i];
	}
    
	cout << sum << endl;  // Print the sum
    
	return 0;
}
