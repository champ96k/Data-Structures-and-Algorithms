#include<bits/stdc++.h>
using namespace std;


// Function to find the two repeated element
// arr: input array
// N: denoting that the size of array is N + 2 and range of elements is [1, N]
// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends






// Function to find the two repeated element
// arr: input array
// N: denoting that the size of array is N + 2 and range of elements is [1, N]
pair<int,int> twoRepeated(int a[], int n)
{    
    
    
    pair<int , int > res;
    bool first = false;
    // iterating over the array elements
    for(int i=0;i<n+2;i++)
    {
        // making the visited elements negative
        if(a[abs(a[i])]>0)
            a[abs(a[i])]=-a[abs(a[i])];
        
        // if the number was visited previously
        // then this would be the repeated element
        else
            {
                if(first == false)
                    {
                        res.first = abs(a[i]);
                        first = true;
                    }
                else
                    {
                        res.second = abs(a[i]);
                        break;
                    }
            }
            
    }
    
    return res;
    
    
}



// { Driver Code Starts.

int main()
{
    int t,n;
    cin>>t;
    
    while(t--)
    {
        cin>>n;
        
        int a[n+2];
        
        for(int i=0;i<n+2;i++)
            cin>>a[i];
        
        pair<int , int>res;
        res = twoRepeated(a, n);
        cout<<res.first<<" "<<res.second<<endl;
    }
    return 0;
}
  // } Driver Code Ends


int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n;
        cin>>n;
        
        int a[n+2];
        
        for(int i=0;i<n+2;i++)
            cin>>a[i];
        
        twoRepeated(a, n);
    }
    return 0;
}
