/*
You will be given two arrays A and B of positive integers. The number of values in both the arrays will be the same say N. Your task is to find the maximum sum of products of their elements. Each element in A has to be multiplied with exactly one element in B and vice versa such that each element of both the arrays appears exactly once and the sum of product produced is maximum.

if A = {5,1,3,4,2} and B = {8,10,9,7,6} then a possible sum of product is 5*6 + 1*7 + 3*9 + 4*10 + 2*8.

Input:

The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case consists of three lines. The first line consists of N the size of the two arrays. In the next are line N space separated positive integers denoting the values in array A and in the third line are N space separated positive integers denoting the values in array B.

Output:

Print the maximum possible sum of products of the elements for each test case in a new line.
*/

//Tushar Nikam codes
#include<bits/stdc++.h>
using namespace std;

int main()
 {
       int t;
       cin>>t;
       while(t--){
        int n;
        cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        sort(a,a+n);
        sort(b,b+n);
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=a[i]*b[i];
        }
        cout<<sum<<endl;
        }
	//code
	return 0;
}
