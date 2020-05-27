#include <iostream>
#include <cstdio>
using namespace std;

/*

Variable Sized Arrays


Input Format

The first line contains two space-separated integers denoting the respective values of  (the number of variable-length arrays) and  (the number of queries).
Each line  of the  subsequent lines contains a space-separated sequence in the format k a[i]0 a[i]1 … a[i]k-1 describing the -element array located at .
Each of the  subsequent lines contains two space-separated integers describing the respective values of  (an index in array ) and  (an index in the array referenced by ) for a query.

Constraints

All indices in this challenge are zero-based.
All the given numbers are non negative and are not greater than 
Output Format

For each pair of  and  values (i.e., for each query), print a single integer denoting the element located at index  of the array referenced by . There should be a total of  lines of output.

Sample Input

2 2
3 1 5 4
5 1 2 8 9 3
0 1
1 3
Sample Output

5
9


*/

int main()
{
 //Ghanendra Yadav
int n,q;
cin>>n>>q;
int** seq=new int* [n];
for(int i=0;i<n;i++)
    {
      int a;
      cin>>a;
      int* b=new int [a];
      for(int j=0;j<a;j++)
        {
          int e;
          cin>>e;
          b[j]=e;
        }
    *(seq+i)=b;
   }

  for(int i=0;i<q;i++)
  {
  int r,s;
  cin>>r>>s;
  cout<<seq[r][s]<<endl;
  }
}
