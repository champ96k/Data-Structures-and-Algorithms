
// C++ code to demonstrate the working 
// of binary_search() 

#include<bits/stdc++.h> 
using namespace std; 

int main() 
{   
    /*** USING binary_search() ON VECTOR ***/

    // initializing vector of integers 
    vector<int> vec = {10, 15, 20, 25, 30, 35}; 
    
    // using binary_search to check if 15 exists 
    if (binary_search(vec.begin(), vec.end(), 15)) 
        cout << "15 exists in vector"; 
    else
        cout << "15 does not exist"; 
    
    cout << endl; 
    
    /*** USING binary_search() ON ARRAYS ***/
    int arr[] = {10, 15, 20, 25, 30, 35}; 
    int n = sizeof(arr)/sizeof(arr[0]);
    
    // using binary_search to check if 20 exists 
    if (binary_search(arr, arr + n, 20)) 
        cout << "20 exists in Array"; 
    else
        cout << "20 does not exist"; 
    
    return 0;
} 

