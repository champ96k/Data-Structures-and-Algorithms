#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void iter(vector<int>::iterator it1,vector<int>::iterator it2);

void iter(vector<int>::iterator it1,vector<int>::iterator it2)
{
    vector<int>::iterator i; 
     for (i = it1; i != it2; i++) 
    { 
        cout << *i << " "; 
    } 
    cout<<endl;
    
    
}

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    vector<int>v;
	    for(int i=0;i<n;i++)
	    {
	        int x;
	        cin>>x;
	        v.push_back(x);
	    }
	    
	    iter(v.begin(),v.end()); //passing begin and end addresses of vector to the function
	   
	}
	return 0;
}


