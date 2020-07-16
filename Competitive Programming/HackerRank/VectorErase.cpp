/*

Input Format

The first line of the input contains an integer .The next line contains  space separated integers(1-based index).The third line contains a single integer ,denoting the position of an element that should be removed from the vector.The fourth line contains two integers  and  denoting the range that should be erased from the vector inclusive of a and exclusive of b.



Output Format

Print the size of the vector in the first line and the elements of the vector after the two erase operations in the second line separated by space.

Sample Input

6
1 4 6 2 8 9
2
2 4
Sample Output

3
1 8 9
Explanation

The first query is to erase the 2nd element in the vector, which is 4. Then, modifed vector is {1 6 2 8 9}, we want to remove the range of 2~4, which means the 2nd and 3rd elements should be removed. Then 6 and 2 in the modified vector are removed and we finally get {1 8 9}


*/


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    vector<int>v;
    int n,element,position,start,end,size;
    cin>>n;
    for(int i=0;i<n;i++) {
      cin>>element;
      v.push_back(element);
    }
    
    cin>>position;
    cin>>start>>end;
    
    v.erase(v.begin()+position-1);
    v.erase(v.begin()+start-1,v.begin()+end-1);
    
    size = v.size();
    cout<<size<<endl;
    
    for(int i=0;i<size;i++) {
      cout<<v[i]<<" ";
    }
    
     
    return 0;
}

