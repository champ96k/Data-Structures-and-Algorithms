// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

void QuadraticProbing(vector <int> &hash, int hashSize,int arr[],int sizeOfArray);

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
	    
	    vector<int> hash (hashSize);
	    
	    QuadraticProbing (hash, hashSize, arr, sizeOfArray);
	    
	    for(int i = 0;i < hashSize; i++)
	    cout<<hash[i]<<" ";
	    
	    cout<<endl;
	    
	}
	return 0;
}

// } Driver Code Ends


// Insert all the element of array arr[] (size N)
// fill the hash table hash[] (size hashSize)

void QuadraticProbing(vector <int>&hash, int hashSize, int arr[], int n)
  {
    for(int i = 0 ; i < hashSize ; i++)
     hash[i] = -1;
    
    int freeSpace = hashSize;
    
    for(int i = 0 ; i < n ; i++) {
    
    if(freeSpace == 0)
     return; // because HASH is FULL
    
    int pos = arr[i] % hashSize;
    
    if(hash[pos] == -1) {
            hash[pos] = arr[i];
            freeSpace--;
            continue;
    }
    
    int p = 1;
    
    while(hash[pos] != -1) {
            pos = (arr[i] + (p * p)) % hashSize;
            p++;
    }
    
    hash[pos] = arr[i];
    freeSpace--;
 }

}


