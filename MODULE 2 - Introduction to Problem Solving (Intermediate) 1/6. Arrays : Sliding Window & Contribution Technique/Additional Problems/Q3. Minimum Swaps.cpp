// Problem Description

// Given an array of integers A and an integer B, find and return the minimum number of swaps required to bring all the numbers less than or equal to B together.

// Note: It is possible to swap any two elements, not necessarily consecutive.



// Problem Constraints

// 1 <= length of the array <= 100000
// -109 <= A[i], B <= 109



// Input Format

// The first argument given is the integer array A.
// The second argument given is the integer B.



// Output Format

// Return the minimum number of swaps.



// Example Input

// Input 1:

//  A = [1, 12, 10, 3, 14, 10, 5]
//  B = 8
// Input 2:

//  A = [5, 17, 100, 11]
//  B = 20


// Example Output

// Output 1:

//  2
// Output 2:

//  1


// Example Explanation

// Explanation 1:

//  A = [1, 12, 10, 3, 14, 10, 5]
//  After swapping  12 and 3, A => [1, 3, 10, 12, 14, 10, 5].
//  After swapping  the first occurence of 10 and 5, A => [1, 3, 5, 12, 14, 10, 10].
//  Now, all elements less than or equal to 8 are together.
// Explanation 2:

//  A = [5, 17, 100, 11]
//  After swapping 100 and 11, A => [5, 17, 11, 100].
//  Now, all elements less than or equal to 20 are together.
 


// Expected Output
// Provide sample input and click run to see the correct output for the provided input. Use this to improve your problem understanding and test edge cases

int Solution::solve(vector<int> &A, int B) {

    int totalB = 0, minSwaps = INT_MAX;
    for(int i=0;i<A.size();i++){
        if(A[i]<=B){
            totalB++;
        }
    }

    int left = 0, right = 0, currB = 0;
    while(right<totalB){
        if(A[right]<=B){
            currB++;
        }
        right++;
    }
    while(right<A.size()){
        if(totalB-currB<minSwaps){
            minSwaps = totalB-currB;
        }
        if(A[right++]<=B){
            currB++;
        }
        if(A[left++]<=B){
            currB--;
        }
    }
    if(minSwaps==INT_MAX){
        return 0;
    }
    return minSwaps;
}
