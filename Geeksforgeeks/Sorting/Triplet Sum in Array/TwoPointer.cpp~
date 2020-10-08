// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends



bool find3Numbers(int A[], int arr_size, int sum)
{
    int l, r;

   
    sort(A, A+arr_size);

    
    for (int i = 0; i < arr_size - 2; i++)
    {

        l = i + 1; // index of the first element in the remaining elements
        r = arr_size-1; // index of the last element
        while (l < r)
        {
            if( A[i] + A[l] + A[r] == sum)
                return true;
            else if (A[i] + A[l] + A[r] < sum)
                l++;
            else // A[i] + A[l] + A[r] > sum
                r--;
        }
    }

    return false;
}


// { Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int N,sum;
		cin>>N>>sum;
		int i,A[N];
		for(i=0;i<N;i++)
			cin>>A[i];
        cout <<  find3Numbers(A, N, sum) << endl;
    }
}
