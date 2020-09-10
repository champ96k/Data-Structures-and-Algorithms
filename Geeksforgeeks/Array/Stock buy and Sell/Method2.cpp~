// { Driver Code Starts
// Program to find best buying and selling days

#include <bits/stdc++.h>
using namespace std;
 
// solution structure
struct Interval
{
    int buy;
    int sell;
};



 // } Driver Code Ends


// solution structure
/* struct Interval
 {
     int buy;
     int sell;
 };*/

// This function finds the buy sell schedule for maximum profit
void stockBuySell(int a[], int n)
{  // Your code here
    std::vector<int> v ;
	    int j=0;
	    for(int i=0;i<n-1;i++){
	        if(a[i]<a[i+1]){
	            v.push_back(i);
	            j=i;
	            while(a[j]<=a[j+1]&& j<n-1){
	                j++;
	            }
	            v.push_back(j);
	            i=j;
	        }
	        
	        
	    }
	    if(v.size()==0){
	        cout<<"No Profit";
	    }
	    else{
	    for(int i=0;i<v.size();i=i+2){
	        cout<<'('<<v[i]<<' '<<v[i+1]<<')'<<' ';
	    }
	    }
    
}



// { Driver Code Starts.
 
// Driver program to test above functions
int main()
{   
    
    int price[10000],n,i,T;
    
    scanf("%d",&T);
    
    while(T--){
        
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
      scanf("%d",&price[i]);
    // fucntion call
    stockBuySell(price, n);
    cout<<endl;
    }
    return 0;
}  // } Driver Code Ends
