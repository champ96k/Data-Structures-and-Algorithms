#include<bits/stdc++.h>
using namespace std;


/*
Input Format

The first line of the input contains ,where  is the number of integers.The next line contains  integers separated by a space.

Constraints


, where  is the  integer in the array.

Output Format

Print the  integers of the array in the reverse order in a single line separated by a space.

Sample Input

4
1 4 3 2
Sample Output

2 3 4 1

*/

int main() {
  
  int n;
  cin>>n;
  int array[n];
  
  for(int i=0;i<n;i++) {
    cin>>array[i];
  }
  
  for(int j=n-1; j>=0;j--)
    {
      cout<<array[j]<<" ";
    }

  return 0;
}
