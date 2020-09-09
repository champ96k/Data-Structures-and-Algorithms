//Tushar Nikam codes
#include<bits/stdc++.h>
using namespace std;

void inversePermutation(int arr[], int size) { 
  
  // to store element to index mappings 
  int arr2[size]; 
  
  // Inserting position at their 
  // respective element in second array 
  for (int i = 0; i < size; i++)  
    arr2[arr[i] - 1] = i + 1;  
  
  for (int i = 0; i < size; i++)  
    cout << arr2[i] << " ";   
} 

int main()
{
    //T for Number of Test Cases
    int T;
    cin>>T;
    while(T--)
    {
        //start here
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) {
            cin>>a[i];
        }
        
        inversePermutation(a,n);
        cout<<endl;
        
    }
    return 0;
}
