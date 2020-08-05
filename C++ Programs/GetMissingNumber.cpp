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
  
  int t;
  cin>>t;
  while(t--) {
    int n;
          cin>>n;
          int arr[n];
          
          for(int i=0;i<n-1;i++) {
            cin>>arr[i];
          }
          
          int MissingNum = getMissingNumber(arr,n-1);
          cout<<MissingNum<<endl;
  }
  
  return 0;
}	
