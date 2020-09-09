/*
Insertion is a basic but frequently used operation. Arrays in most languages cannnot be dynamically shrinked or expanded. Here, we will work with such arrays and try to insert an element at some index.

You are given an array arr(0-based index). The size of the array is given by sizeOfArray. You need to insert an element at given index and print the modified array.

Example 1:

Input:
sizeOfArray = 6
arr[] = {1, 2, 3, 4, 5}
index = 5, element = 90
Output: 1 2 3 4 5 90
Explanation: 90 is inserted at index
5(0-based indexing). After inserting,
array elements are like
1, 2, 3, 4, 5, 90.
Example 2:

Input:
sizeOfArray = 6
arr[] = {1, 2, 3, 4, 5}
index = 2, element = 90
Output: 1 2 90 3 4 5
Explanation: 90 is inserted at index 
2(0-based indexing). After inserting,
array elements are like 
1, 2, 90, 3, 4, 5.
Your Task:
You don't need to read input or print anything.. The input is already taken care of by the driver code. You only need to complete the function insertAtIndex() that takes arr, sizeOfArray, index, element as input and modifies the array arr as per requirements. The printing is done by driver code.

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(1).
*/

#include <bits/stdc++.h>
using namespace std;

void insertAtIndex(int arr[],int sizeOfArray,int index,int element);

void insertAtIndex(int a[], int n, int index, int element)
{
    //Your code here
    for(int i=n-1;i>=index;i--) {
        a[i+1] = a[i];
    }
    
    a[index] = element;
    
    
}



// { Driver Code Starts.

int main() {
    int t;
    cin>>t;//Input testcases
    while(t--)
    {
        int sizeOfArray; 
        cin>>sizeOfArray;
        
        int arr[sizeOfArray];
        for(int i=0;i<sizeOfArray-1;i++)
        cin>>arr[i];
        
        int index;
        cin>>index;
        int element;
        cin>>element;
        
        insertAtIndex(arr,sizeOfArray,index,element); //Complete this function
        
        for(int i=0;i<sizeOfArray;i++)//Printing the array for verification
        cout<<arr[i]<<" ";
        
        cout<<endl;
        
    }
    
	return 0;
}  // } Driver Code Ends
