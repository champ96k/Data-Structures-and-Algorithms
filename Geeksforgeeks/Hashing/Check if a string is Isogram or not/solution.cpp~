// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

bool isIsogram(string s);

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        
        string s;
        cin>>s;
        
        cout<<isIsogram(s)<<endl;
        
    }
	return 0;
}// } Driver Code Ends


//Complete this function
bool isIsogram(string s)
{
    //Your code here
    unordered_map<int,int>m;
    for(int i=0;i<s.size();i++) {
        m[s[i]]++;
    }
    
     for(int i=0;i<s.size();i++) {
        if(m[s[i]]>1) {
            return 0;
        }
    }
    return 1;
}
