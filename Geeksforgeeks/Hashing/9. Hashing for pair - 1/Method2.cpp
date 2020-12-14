/*
You are given an array of distinct integers and a sum. Check if there's a pair with the given sum in the array.

Example 1:

Input:
10
1 2 3 4 5 6 7 8 9 10 
14

Output: 
1

Explanation: 
arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10} 
and sum = 14.  There is a pair {4, 10} 
with sum 14.
Example 2:

Input:
2
2 5
10

Output:
0

Explanation: 
arr[]  = {2, 5} and sum = 10. 
There is no pair with sum 10.
Your Task:
You don't need to read input or print anything. Your task is to complete the provided function sumExists () which take the array arr[], its size N, and an integer sum as inputs and returns true if there exists a pair with the given sum in the array, else, it returns false.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(N).
*/

#include <bits/stdc++.h>
using namespace std;

int sumExists(int arr[], int sizeOfArray, int sum);

int sumExists(int arr[], int sizeOfArray, int sum)
{
    unordered_set<int> s; //using an unorered set
    for(int i = 0; i < sizeOfArray; i++)
         s.insert(arr[i]); //Inserting all elements in the set
     
    for(int i=0;i<sizeOfArray;i++)
    {
       if(sum-arr[i]==arr[i]) //Taking care of cases like 4-2=2 as two 2's cannot exist in distinct array
          continue;
       else
          {
              if(s.count(sum-arr[i])!=0) //If we find the pair return 1
              {
                return 1;
              }
          }
    }
return 0; //return 0
}


// { Driver Code Starts.

int main() {
    
    int testcases;
    cin>>testcases;
    while(testcases--)
    {
        int sizeOfArray;
        cin>>sizeOfArray;
        
        int arr[sizeOfArray];
        
        for(int i=0;i<sizeOfArray;i++)
        cin>>arr[i];
        int sum;
        cin>>sum;
        
        cout<<sumExists(arr,sizeOfArray,sum)<<endl;
        
        
    }
    
    
    
	return 0;
}
  // } Driver Code Ends
