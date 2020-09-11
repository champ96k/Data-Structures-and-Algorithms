//Find Missing Number of given array
/*
         No repeted Number allowed
        i/p => array[] = {'1','3','5','2'};
        o/p => 4
        
        Method 1:       
                using XOR
*/

#include<iostream>
using namespace std;

int getMissingNumber(int arr[],int n) {
  int i;
  int X1 = arr[0];
  int X2 = 1;
  
  for(i=1;i<n;i++) {
    X1 = X1^arr[i];
  }
  
  for(i=2;i <= n+1;i++) {
    X2 = X2^i;
  }
  
  return (X1^X2);
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
