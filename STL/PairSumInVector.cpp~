#include <bits/stdc++.h>
using namespace std;

void sum(vector<pair<int,int> >v);



//User function Template for C++

/*the function contains vector of pairs*/
//Complete this function to print the sum
void sum(vector<pair<int,int> >v)
{
   long long sum=0;
    for(int i=0;i<v.size();i++) {
        sum=sum+v[i].second;
    }
    cout<<sum;
    cout<<endl;
}


int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    vector<pair<int,int> >v; //Making a vector that holds pairs
	    for(int i=0;i<n;i++)
	    {
	        int x,y;
	        cin>>x>>y;
	        v.push_back(make_pair(x,y)); //Pushing a pair in the vector
	    } 
	    
	   sum(v); //The sum function
	   
	}
	return 0;
}
