// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

char nonrepeatingCharacter(string S);

int main() {
	
	int T;
	cin >> T;
	
	while(T--)
	{
	
	    string S;
	    cin >> S;
	    
        char ans = nonrepeatingCharacter(S);
        
        if(ans != '$')
	    cout << ans;
        else cout << "-1";
            
        cout << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends


// Complete this function
char nonrepeatingCharacter(string s)
{
   //Your code here
    int count[256] = {0};
    char ans = '$';

        for(int i=0;i<s.length();i++) {
            count[s[i]]++;
        }
        
        for(int i=0;i<s.length();i++) {
            if(count[s[i]]==1) {
                return s[i];
            }
        }
        
        return ans;
   
}

