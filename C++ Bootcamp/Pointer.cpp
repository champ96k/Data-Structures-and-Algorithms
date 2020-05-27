#include<bits/stdc++.h>
using namespace std;


/*
Input Format

Input will contain two integers,  and , separated by a newline.

Output Format

You have to print the updated value of  and , on two different lines.


P.S.: Input/ouput will be automatically handled. You only have to complete the void update(int *a,int *b) function.

Sample Input

4
5
Sample Output

9
1

*/
void update(int *p1, int *p2) {
  

  int diff=*p1-*p2;
  
  cout<<*p1+*p2<<endl;
  cout<<((*p1>*p2) ? *p1-*p2 : *p2-*p1 )<<endl;
  
}

int main() {
  
  int n1,n2;
  cin>>n1>>n2;
  int *ptr1 = &n1,*ptr2 = &n2;
  
  update(ptr1,ptr2);
    
  return 0;
}


