/*
// { Driver Code Starts
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
int convert0To5Rec(int num) 
{ 
    // Base case for recursion termination 
    if (num == 0) 
        return 0; 
  
    // Extraxt the last digit and 
    // change it if needed 
    int digit = num % 10; 
    if (digit == 0) 
        digit = 5; 
  
    // Convert remaining digits and 
    // append the last digit 
    return convert0To5Rec(num / 10) * 10 + digit; 
} 
  
// It handles 0 and calls convert0To5Rec() 
// for other numbers 
int convertFive(int num) 
{ 
    if (num == 0) 
        return 5; 
    else
        return convert0To5Rec(num); 
} 
*/

// { Driver Code Starts
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
int convert0To5Rec(int num) 
{ 
    // Base case for recursion termination 
    if (num == 0) 
        return 0; 
  
    // Extraxt the last digit and 
    // change it if needed 
    int digit = num % 10; 
    if (digit == 0) 
        digit = 5; 
  
    // Convert remaining digits and 
    // append the last digit 
    return convert0To5Rec(num / 10) * 10 + digit; 
} 
  
// It handles 0 and calls convert0To5Rec() 
// for other numbers 
int convertFive(int num) 
{ 
    if (num == 0) 
        return 5; 
    else
        return convert0To5Rec(num); 
} 
