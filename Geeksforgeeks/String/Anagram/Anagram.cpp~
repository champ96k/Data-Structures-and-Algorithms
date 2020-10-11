
#include <bits/stdc++.h>
using namespace std;

/*  Function to check if two strings are anagram
*   c, d: input string
*/
bool isAnagram(string c, string d){
    
    int l1 = c.length();
    int l2 = d.length();
    
    if(l1!=l2) 
        return false;
    
    sort(c.begin(),c.end());
    sort(d.begin(),d.end());
    
    if(c==d) {
        return true;
    } else {
        false;
    }
}

int main() {
    int t;
    cin >> t;
    while(t--){
        string c, d;
        cin >> c >> d;
        if(isAnagram(c, d)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
