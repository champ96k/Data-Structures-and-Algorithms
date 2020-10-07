// { Driver Code Starts
// A Sample C++ program for beginners with Competitive Programming
#include <iostream>
using namespace std;

void binSort(int A[], int N);


int main() {
	int T;
	cin>>T;
	// Input the number of testcases
	while(T--)
	{
	    int N;
	    cin>>N; //Input size of array N
	    int A[N]; 
	    
	    for(int i = 0; i  < N; i++)
	      cin>>A[i];
	      
	    binSort(A,N);
	    
	    for(int x:A)
	    cout<<x<<" ";
	      
	    cout<<endl;
	}
	return 0;
}



// } Driver Code Ends


// Function to sort the array A[]
// A[]: input array
// N: input array
void binSort(int a[], int n)
{
        int l = -1;
        for(int i = 0; i < n; i++) {
             if(a[i] == 0) {
                l++;
                swap(a[l], a[i]);
            
            }
        }

}
