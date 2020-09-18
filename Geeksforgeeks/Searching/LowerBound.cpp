
// CPP program to illustrate lower_bound()
// for both vectors and array

#include <bits/stdc++.h> 
using namespace std;

// Driver code 
int main() 
{   
    /*** USING lower_bound() ON VECTORS ***/
    
    vector<int> v{ 10, 20, 30, 40, 50 }; 

    // Print vector 
    cout << "Vector contains :"; 
    for (int i = 0; i < v.size(); i++) 
        cout << " " << v[i]; 
    cout << "\n"; 

    vector<int>::iterator low1, low2; 

    // using lower_bound() 
    low1 = lower_bound(v.begin(), v.end(), 20); 
    low2 = lower_bound(v.begin(), v.end(), 55); 

    cout << "\nlower_bound for element 20 at position : " 
         << (low1 - v.begin()); 
    cout << "\nlower_bound for element 55 at position : " 
         << (low2 - v.begin()); 
    
    
    /*** USING lower_bound() ON ARRAYS ***/
    
    int arr[] = { 10, 20, 30, 40, 50 }; 

    // Print elements of array 
    cout << "\n\nArray contains :"; 
    for (int i = 0; i < 5; i++) 
        cout << " " << arr[i]; 
    cout << "\n"; 

    // using lower_bound()
    int lb1 = lower_bound(arr, arr + 5, 20) - arr; 
    int lb2 = lower_bound(arr, arr + 5, 55) - arr;
    
    cout << "\nlower_bound for element 20 is at position : " 
         << (lb1); 
    cout << "\nlower_bound for element 55 is at position : " 
         << (lb2); 
    
    return 0; 
} 

