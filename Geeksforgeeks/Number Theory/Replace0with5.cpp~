#include<bits/stdc++.h>
using namespace std;
int convertFive(int n);
 
// Driver program to test above function
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
    	int n;
    	cin>>n;
    	cout<<convertFive(n)<<endl;
    }
}// } Driver Code Ends


/*you are required to complete this method*/
int convertFive(int n)
{
  //Your code here
  string str = to_string(n);
  for(int i=0;i<str.size();i++) {
    if(str[i]=='0') {
      str[i]='5';
    }
  }
  int res = stoi(str); 
  return res;
}

