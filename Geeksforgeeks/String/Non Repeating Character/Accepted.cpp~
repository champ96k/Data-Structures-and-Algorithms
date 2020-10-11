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
    int idx = -1;
    int n = s.length();
    vector<int> freq(123, 0);
    
    for(int i = n-1 ; i >= 0 ; i--)
     freq[s[i]]++;
     
    for(int i = 0 ; i < n ; i++)
    if(freq[s[i]] == 1)
        return s[i];
        
    return '$';
   
}

