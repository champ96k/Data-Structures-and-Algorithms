/*
Given an array A[] of N positive integers which can contain integers from 1 to N where elements can be repeated or can be absent from the array. Your task is to count the frequency of all elements from 1 to N.

Example 1:

Input:
N = 5
A[] = {2,3,2,3,5}
Output: 0 2 2 0 1
Explanation: 
Counting frequencies of each array element
We have:
1 occurring 0 times.
2 occurring 2 times.
3 occurring 2 times.
4 occurring 0 times.
5 occurring 1 time.

Your Task:
Complete the function frequencycount() that takes the array and N as input parameters and updates the given array in place to denote the frequency count of each element from 1 to N. ie- element at index 0 should represent frequency of 1 and so on. The driver code prints the contents of the modified array. 

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)

*/

#include<bits/stdc++.h> 
using namespace std; 
void frequencycount(vector<int>& arr,int n);

void frequencycount(vector<int>& arr,int n)
{ 
    for (int j =0; j<n; j++) 
        arr[j] = arr[j]-1;
        
    for(int i=0;i<n;i++)
        arr[arr[i] %n] += n;
    for(int i=0;i<n;i++)
        arr[i] = arr[i]/n;
}


int main() 
{ 
	long long t;
	cin >> t;
	
	while(t--){
	    
	    int n;
	    cin >> n; 
	    
	    vector<int> arr(n,0);
	    
	    for(int i = 0;i<n;i++){
	        cin >> arr[i]; 
	    }

		frequencycount(arr,n); 
	    for (int i =0; i<n; i++) 
			cout<<arr[i]<<" ";
	    cout<<endl;
	}	
	return 0; 
}

