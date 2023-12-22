// Problem Description
// Given an array of integers A, a subarray of an array is said to be good if it fulfills any one of the criteria:
// 1. Length of the subarray is be even, and the sum of all the elements of the subarray must be less than B.
// 2. Length of the subarray is be odd, and the sum of all the elements of the subarray must be greater than B.
// Your task is to find the count of good subarrays in A.


// Problem Constraints
// 1 <= len(A) <= 5 x 103
// 1 <= A[i] <= 103
// 1 <= B <= 107


// Input Format
// The first argument given is the integer array A.
// The second argument given is an integer B.


// Output Format
// Return the count of good subarrays in A.


// Example Input
// Input 1:
// A = [1, 2, 3, 4, 5]
// B = 4
// Input 2:

// A = [13, 16, 16, 15, 9, 16, 2, 7, 6, 17, 3, 9]
// B = 65


// Example Output
// Output 1:
// 6
// Output 2:

// 36


// Example Explanation
// Explanation 1:
// Even length good subarrays = {1, 2}
// Odd length good subarrays = {1, 2, 3}, {1, 2, 3, 4, 5}, {2, 3, 4}, {3, 4, 5}, {5} 
// Explanation 1:
// There are 36 good subarrays



// Expected Output
// Provide sample input and click run to see the correct output for the provided input. Use this to improve your problem understanding and test edge cases


int Solution::solve(vector<int> &A, int B) {

    int n = A.size();

    int count = 0;

    for(int i=0;i<n;i++) {
        int currentSum = 0;
        int len = 0;
        for(int j=i;j<n;j++) {
        	len = j-i + 1;
            currentSum+=A[j];
            
             if(len%2 == 0 && currentSum < B) {
         		count++;
	         } else if(len % 2 != 0 && currentSum > B) {
	            	count++;
	        }
        }
        
    }

    return count;
}
