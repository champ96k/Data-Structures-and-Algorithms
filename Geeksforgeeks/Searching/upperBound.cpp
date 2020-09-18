
// CPP program to illustrate using upper_bound()
// with vectors and arrays 

#include <bits/stdc++.h> 
using namespace std;

// Driver code 
int main() 
{ 
    /*** USING upper_bound() WITH VECTOR ***/
    
    vector<int> v{ 10, 20, 30, 40, 50 }; 

    // Print vector 
    cout << "Vector contains :"; 
    for (int i = 0; i < v.size(); i++) 
        cout << " " << v[i]; 
    cout << "\n"; 

    vector<int>::iterator upper1, upper2; 

    // std :: upper_bound 
    upper1 = upper_bound(v.begin(), v.end(), 35); 
    upper2 = upper_bound(v.begin(), v.end(), 45); 

    cout << "\nUpper_bound for element 35 is at position : "
            << (upper1 - v.begin()); 
    cout << "\nUpper_bound for element 45 is at position : "
            << (upper2 - v.begin())<<"\n\n"; 

    
    /*** USING upper_bound() WITH ARRAY ***/
    
    int arr[] = { 10, 20, 30, 40, 50 }; 
  
    // Print elements of array 
    cout << "Array contains :"; 
    for (int i = 0; i < 5; i++) 
        cout << " " << arr[i]; 
    cout << "\n"; 
  
    // using upper_bound 
    int up1 = upper_bound(arr, arr+5, 35) - arr; 
    int up2 = upper_bound(arr, arr+5, 45) - arr; 
  
    cout << "\nupper_bound for element 35 is at position : " 
              << (up1); 
    cout << "\nupper_bound for element 45 is at position : "
              << (up2); 
    
    return 0; 
}

