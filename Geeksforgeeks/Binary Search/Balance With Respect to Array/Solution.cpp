/*
As a programmer, it is very necessary to maintain balance in the things you work upon. Here is task for you to maintain this balance. Your task is to find whether a given number x is balanced with respect to a given array a[] which is sorted in a non-decreasing order.Given a sorted array, the ceiling of x is the smallest element in array greater than or equal to x, and the floor is the greatest element smaller than or equal to x.The number 'x' is said to be balanced if the floor is equal to ceil of the number in the array a[].
ie. if (x - floor(x,a)) == (ceil(x,a) - x)
Assume one of floor or ceil does not exist assume 'x' to be balanced. If Key exists in the array so it is Balanced.

Input:
The first line of input contains an integer T denoting the number of test cases. Each test case contains the number of elements in the array a[] as n and next line contains space separated n elements in the array. The following line consists of the number 'x' for which balance is to be checked.

Output:
Output "Balanced" if the number 'x' is balanced otherwise output "Not Balanced".

Constraints:
1<=T<=100
1<=n<=100000
1<=a[i]<=100000
1<=x<=100000

Example:
Input:
2
7
1 2 8 10 10 12 19
5
8
1 2 5 7 8 11 12 15
9
Output:
Balanced
Not Balanced
*/

//Tushar Nikam codes
#include<bits/stdc++.h>
using namespace std;

bool Balance(int a[],int n,int x){
    int low=0,high=n-1,mid,small=-1,large=-1;
    while(low <= high){
       mid = (low+high)/2;
       //cout<<a[mid]<<" ";
       if(a[mid] == x)
         return 1;
        else if(a[mid] > x){
            small = a[mid];
            high = mid-1;
        }
        else{
            large = a[mid];
            low = mid+1;
        }
    }
    if(x-small == large-x || small == -1 || large == -1)
      return 1;
    return 0;
}

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	      cin>>a[i];
	    int x;
	    cin>>x;
	    if(Balance(a,n,x))
	       cout<<"Balanced"<<endl;
	    else
	       cout<<"Not Balanced"<<endl;
	}
	return 0;
}
