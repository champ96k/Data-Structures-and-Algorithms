// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


vector<int> linearProbing(int hashSize,int arr[],int sizeOfArray);
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int hashSize;
	    cin>>hashSize;
	    
	    int  sizeOfArray;
	    cin>>sizeOfArray;
	    int arr[sizeOfArray];
	    
	    for(int i=0;i<sizeOfArray;i++)
	    cin>>arr[i];
	    
	    vector<int> hash;
	    
	    hash = linearProbing( hashSize, arr, sizeOfArray);
	    
	    for(int i=0;i<hashSize;i++)
	    cout<<hash[i]<<" ";
	    
	    cout<<endl;
	    
	    
	}
	return 0;
}

// } Driver Code Ends


//Complete this function

vector<int> linearProbing(int hashSize, int arr[], int N)
{
    //Your code here
    vector<int>v(hashSize,-1);
    int hs=hashSize;
    
    for(int i=0;i<N;i++) {
        
        if(hs==0)
            return v;
        
        int key=arr[i]%hashSize;
        while(v[key]!=-1) 
            key=(key+1)%hashSize;
        
        
        v[key]=arr[i];
        hs--;
    }
    return v;
    
}

