//Find Missing Number of given array
/*
         No repeted Number allowed
        i/p => array[] = {'1','3','5','2'};
        o/p => 4
        
        Method 1:       
                using sum of total
                total = (n+1)*(n+2)/2
*/

#include<iostream>
using namespace std;

int getMissingNumber(int arr[],int n) {
  int total;
  total = (n+1)*(n+2)/2;
  for(int i=0;i<n;i++) {
    total = total-arr[i];
  }
  return total;
}

int main() {
  int n;
  cout<<"How Many Array Element You Want to Insert: ";
  cin>>n;
  int arr[n];
  
  cout<<"Enter "<<n<<" array Eleemnt: ";
  for(int i=0;i<n;i++) {
    cin>>arr[i];
  }
  
  int MissingNum = getMissingNumber(arr,n);
  cout<<"Missing Number: "<<MissingNum<<endl;
  
  return 0;
}	
