/*

Sum of four
Well, that was easy. Isn’t it? Now we’ll go one step further and do the sum of elements of an array.

Write a program to print the sum of all the elements of an array of size 4.

Instructions:

We have defined an integer array  for you.
We have provided the code to get the input for the array elements.
You have to write the logic to add the elements.
Print the sum.

*/


include <iostream>
using namespace std; 
int main(void) {
	
	int numArray[4];   // Define an array of four integers
        int i;
	// Get inputs for the array elements
	for (i=0; i<4; i++) {
    	cin >> numArray[i];
	}
    
	int sum = 0;
	// Write the logic to add these integers here:

	for(int i=0;i<4;i++) {
		sum = sum+ numArray[i];
	}
 
	cout << sum << endl;// Print the sum
    
	return 0;
}
