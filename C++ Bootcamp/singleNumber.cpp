/*
Given a non-empty array of integers, every element appears twice except for one. Find that single one.

Note:

Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory?

Example 1:

Input: [2,2,1]
Output: 1
*/

#include<iostream>
using namespace std;

int main() {
  
  int num;
  cout<<"How Many Array Element You Want to Insert: ";
  cin>>num;
  
  int array[num];
  for(int i=0;i<num;i++) {
  cout<<"Enter ["<<i+1<<"] :";
  cin>>array[i];
  }
  
  cout<<"Store Element are :";
  for(int j: array) {
    cout<<j<<" ";
  }
  
  int count=0,firstu=0,secondu=0;
  int rnumber[num];
  for(int i=0;i<num;i++) {
    for(int j=i+1;j<num;j++) {
    
      if(array[i]!=array[j]) {
        firstu = array[i];
        secondu = array[j];
      }
      else {
      cout<<rnumber[i]<<" ";
      }
      
      
    }
  }
  
  for(int i=0;i<num;i++) {
    for(int j=i+1;j<num;j++) {
      if(rnumber[i]==firstu || rnumber[i]==secondu) {
        cout<<"Number "<<rnumber[i];
      }
      else {
        cout<<"First Unique :"<<firstu<<endl;
        cout<<"Seocnd Unique :"<<secondu<<endl;
      }
    }
  }
  
 
  
  cout<<"First Unique :"<<firstu<<endl;
  cout<<"Seocnd Unique :"<<secondu<<endl;
  
  for(int i=0;i<num;i++) {
    cout<<rnumber[i]<<" ";
  }
  
  
  return 0;
}
  

