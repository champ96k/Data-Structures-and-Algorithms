#include<iostream>
using namespace std;

int main() {

  int myArray[] = {88,552,63,20,96,20,63,741,3256};
  
  for(int i:myArray) {
    cout<<"i : "<<i<<endl;
  }
  
  cout<<"\n\n\n********************"<<endl;
  int n;
  cout<<"How Many Element You Want to Insert :";
  cin>>n;
  int array[n];
  
  cout<<"Enter "<<n<<" Array Eleemnt: ";
  for(int i=0;i<n;i++) {
    cin>>array[i];
  }
  
  cout<<"\nArray Element are : "<<endl;
  for(auto i:array) {
  cout<<i<<endl;
  }

  return 0;
}
