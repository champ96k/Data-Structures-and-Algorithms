#include<iostream>
using namespace std;

int main() {
  
  int myArray[] = {10,20,30,40,50,60};
  
  cout<<"My Array :"<<myArray<<endl;
  
  cout<<"\n\n**********************"<<endl;
  int n;
  cout<<"How Many Array Element You Want To Insert :";
  cin>>n;
  int arrayElement[n];
  
  //Accept array Element
  for(int i=0;i<n;i++) {
  cout<<"Enter "<<i+1<<" Elements :";
  cin>>arrayElement[i];
  }
  
  cout<<"\n\nPrint array Elements"<<endl;
  for(int i=0;i<n;i++) {
  cout<<"Array ["<<i+1<<"] : "<<arrayElement[i]<<endl;
  }
  
  
  return 0;
}
