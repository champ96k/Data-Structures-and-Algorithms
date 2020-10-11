// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


/*  Function to check if two strings are anagram
*   c, d: input string
*/
bool isAnagram(string c, string d){
    
    // Your code here
    int a[256] = {0};
    
    for(int i = 0;i<c.length();i++){
        a[c[i]-'a']++;
    }
    
    for(int i = 0; i<d.length();i++){
            a[d[i]-'a']--;
        }
        
    bool flag = true;
        
        for(int i = 0;i<26;i++){
            if(a[i] != 0){
                flag = false;
                break;
            }
        }

        return flag;

}


// { Driver Code Starts.

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
  // } Driver Code Ends
