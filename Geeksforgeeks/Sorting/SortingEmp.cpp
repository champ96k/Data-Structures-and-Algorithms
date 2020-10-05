#include <bits/stdc++.h>
using namespace std;
struct node{
	int salary;
	string name;
};


/* struct node{          // node structure
     int salary;
     string name;
 };
*/



class Solution{

	public:
	

	static bool cmp(node &x,node &y)
	{
	    if(x.salary==y.salary)
	        return x.name<y.name;
	    return x.salary<y.salary;
	}

	void sortRecords(node arr[], int n)
	{
	    sort(arr,arr+n,cmp);
	}
	 

};

int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
        cin>>n;
        node arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i].name>>arr[i].salary;
        

        Solution ob;
        ob.sortRecords(arr, n);
        for(int i=0;i<n;i++)
        	cout<<arr[i].name<<" "<<arr[i].salary<<" ";
	    cout << "\n";
	     
    }
    return 0;
}
