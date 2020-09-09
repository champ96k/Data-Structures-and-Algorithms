// Naive CPP Program to find inverse permutation. 
#include <bits/stdc++.h> 
using namespace std; 

// C++ function to find inverse permutations 
void inversePermutation(int arr[], int size) { 

// Loop to select Elements one by one 
for (int i = 0; i < size; i++) { 

	// Loop to print position of element 
	// where we find an element 
	for (int j = 0; j < size; j++) { 

	// checking the element in increasing order 
	if (arr[j] == i + 1) { 

		// print position of element where 
		// element is in inverse permutation 
		cout << j + 1 << " "; 
		break; 
	} 
	} 
} 
} 

// Driver program to test above function 
int main() { 
int arr[] = {2, 3, 4, 5, 1}; 
int size = sizeof(arr) / sizeof(arr[0]); 
inversePermutation(arr, size); 
return 0; 
} 

