/*


Output Format

For queries of type 3 print the marks of the given student.

Sample Input

7
1 Jesse 20
1 Jess 12
1 Jess 18
3 Jess
3 Jesse
2 Jess
3 Jess
Sample Output

30
20
0

*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    int q, type; 
    cin >> q; 
    map<string,int> clas; 
    string name;
    for (int i(0), mark; i<q; ++i)
    {
        cin >> type >> name;
        if (type == 1){
            cin >> mark;
            clas[name] += mark;
        }
        else if (type == 2)
            clas.erase(name);
        else
            cout << clas[name] << "\n";
    }
    return 0;
}


