/*
Matrix Multiplication
Write a program to print multiplication of 2 matrices.

Input:

first matrix elements:
1 1 1
2 2 2
3 3 3
second matrix elements
1 1 1
2 2 2
3 3 3
Output:

multiplication of the matrix:
6 6 6
12 12 12
18 18 18

*/

#include<iostream>
using namespace std;

int main() {
  
  int row1,col1,i,j,k,arr1[10][10],arr2[10][10],mul[10][10];
  cout<<"Enter Number of Rows of Matrix1: ";
  cin>>row1;
  cout<<"Enter Number Of Column of Matrix1:";
  cin>>col1;
  
  
  cout<<"Enter First Matrix Element: ";
  
  //Accepet Matrix input
  for(i=0;i<row1;i++) {
    for(j=0;j<col1;j++) {
      cin>>arr1[i][j];
    }
  }
  
  
 
  
  cout<<"Enter Second Matrix Element: ";
  
  //Accepet Matrix input
  for(i=0;i<row1;i++) {
    for(j=0;j<col1;j++) {
      cin>>arr2[i][j];
    }
  }
  
  cout<<"\n\nMatrix 1\n\n";
  
  //Display Matrix1
  for(i=0;i<row1;i++) {
    for(j=0;j<col1;j++) {
      cout<<arr1[i][j]<<" ";
    }
    cout<<endl;
  }
  
  cout<<"\n\nMatrix 2\n\n"; 
  
  //Display Matrix2
  for(i=0;i<row1;i++) {
    for(j=0;j<col1;j++) {
      cout<<arr2[i][j]<<" ";
    }
    cout<<endl;
  }
  
  
  //Matrix Multiplication
  for(i=0;i<row1;i++) {
    for(j=0;j<col1;j++) {
      mul[i][j]=0;
      for(k=0;k<col1;k++) {
        mul[i][j]+=arr1[i][k]*arr2[k][j];
      }
    }
  }
  
  cout<<"\n\nMultiplication Of Matrxi1 and Matrxi2: \n\n"; 
  
  //Display Mul Matrix
  for(i=0;i<row1;i++) {
    for(j=0;j<col1;j++) {
      cout<<mul[i][j]<<" ";
    }
    cout<<endl;
  }
  


  return 0;
}





































